//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "FalconHeavy.h"

FalconHeavy::FalconHeavy(const string& name){
    FalconRocket::setName(name);
    stages[0] = new FirstStage(0);
    stages[1] = new SecondStage(0);
}

FalconHeavy::~FalconHeavy() {

}

void FalconHeavy::print() {
    cout<<"Falcon Heavy: "<<endl;
    FalconRocket::print();
}

void FalconHeavy::add(vector<Engine*> vec, int stage) {
    for(int i =0; i<vec.size(); i++){
        if(stage==1){
            if(stages[0]->getEngineNo()<27){
                FirstStageEngines.push_back(vec.at(i));
                stages[0]->increaseEngineCount();
            }
            else
                cout<<"The first stage of Falcon Heavy does not need any more engines!"<<endl;
        }
        else if(stage==2){
            if(stages[1]->getEngineNo()<1){
                SecondStageEngines.push_back(vec.at(i));
                stages[1]->increaseEngineCount();
            }
            else
                cout<<"The second stage of Falcon Heavy does not need any more engines!"<<endl;
        }
    }
}

void FalconHeavy::remove() {

}

void FalconHeavy::getStageStatus() {
    FalconRocket::getStageStatus();
}

void FalconHeavy::launch(int stageNo) {
    FalconRocket::launch(stageNo);
}




