//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "FirstStage.h"
#include "FalconRocket.h"

using namespace std;
FirstStage::FirstStage(int nineorheavy) {
    NineOrHeavy = nineorheavy;
    Stage::setEngineNo(0);
    //Second stage is where the payload is important, no payload implementation in firststage.
    Stage::setLaunchState(new LaunchState());
    Stage::setEngineState(new LaunchState());
    Stage::setPayloadState(nullptr);
}

FirstStage::FirstStage(int nineorheavy, int EngineNo, State* eState, State * lState){
    NineOrHeavy = nineorheavy;
    Stage::setEngineState(eState);
    Stage::setLaunchState(lState);
    Stage::setEngineNo(EngineNo);
    Stage::setPayloadState(nullptr);
}

int FirstStage::getNoH(){
    return NineOrHeavy;
}

void FirstStage::increaseEngineCount() {
    Stage::setEngineNo(Stage::getEngineNo()+1);
}

void FirstStage::handleChange(FalconRocket* rocket) {
    Stage::getEngineState()->handleChange(rocket);
    Stage::getLaunchState()->handleChange(rocket);
    rocket->setStageState(new FirstStage(NineOrHeavy, Stage::getEngineNo(),
                    Stage::getEngineState(), Stage::getLaunchState()),0);
}

void FirstStage::fire() {

}

FirstStage::~FirstStage() {

//    Stage::~Stage();
}

void FirstStage::currentStatus() { //heavy == 0 Nine == 9
    if(NineOrHeavy == 9){ //we need 9 merlin Engines.
        if(Stage::getEngineNo() == 9) buildComplete = true;
    }
    else  buildComplete = false;
    stringstream ss;
    cout<<"The engines parts:"<<endl;
    getEngineState()->currentStatus();
    cout<<"The launch state of the entire stage:"<<endl;
    getLaunchState()->currentStatus();
    ss << "Build status: ";
    if (buildComplete) ss << "Finished Building" <<endl;
    else ss << "Not yet finished building, current engines:"<<Stage::getEngineNo()<<endl;
    cout << ss.str();
}
