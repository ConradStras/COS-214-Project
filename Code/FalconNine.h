//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_FALCONNINE_H
#define COS_214_PROJECT_FALCONNINE_H
#include "FalconRocket.h"
#include "Stage.h"
class FalconNine: public FalconRocket{
    // so that it can access the private members in falcon rocket
    friend class FalconRocket;
public:
    FalconNine(){};
    ~FalconNine(){};
    void add(FalconRocket*){};
    void print();
    void remove(){};
    void getStageState(){};
    void createMemento(){};
    void setMemento(){};
};


#endif //COS_214_PROJECT_FALCONNINE_H
