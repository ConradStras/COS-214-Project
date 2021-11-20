//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "LaunchButton.h"

void LaunchButton::pressLaunchHeavy() {

    command->fireUpFalconHeavy();
}

void LaunchButton::pressLaunchNine() {

    command->fireUpFalconNine();
}