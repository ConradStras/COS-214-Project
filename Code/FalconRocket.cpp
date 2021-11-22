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
    else if(stageNo == 1) stages[1]->handleChange(this);
    else{
        stages[0]->handleChange(this);
        stages[1]->handleChange(this);
    }
}

void FalconRocket::getStageStatus() {
    cout<<"The status of the Falcon Rocket: "<<name<<endl;
    cout<<"==================================================================="<<endl;
    cout<< "The Falcon Rocket's first stage status is:"<<endl;
    stages[0]->currentStatus();
    cout<< endl;
    cout<< "The Falcon Rocket's second stage status is:"<<endl;
    stages[1]->currentStatus();
    cout<<"==================================================================="<<endl;
}

Stage * FalconRocket::getStage(int stageNo) {
    return stages[stageNo];
}

FalconRocket::~FalconRocket() {
//this needs to be implemented for Engine and stage deletion, might be tricky.

}

void FalconRocket::setName(string name) {
    this->name = name;
}

void FalconRocket::reinstateMemento() {
    stages[0] = mem->stages[0];
    stages[1] = mem->stages[1];
}


Memento FalconRocket::createMemento() {
    mem = new Memento(stages[0], stages[1]);
}

void FalconRocket::addSatellite(Satellite *) {
    //implemented in Falcon Nine only
}

string FalconRocket::getName() {
    return name;
}

