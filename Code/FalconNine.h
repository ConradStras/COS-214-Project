//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_FALCONNINE_H
#define COS_214_PROJECT_FALCONNINE_H
#include "FalconRocket.h"
#include "FirstStage.h"
#include "SecondStage.h"
class FalconNine: public FalconRocket{
    // so that it can access the private members in falcon rocket
public:
    FalconNine();
    ~FalconNine();
    void getStageStatus();
    void add(vector<Engine*>, int stage);
    void launch(int stageNo);
    void print();
    void remove();
    void createMemento();
    void setMemento();
};

#endif //COS_214_PROJECT_FALCONNINE_H
