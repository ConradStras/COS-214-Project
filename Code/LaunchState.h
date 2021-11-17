//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_LAUNCHSTATE_H
#define COS_214_PROJECT_LAUNCHSTATE_H
#include "State.h"

class LaunchState : public State {

public:
    string currentState();
    virtual void handleChange(FalconRocket *rocket);
private:
    bool launchState;
};


#endif //COS_214_PROJECT_LAUNCHSTATE_H
