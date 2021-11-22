//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#include "Humans.h"
#include <iostream>

using namespace std;

Humans::Humans() : Contents("Humans") {}

Humans::~Humans() {
    cout << "HUMANS DESTRUCTOR\n";
}
