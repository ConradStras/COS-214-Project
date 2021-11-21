//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_DRAGONFACTORY_H
#define COS_214_PROJECT_DRAGONFACTORY_H
#include "SpaceXFactory.h"
#include "CrewDragon.h"
#include "DragonSpacecraft.h"
class DragonFactory:public SpaceXFactory{
public:
    Engine* createEngine(string e);
    Dragon* createDragon(string d);
};


#endif //COS_214_PROJECT_DRAGONFACTORY_H
