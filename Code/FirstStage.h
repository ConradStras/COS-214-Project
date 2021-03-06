//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_FIRSTSTAGE_H
#define COS_214_PROJECT_FIRSTSTAGE_H
#include "Stage.h"

using namespace std;

class FirstStage :public Stage{
public:
    // State things
    FirstStage(int nineorheavy);
    FirstStage(int nineorheavy, int EngineNo, State* eState, State* lState);
    FirstStage(int nineorheavy, int EngineNo, State* eState, State* lState, vector<Engine *> engineIn);
    void currentStatus();
    void increaseEngineCount();
    void handleChange(FalconRocket*);
    // Stage things, strategy design pattern
    // fire changes the launch state
    ~FirstStage();
private:
    int NineOrHeavy; //9 = nine , heavy = 0.
    bool buildComplete;
};


#endif //COS_214_PROJECT_FIRSTSTAGE_H
