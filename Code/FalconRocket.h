//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_FALCONROCKET_H
#define COS_214_PROJECT_FALCONROCKET_H
#include <iostream>
#include <string>
#include <vector>
#include "Stages.h"
using namespace std;

class FalconRocket{ //Component in Decorator DP
public:
    virtual void add(FalconRocket*)=0;
    virtual void print()=0; //print engines + totals?
    virtual void remove()=0;
private:
    Stages* stage; //FalconRocket has 2 stages
};

#endif //COS_214_PROJECT_FALCONROCKET_H
