//
// Created by Conrad Strasheim on 2021/11/15.
//

#include <string>
#include "SecondStage.h"
#include "FalconRocket.h"

SecondStage::SecondStage(int nineorheavy) {
    NineOrHeavy =  nineorheavy;
    Stage::setEngineNo(0);
    noSatellites = 0;
    Stage::setPayloadState(new LaunchState());
    Stage::setEngineState(new LaunchState());
    Stage::setLaunchState(new LaunchState());
}

void SecondStage::increaseEngineCount() {
    Stage::setEngineNo(Stage::getEngineNo()+1);
}

void SecondStage::increaseSatelliteCount() {
    noSatellites = noSatellites+1;
}

SecondStage::~SecondStage() {}

void SecondStage::currentStatus() {
    if (Stage::getEngineNo() == 1) buildComplete = true;
    else buildComplete = false;
    cout<<"The Engine parts:"<<endl;
    getEngineState()->currentStatus();
    cout<<"The launch state of the entire stage: "<<endl;
    getLaunchState()->currentStatus();
    cout<<"The state of the payload is: "<<endl;
    getPayloadState()->currentStatus();
    cout << "Build status: ";
    if(buildComplete) cout<<"Finished Building"<<endl;
    else cout <<" Not yet finished building, current engines: "<<Stage::getEngineNo()<<endl;

}

void SecondStage::handleChange(FalconRocket * rocket) {
    Stage::getEngineState()->handleChange(rocket);
    Stage::getLaunchState()->handleChange(rocket);
    Stage::getPayloadState()->handleChange(rocket);
    rocket->setStageState(new SecondStage(NineOrHeavy, Stage::getEngineNo(),
                                         Stage::getEngineState(), Stage::getLaunchState(),
                                         Stage::getPayloadState()),1);
}


void SecondStage::fire() {

}

void SecondStage::depositPayload() {

}

SecondStage::SecondStage(int nineorheavy, int EngineNo, State *eState, State *lState, State *pState) {
    NineOrHeavy =  nineorheavy;
    Stage::setEngineState(eState);
    Stage::setLaunchState(lState);
    Stage::setEngineNo(EngineNo);
    Stage::setPayloadState(pState);
}
