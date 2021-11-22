//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_ENGINE_H
#define COS_214_PROJECT_ENGINE_H

#include "FalconRocket.h"

class Engine : public FalconRocket{ //Decorator in Decorator DP, Prototype in Prototype DP
public:
    virtual void add(Engine*, int stage);
    vector<Engine*> first;
    vector<Engine*> second;
};


#endif //COS_214_PROJECT_ENGINE_H
