//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#include "Contents.h"
#include <iostream>

Contents::Contents() {
    this->content = NULL;
    cout << "CONTENTS CONSTRUCTOR\n";
}

Contents::~Contents() {
    cout << "CONTENTS DESTRUCTOR\n";
}

void Contents::add(Dragon* dragonContent) {
     if(content == NULL) {
        this->content = dragonContent;
    } else {
        (this->content)->add(dragonContent);
    }
}
