//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#ifndef COS_214_PROJECT_CONTENTS_H
#define COS_214_PROJECT_CONTENTS_H
#include "Dragon.h"
using namespace std;

class Contents{
    public: 
        Contents(const string& type);
        ~Contents();
        void print();
        void add(Contents* dragonContent);
        const string &getType() const;
    private:
        string type;
        Contents* content;
};


#endif //COS_214_PROJECT_CONTENTS_H
