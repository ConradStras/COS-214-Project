//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_SPACEXFACTORY_H
#define COS_214_PROJECT_SPACEXFACTORY_H
#include <iostream>
#include <string>
#include "Engine.h"
#include "Dragon.h"
class SpaceXFactory{
public:
    virtual Engine* createEngine(string e){return 0;};
//    virtual Satellite* createSatellite(); implement with clone to demonstrate prototype
    virtual Dragon* createDragon(string d){return 0;};
};


#endif //COS_214_PROJECT_SPACEXFACTORY_H
