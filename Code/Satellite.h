//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_SATELLITE_H
#define COS_214_PROJECT_SATELLITE_H
#include "SpaceXProperty.h"
class Satellite:public SpaceXProperty{ //Prototype in Prototype DP
public:
    SpaceXProperty* clone();
};


#endif //COS_214_PROJECT_SATELLITE_H
