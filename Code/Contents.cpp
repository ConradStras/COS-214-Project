//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#include "Contents.h"
#include <iostream>

using namespace std;
Contents::Contents(const string& type) : type(type) {
    this->content = NULL;
}

Contents::~Contents() {
    cout << "CONTENTS DESTRUCTOR\n";
}

void Contents::add(Contents* dragonContent) {
    if(content == nullptr) content = dragonContent;
    else{
        content->add(dragonContent);
    }
}

void Contents::print() {
    cout<<Contents::getType();
}

const string &Contents::getType() const {
    return type;
}

