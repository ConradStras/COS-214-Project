//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_FALCONHEAVY_H
#define COS_214_PROJECT_FALCONHEAVY_H
#include "FalconRocket.h"
#include "FirstStage.h"
#include "SecondStage.h"
class FalconHeavy: public FalconRocket{
    // so that it can access the private members in falconRocket.
    friend class FalconRocket;
public:
    FalconHeavy(const string& name);
    ~FalconHeavy();
    void add(vector<Engine*>, int stage);
    void launch(int stageNo);
    void print();
    void getStageStatus();
};


#endif //COS_214_PROJECT_FALCONHEAVY_H
