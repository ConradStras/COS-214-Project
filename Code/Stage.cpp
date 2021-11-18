//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "Stage.h"

bool Stage::getPayloadState() {
    return payloadState->currentState();
}

bool Stage::getEngineState() {
    return engineState->currentState();
}

int Stage::getEngineNo() {
    return noEngines;
}

int Stage::setEngineNo(int no) {
    noEngines = no;
}

bool Stage::getLaunchState() {
    return launchState->currentState();
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
