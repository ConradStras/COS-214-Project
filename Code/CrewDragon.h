//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#ifndef COS_214_PROJECT_CREWDRAGON_H
#define COS_214_PROJECT_CREWDRAGON_H
#include "Dragon.h"

class CrewDragon : public Dragon {
    public: 
        CrewDragon();
        ~CrewDragon();
        void handleContent(Dragon*);
};


#endif //COS_214_PROJECT_CREWDRAGON_H
