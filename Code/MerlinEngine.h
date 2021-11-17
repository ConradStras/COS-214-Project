//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_MERLINENGINE_H
#define COS_214_PROJECT_MERLINENGINE_H

#include "Engine.h"
class MerlinEngine:public Engine{
    void print();
    Engine* clone();
};


#endif //COS_214_PROJECT_MERLINENGINE_H
