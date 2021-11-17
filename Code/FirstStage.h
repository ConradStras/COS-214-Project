//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_FIRSTSTAGE_H
#define COS_214_PROJECT_FIRSTSTAGE_H
#include "State.h"
#include "Stage.h"
#include "LaunchState.h"
class FirstStage : public State, public Stage{
public:
    // State things
    string currentState();
    void handleChange();
    // Stage things, strategy design pattern
    void printContents();
    // fire changes the launch state
    void fire();
    ~FirstStage();
private:
    LaunchState* launchState;
};


#endif //COS_214_PROJECT_FIRSTSTAGE_H
