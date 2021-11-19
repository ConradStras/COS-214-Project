//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_LAUNCHSTATE_H
#define COS_214_PROJECT_LAUNCHSTATE_H
#include "State.h"

class LaunchState : public State {

public:
    LaunchState();
    ~LaunchState();
    string currentStatus();
    void handleChange(FalconRocket* );
    void launch(); // this is the handleChange method in the state DP, incorporate with command
    //DP
private:
    bool launchState;
};


#endif //COS_214_PROJECT_LAUNCHSTATE_H
