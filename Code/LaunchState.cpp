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

void LaunchState::currentStatus() {
    if(launchState)  cout<<"The part has been launched/deposited/fired."<<endl;
    else cout<<"The part has not been launched/deposited/fired."<<endl;
}
