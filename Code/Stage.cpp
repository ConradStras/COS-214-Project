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

bool Stage::setLaunchState(bool in) {
    return false;
}
