//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_FALCONNINE_H
#define COS_214_PROJECT_FALCONNINE_H
#include "FalconRocket.h"
#include "FirstStage.h"
#include "SecondStage.h"

///@brief Representation of Falcon 9 Rocket, a type of Falcon Rocket.
///@details Will be decorated with Engines to simulate stage 1 and stage 2 of launch
///         Contains satellite vectors to simulate satellite clusters in Low Orbit Launch
///@author Charlotte,Conrad
///@version Final

class FalconNine: public FalconRocket{

public:
    FalconNine(const string& name);
    ~FalconNine();
    void getStageStatus();
    void add(vector<Engine*>, int stage);
    void addSatellite(SpaceXProperty* s);
    void launch(int stageNo);
    void print();

protected:
    int noSatellites;
    vector<SpaceXProperty*> satellites;
};

#endif //COS_214_PROJECT_FALCONNINE_H
