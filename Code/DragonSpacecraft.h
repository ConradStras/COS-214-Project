//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#ifndef COS_214_PROJECT_DRAGONSPACECRAFT_H
#define COS_214_PROJECT_DRAGONSPACECRAFT_H
#include "Dragon.h"

class DragonSpacecraft : public Dragon {
    public:
        DragonSpacecraft();
        ~DragonSpacecraft();
        void handleContent();
};


#endif //COS_214_PROJECT_DRAGONSPACECRAFT_H
