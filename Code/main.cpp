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
#include "DragonSpacecraft.h"
#include "CrewDragon.h"
#include "Humans.h"
#include "Cargo.h"
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
    Satellite* s1 = new Satellite();
    f1->addSatellite(s1);

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
    // Testing dragons.
    Contents * arrHumansAndCargo[20];
    for (int i = 0; i < 20; ++i) {
        if (i % 2 == 0) arrHumansAndCargo[i] = new Humans();
        else arrHumansAndCargo[i] = new Cargo();
    }
    Dragon * dragons[6];
    for (int i = 0; i < 6; ++i) {
        if(i % 2 == 0) {
            dragons[i] = new DragonSpacecraft("Space Dragon " + to_string(i));
        }
        else dragons[i] = new CrewDragon("Crew Dragon "  + to_string(i));
    }
    dragons[0]->addDelegator(dragons[1]);
    dragons[2]->addDelegator(dragons[3]);
    dragons[4]->addDelegator(dragons[5]);
    for (int i = 1 ; i < 6; ++i) {
        for (int j = 0; j < 20; ++j) {
            dragons[i]->handleContent(arrHumansAndCargo[j]);
        }
        dragons[i]->print();
    }
    //Done testing dragons.
    return 0;
}
