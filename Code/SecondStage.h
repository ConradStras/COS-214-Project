//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_SECONDSTAGE_H
#define COS_214_PROJECT_SECONDSTAGE_H
#include "State.h"
#include "Stage.h"
#include "LaunchState.h"
class SecondStage :public State, public Stage{
public:
    // State things
    string currentState();
    //make FalconRocket a friend class to facilitate changes.
    void handleChange();
    //Stage things
    void printContents();
    // fires the engine, changing its state.
    void fire();
    // deposit's the payload in space, changing its state.
    void depositPayload();

private:
    LaunchState * payloadState;
    LaunchState * engineState;
};


#endif //COS_214_PROJECT_SECONDSTAGE_H
