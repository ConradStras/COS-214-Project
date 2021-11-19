//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "Stage.h"

State * Stage::getPayloadState() {
    return payloadState;
}

State * Stage::getEngineState() {
    return engineState;
}

int Stage::getEngineNo() {
    return noEngines;
}

void Stage::setEngineNo(int no) {
    noEngines = no;
}

State * Stage::getLaunchState() {
    return launchState;
}


void Stage::setLaunchState(State* state) {
    delete this->launchState;
    this->launchState =  state;
}

void Stage::setPayloadState(State *state) {
    delete this->payloadState;
    this->payloadState = state;
}

void Stage::setEngineState(State *state) {
    delete this->engineState;
    this->engineState = state;
}

Stage::~Stage() {}
