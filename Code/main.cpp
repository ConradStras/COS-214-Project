//
// Created by Conrad Strasheim on 2021/11/15.
//
#include <iostream>
#include "FalconRocket.h"
#include "FalconHeavy.h"
#include "FalconNine.h"
#include "MerlinEngine.h"
#include "VacuumEngine.h"
#include "Command.h"
#include "Button.h"
#include "Launch.h"

using namespace std;

int main(){
//    Charlotte Testing:
    FalconRocket* f1 = new FalconNine("Brooklyn Nine Nine");
    FalconRocket* f2 = new FalconHeavy("We will steal the moon.");
    f1->print();
    cout<<endl;
    f2->print();
    cout<<endl;
    Engine* e1 = new MerlinEngine();
    Engine* e2 = new MerlinEngine();
    Engine* e3 = new VacuumEngine();
    Engine* e4 = new MerlinEngine();
    Engine* e5 = new MerlinEngine();
    //add all engines to a singular engine, add that engine to the rocket (for Decorator DP)
    e1->add(e2,1);
    e1->add(e3,2);
    e1->add(e4,1);
    e1->add(e5,1);
    //Nice work Charlotte!
    f1->add(e1->first,1);
    f1->add(e2->second,2);
//    f1->add(e1,1);
//    f1->add(e3, 2);
//    f1->add(e2,1);
    f1->print();
    cout<<endl;
    f2->add(e1->first,1);
    f2->add(e2->first,2);
    f2->print();

    f1->getStageStatus();
    f1->launch(0);
    f1->getStageStatus();
    f1->launch(1);
    f1->getStageStatus();

    Command *command = new Launch(f1);
    Button* button= new Button(command);

    button->pressFireUpNine();

    return 0;
}
