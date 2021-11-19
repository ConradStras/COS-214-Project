//
// Created by Conrad Strasheim on 2021/11/15.
//
#include "FalconRocket.h"
#include "FalconHeavy.h"
#include "FalconNine.h"
#include "MerlinEngine.h"
#include "VacuumEngine.h"
#include "FirstStage.h"
using namespace std;

int main(){
//    Charlotte Testing:
    FalconRocket* f1 = new FalconNine();
    f1->print();
    cout<<endl;
    Engine* e1 = new MerlinEngine();
    Engine* e2 = new MerlinEngine();
    Engine * e3 = new VacuumEngine();

    e1->add(e2);
    //Nice work Charlotte!
    f1->add(e1,1);
    f1->add(e3, 2);
    f1->add(e2,1);
    f1->print();
    //added a vacuum engine as well, works as well.

    return 0;
}
