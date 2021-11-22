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
    this->launchState =  state;
}

void Stage::setPayloadState(State *state) {
    this->payloadState = state;
}

void Stage::setEngineState(State *state) {
    this->engineState = state;
}

Stage::~Stage() {}


int Stage::getNoH() const {
    return NineOrHeavy;
}

void Stage::addEngine(Engine* e) {
    engines.push_back(e);
}

vector<Engine *> Stage::getEngineVec() {
    return engines;
}
