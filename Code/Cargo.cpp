//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#include "Cargo.h"
#include <iostream>

using namespace std;

Cargo::~Cargo() {
    cout << "CARGO DESTRUCTOR\n";
}

Cargo::Cargo() : Contents("Cargo") {}

void Cargo::print() {
    Contents::print();
}
