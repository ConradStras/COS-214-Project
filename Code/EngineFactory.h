//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_ENGINEFACTORY_H
#define COS_214_PROJECT_ENGINEFACTORY_H
#include "SpaceXFactory.h"
#include "MerlinEngine.h"
#include "VacuumEngine.h"
class EngineFactory:public SpaceXFactory{
public:
    Engine* createEngine(string e);
    Dragon* createDragon(string d);
};


#endif //COS_214_PROJECT_ENGINEFACTORY_H
