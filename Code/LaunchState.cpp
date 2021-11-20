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

void LaunchState::handleChange(FalconRocket *) {
    if(launchState) launchState = false;
    else launchState = true;
}

string LaunchState::currentStatus() {
    if(launchState) return "The part has been launched/deposited/fired.";
    else return "The part has not been launched/deposited/fired.";
}
