//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_STAGE_H
#define COS_214_PROJECT_STAGE_H
#include "State.h"

class Stage: public State{
    //will probably have to make FalconRocket a friend class.
    //Stage is strategy DP for the different stages in the different rocket classes.

public:
    virtual void increaseEngineCount() = 0;
    virtual void printContents() = 0;
    virtual void fire() = 0;
    virtual bool getPayloadState();
    virtual bool getEngineState();
    virtual bool getLaunchState();
    virtual bool setLaunchState(bool in); //maybe necessary
    int getEngineNo();
    int setEngineNo(int no);
private:
    int noEngines;
    State * payloadState;
    State * engineState;
    State * launchState;
};


#endif //COS_214_PROJECT_STAGE_H
