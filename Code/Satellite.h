//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_SATELLITE_H
#define COS_214_PROJECT_SATELLITE_H

#include "FalconRocket.h"

class Satellite:public FalconRocket{ //Decorator in Decorator DP, Prototype in Prototype DP
public:
    Satellite* clone();
    void add(Engine*, int stage){}; //remove
    void print();
    void remove();
private:
    FalconRocket* satellite;
};


#endif //COS_214_PROJECT_SATELLITE_H
