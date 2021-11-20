//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_FALCONNINE_H
#define COS_214_PROJECT_FALCONNINE_H
#include "FalconRocket.h"
#include "FirstStage.h"
#include "SecondStage.h"
class Satellite;
class FalconNine: public FalconRocket{
    // so that it can access the private members in falcon rocket
public:
    FalconNine(const string& name);
    ~FalconNine();
    void getStageStatus();
    void add(vector<Engine*>, int stage);
//    void addSatellite(Satellite* s);
    void launch(int stageNo);
    void remove();
    void print();
    int getSatelliteCount();
    void incrementSatellites();
};

#endif //COS_214_PROJECT_FALCONNINE_H
