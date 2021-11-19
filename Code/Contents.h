//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#ifndef COS_214_PROJECT_CONTENTS_H
#define COS_214_PROJECT_CONTENTS_H
#include "Dragon.h"

class Contents : public Dragon {
    public: 
        Contents();
        ~Contents();
        void add(Dragon* dragonContent);
    private:
        Dragon* content;
};


#endif //COS_214_PROJECT_CONTENTS_H
