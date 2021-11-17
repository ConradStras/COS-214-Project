//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_STAGE_H
#define COS_214_PROJECT_STAGE_H
#include "FalconRocket.h"

class Stage {
    //will probably have to make FalconRocket a friend class.
    //Stage is strategy DP for the different stages in the different rocket classes.

public:
    virtual void printContents() = 0;
    virtual void fire() = 0;
    virtual void depositPayload() = 0;
};


#endif //COS_214_PROJECT_STAGE_H
