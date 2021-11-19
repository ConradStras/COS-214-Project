//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "LaunchState.h"

LaunchState::LaunchState() {
    launchState = false;
}

LaunchState::~LaunchState() {}

void LaunchState::launch() {
    launchState = true;
}

void LaunchState::handleChange(FalconRocket *) {}

string LaunchState::currentStatus() {
    if(launchState) return "has been launched.";
    else return "has not been launched.";
}
