//
// Created by Conrad Strasheim on 2021/11/17.
//

#ifndef COS_214_PROJECT_STATE_H
#define COS_214_PROJECT_STATE_H
#include <string>
#include <iostream>

using namespace std;
class FalconRocket;

class State {
public:
    virtual string currentStatus()=0;
    virtual void handleChange(FalconRocket*) = 0;
};


#endif //COS_214_PROJECT_STATE_H
