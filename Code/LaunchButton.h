//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_LAUNCHBUTTON_H
#define COS_214_PROJECT_LAUNCHBUTTON_H
#include "Button.h"
#include "FalconRocket.h"
#include "Command.h"

using namespace std;

class LaunchButton : public Button {
public:
    void pressLaunchHeavy();
    void pressLaunchNine();

private:
    Command *command;
};


#endif //COS_214_PROJECT_LAUNCHBUTTON_H
