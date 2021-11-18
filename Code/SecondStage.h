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
    void increaseEngineCount();
    void increaseSatelliteCount();
    ~SecondStage();
    // State things
    bool currentState();
    //make FalconRocket a friend class to facilitate changes.
    void handleChange(FalconRocket *);
    //Stage things
    void printContents();
    // fires the engine, changing its state.
    void fire();
    // deposit's the payload in space, changing its state.
    void depositPayload();

private:
    int NineOrHeavy;
    int noSatellites;
    bool buildComplete;
};


#endif //COS_214_PROJECT_SECONDSTAGE_H
