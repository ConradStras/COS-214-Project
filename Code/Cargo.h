//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#ifndef COS_214_PROJECT_CARGO_H
#define COS_214_PROJECT_CARGO_H
#include "Contents.h"
#include <string>

class Cargo : public Contents {
    public: 
        Cargo();
        ~Cargo();
    private:
        string type;
};


#endif //COS_214_PROJECT_CARGO_H
