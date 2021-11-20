//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "FalconRocket.h"

void FalconRocket::print() {
    cout<<"Stage 1: "<<stages[0]->getEngineNo()<<" engine(s)."<<endl;
    cout<<"Stage 2: "<<stages[1]->getEngineNo()<<" engine(s)."<<endl;
}

void FalconRocket::setStageState(Stage * stagein, int stageno) {
    delete this->stages[stageno];
    stages[stageno] = stagein;
}

void FalconRocket::add(vector<Engine *>, int stage) {

}

//stageNo 0 = First Stage, 1 = Second Stage, 2 = Both stages.
void FalconRocket::launch(int stageNo) {
    if(stageNo == 0) stages[0]->handleChange(this);
    if(stageNo == 1) stages[1]->handleChange(this);
    else{
        stages[0]->handleChange(this);
        stages[1]->handleChange(this);
    }
}

void FalconRocket::createMemento() {

}

void FalconRocket::setMemento() {

}

void FalconRocket::getStageStatus() {
    stages[0]->currentStatus();
    stages[1]->currentStatus();
}

Stage * FalconRocket::getStage(int stageNo) {
    return stages[stageNo];
}

void FalconRocket::createMemento() {

}

void FalconRocket::setMemento() {

}

FalconRocket::~FalconRocket() {
//this needs to be implemented for Engine and stage deletion, might be tricky.

}
