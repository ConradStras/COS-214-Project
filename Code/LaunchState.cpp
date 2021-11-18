//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "LaunchState.h"

LaunchState::LaunchState() {
    launchState = false;
}

LaunchState::~LaunchState() {}

bool LaunchState::currentState() {
    return launchState;
}

void LaunchState::launch() {
    launchState = true;
}

void LaunchState::handleChange(FalconRocket *) {}
