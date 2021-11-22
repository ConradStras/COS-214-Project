//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#ifndef COS_214_PROJECT_CREWDRAGON_H
#define COS_214_PROJECT_CREWDRAGON_H
#include "Dragon.h"

using namespace std;

class CrewDragon : public Dragon {
    public: 
        CrewDragon(string type);
        ~CrewDragon();
        void handleContent(Contents *);
};


#endif //COS_214_PROJECT_CREWDRAGON_H
