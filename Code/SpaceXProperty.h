//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_SPACEXPROPERTY_H
#define COS_214_PROJECT_SPACEXPROPERTY_H

#include <vector>
#include <string>
#include <iostream>
#include "Observer.h"

using namespace std;
class SpaceXProperty {
    public:
        virtual void attach(Observer*)=0;
        virtual void detach(Observer*)=0;
        virtual void notify()=0;
        virtual SpaceXProperty* clone();
        virtual ~SpaceXProperty();
};



#endif //COS_214_PROJECT_SPACEXPROPERTY_H
