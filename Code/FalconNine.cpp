//
// Created by Conrad Strasheim on 2021/11/15.
//


#include "FalconNine.h"

using namespace std;

void FalconNine::print() {
    FalconRocket::print();
}

FalconNine::FalconNine() {
    stages[0] = new FirstStage(9);
    stages[1] = new SecondStage(9);
}

FalconNine::~FalconNine() {

}

void FalconNine::add(vector<Engine*> vec, int stage) {
//    if(stage==1){
//        if(stages[0]->getEngineNo()<9){
//            FirstStageEngines.push_back(e);
//            stages[0]->increaseEngineCount();
//        }
//        else
//            cout<<"The first stage of Falcon 9 does not need any more engines!"<<endl;
//    }
//    else if(stage==2){
//        if(stages[1]->getEngineNo()<1){
//            SecondStageEngines.push_back(e);
//            stages[1]->increaseEngineCount();
//        }
//        else
//            cout<<"The second stage of Falcon 9 does not need any more engines!"<<endl;
//    }

    for(int i =0; i<vec.size(); i++){
        if(stage==1){
            if(stages[0]->getEngineNo()<9){
                FirstStageEngines.push_back(vec.at(i));
                stages[0]->increaseEngineCount();
            }
            else
                cout<<"The first stage of Falcon 9 does not need any more engines!"<<endl;
        }
        else if(stage==2){
            if(stages[1]->getEngineNo()<1){
                SecondStageEngines.push_back(vec.at(i));
                stages[1]->increaseEngineCount();
            }
            else
                cout<<"The second stage of Falcon 9 does not need any more engines!"<<endl;
        }
    }
}

void FalconNine::remove() {

}

void FalconNine::getStageStatus() {
    FalconRocket::getStageStatus();
}

void FalconNine::createMemento() {

}

void FalconNine::setMemento() {

}

void FalconNine::launch(int stageNo) {
    FalconRocket::launch(stageNo);
}

