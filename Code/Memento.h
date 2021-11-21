//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_MEMENTO_H
#define COS_214_PROJECT_MEMENTO_H
#include "FirstStage.h"
#include "SecondStage.h"
#include "FalconRocket.h"
class Memento {
public:
    virtual ~Memento();
private:
    friend class FalconRocket;
    Memento(Stage *Stage1, Stage *Stage2);
    Stage * stages[2];
};


#endif //COS_214_PROJECT_MEMENTO_H
