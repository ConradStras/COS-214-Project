//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#include "Humans.h"
#include <iostream>

Humans::Humans() {
    this->type = "Humans";
    cout << "HUMANS CONSTRUCTOR\n";
}

Humans::~Humans() {
    cout << "HUMANS DESTRUCTOR\n";
}
