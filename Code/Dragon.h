//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#ifndef COS_214_PROJECT_DRAGON_H
#define COS_214_PROJECT_DRAGON_H
#include "SpaceXProperty.h"


class Dragon : public SpaceXProperty {    //INHERIT FROM SPACE X PROPERTY?
    public: 
        Dragon();
        ~Dragon();
        void add(Dragon*);
        void handleContent(Dragon*);
    private:
        Dragon* next;
};


#endif //COS_214_PROJECT_DRAGON_H
