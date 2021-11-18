//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_FALCONHEAVY_H
#define COS_214_PROJECT_FALCONHEAVY_H
#include "FalconRocket.h"

class FalconHeavy: public FalconRocket{
    // so that it can access the private members in falconRocket.
    friend class FalconRocket;
public:
    FalconHeavy();
    ~FalconHeavy();
    void add(FalconRocket*);
    void print();
    void remove();
    void getStageState();
    void createMemento();
    void setMemento();
};


#endif //COS_214_PROJECT_FALCONHEAVY_H
