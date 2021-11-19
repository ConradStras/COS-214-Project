//
// Created by Conrad Strasheim on 2021/11/15.
//

#include <string>
#include "SecondStage.h"

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

string SecondStage::currentStatus() {
    return "placeholder";
}

void SecondStage::handleChange(FalconRocket *) {

}

void SecondStage::printContents() {

}

void SecondStage::fire() {

}

void SecondStage::depositPayload() {

}
