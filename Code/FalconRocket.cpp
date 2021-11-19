//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "FalconRocket.h"

void FalconRocket::print() {
    cout<<"Stage 1: "<<stages[0]->getEngineNo()<<endl;
    cout<<"Stage 2: "<<stages[1]->getEngineNo()<<endl;
}

int FalconRocket::getEngineCount() {
    //return noEngines;
}

int FalconRocket::getSatelliteCount() {
    //return noSatellites;
}

void FalconRocket::setEngineCount(int e) {
   // noEngines = e;
}

void FalconRocket::setSatelliteCount(int c) {
    //noSatellites = c;
}

void FalconRocket::setStageState(Stage * stagein, int stageno) {
    delete this->stages[stageno];
    stages[stageno] = stagein;
}

//stageNo 0 = First Stage, 1 = Second Stage, 2 = Both stages.
void FalconRocket::launch(int stageNo) {
    if(stageNo == 0) stages[0]->handleChange(this);
    if(stageNo == 1) stages[1]->handleChange(this);
    else{
        stages[0]->handleChange(this);
        stages[2]->handleChange(this);
    }
}

//void FalconRocket::add(Engine * f, int stage) {
//    if(stage==1){
//        FirstStageEngines.push_back(f);
//        stages[0]->increaseEngineCount();
//    }
//    else if(stage==2){
//        SecondStageEngines.push_back(f);
//        stages[0]->increaseEngineCount();
//    }
//}
