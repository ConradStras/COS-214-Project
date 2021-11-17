//
// Created by Conrad Strasheim on 2021/11/17.
//

#ifndef COS_214_PROJECT_STATE_H
#define COS_214_PROJECT_STATE_H
#include "FalconRocket.h"

using namespace std;

class FalconRocket;

class State {
public:
    virtual string currentState()= 0;
    virtual void handleChange() = 0;
    virtual ~State();
};


#endif //COS_214_PROJECT_STATE_H
