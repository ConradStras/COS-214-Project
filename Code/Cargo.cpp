//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#include "Cargo.h"
#include <iostream>

Cargo::Cargo() {
    this->type = "Cargo";
    cout << "CARGO CONSTRUCTOR\n";
}

Cargo::~Cargo() {
    cout << "CARGO DESTRUCTOR\n";
}
