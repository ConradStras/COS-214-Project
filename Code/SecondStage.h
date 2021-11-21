//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_SECONDSTAGE_H
#define COS_214_PROJECT_SECONDSTAGE_H
#include "Stage.h"
#include "LaunchState.h"
class SecondStage :public Stage{
public:
    SecondStage(int nineorheavy);
    SecondStage(int nineorheavy, int EngineNo, State* eState, State* lState, State* pState);
    void increaseEngineCount();
    void increaseSatelliteCount();
    ~SecondStage();
    // State things
    void currentStatus();
    //fires the entire second stage, i.e. depositPayload and fire.
    void handleChange(FalconRocket *);
    // fires the engine, changing its state.
    void fire();
    // deposit's the payload in space, changing its state.
    void depositPayload();

private:
    int noSatellites;
    bool buildComplete;
};


#endif //COS_214_PROJECT_SECONDSTAGE_H
