//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#include "Dragon.h"
#include <iostream>

Dragon::Dragon() {
    cout << "DRAGON CONSTRUCTOR\n";
}

Dragon::~Dragon() {
    cout << "DRAGON DESTRUCTOR\n";
}

void Dragon::add(Dragon*) {
}

void Dragon::handleContent(Dragon* content) {
    if(next) {
        next->handleContent(content);
    }
}