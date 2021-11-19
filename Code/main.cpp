//
// Created by Conrad Strasheim on 2021/11/15.
//
#include "FalconRocket.h"
#include "FalconHeavy.h"
#include "FalconNine.h"
#include "MerlinEngine.h"
#include "FirstStage.h"
using namespace std;

int main(){
//    Charlotte Testing:
    FalconRocket* f1 = new FalconNine();
    f1->print();
    cout<<endl;
    Engine* e1 = new MerlinEngine();
    Engine* e2 = new MerlinEngine();

    e1->add(e2);
    f1->add(e1,1);
//    f1->add(e2,1);
    f1->print();
    return 0;
}
