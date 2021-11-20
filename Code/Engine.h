//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_ENGINE_H
#define COS_214_PROJECT_ENGINE_H

#include "FalconRocket.h"

class Engine : public FalconRocket{ //Decorator in Decorator DP, Prototype in Prototype DP
public:
    virtual Engine* clone(); //implemented in concrete classes
    virtual void add(Engine*, int stage);
    void remove();
    vector<Engine*> first;
    vector<Engine*> second;
};


#endif //COS_214_PROJECT_ENGINE_H
