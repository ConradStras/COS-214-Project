//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_STAGE_H
#define COS_214_PROJECT_STAGE_H
#include "State.h"
#include <vector>
class Engine;
class Stage: public State{
    //will probably have to make FalconRocket a friend class.
    //Stage is strategy DP for the different stages in the different rocket classes.

public:
    virtual void handleChange(FalconRocket *) = 0;
    virtual void currentStatus() = 0;
    virtual void increaseEngineCount() = 0;
    virtual void addEngine(Engine* e);
    //Getters and setters.
    virtual State * getPayloadState();
    virtual void setPayloadState(State* state);
    virtual State * getEngineState();
    virtual void setEngineState(State* state);
    virtual State * getLaunchState();
    virtual void setLaunchState(State* state); //maybe necessary
    int getEngineNo();
    void setEngineNo(int no);
    virtual ~Stage();
protected:
    vector<Engine*> engines;
    int NineOrHeavy;
public:
    int getNoH() const;

private:
    int noEngines;
    State * payloadState;
    State * engineState;
    State * launchState;
};


#endif //COS_214_PROJECT_STAGE_H
