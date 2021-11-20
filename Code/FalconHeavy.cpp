//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "FalconHeavy.h"
void FalconHeavy::print() {
    FalconRocket::print();
}

FalconHeavy::FalconHeavy() {
    stages[0] = new FirstStage(0);
    stages[1] = new SecondStage(0);
}

FalconHeavy::~FalconHeavy() {

}

void FalconHeavy::add(Engine* e, int stage) {
    if(stage==1){
        if(stages[0]->getEngineNo()<27){
            FirstStageEngines.push_back(e);
            stages[0]->increaseEngineCount();
        }
        else
            cout<<"The first stage of Falcon Heavy does not need any more engines!"<<endl;
    }
    else if(stage==2){
        if(stages[1]->getEngineNo()<1){
            SecondStageEngines.push_back(e);
            stages[1]->increaseEngineCount();
        }
        else
            cout<<"The second stage of the Falcon Heavy does not need any more engines!"<<endl;
    }
}

void FalconHeavy::remove() {

}

void FalconHeavy::getStageStatus() {
    FalconRocket::getStageStatus();
}

void FalconHeavy::createMemento() {

}

void FalconHeavy::setMemento() {

}

void FalconHeavy::launch(int stageNo) {
    FalconRocket::launch(stageNo);
}



