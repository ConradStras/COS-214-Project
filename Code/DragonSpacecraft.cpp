//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#include "DragonSpacecraft.h"
#include <iostream>

DragonSpacecraft::DragonSpacecraft() {
     cout << "DRAGONSPACECRAFT CONSTRUCTOR\n";
}

DragonSpacecraft::~DragonSpacecraft() {
     cout << "DRAGONSPACECRAFT DESTRUCTOR\n";
}

void DragonSpacecraft::handleContent(Dragon* content) {
    if(content.type == "Cargo") {
        cout << "Cargo loaded onto DragonSpacecraft.\n";
    } else {
       Dragon::handleRequest(content);
    }
}