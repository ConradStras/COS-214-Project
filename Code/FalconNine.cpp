//
// Created by Conrad Strasheim on 2021/11/15.
//


#include "FalconNine.h"
using namespace std;

FalconNine::FalconNine(const string& name) {
    FalconRocket::setName(name);
    stages[0] = new FirstStage(9);
    stages[1] = new SecondStage(9);
}

FalconNine::~FalconNine() {

}

void FalconNine::print() {
    cout<<"FALCON 9: "<<getName()<<endl;
    cout<<"Satellite count: "<<noSatellites<<endl;
    FalconRocket::print();
}

void FalconNine::add(vector<Engine*> vec, int stage) {
    for(int i =0; i<vec.size(); i++){
        if(stage==1){
            if(stages[0]->getEngineNo()<9){
//                FirstStageEngines.push_back(vec.at(i));
                stages[0]->addEngine(vec.at(i));
                stages[0]->increaseEngineCount();
            }
            else
                cout<<"The first stage of Falcon 9 does not need any more engines!"<<endl;
        }
        else if(stage==2){
            if(stages[1]->getEngineNo()<1){
                stages[1]->addEngine(vec.at(i));
                stages[1]->increaseEngineCount();
            }
            else
                cout<<"The second stage of Falcon 9 does not need any more engines!"<<endl;
        }
    }
}


void FalconNine::getStageStatus() {
    FalconRocket::getStageStatus();
}
void FalconNine::launch(int stageNo) {
    FalconRocket::launch(stageNo);
}

void FalconNine::addSatellite(SpaceXProperty *s) {
    if(noSatellites<60){
        satellites.push_back(s);
        noSatellites++;
    }
    else
        cout<<"No more than 60 satellites can be launched to Low Earth Orbit."<<endl;
}


