//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#include "DragonSpacecraft.h"
#include "Contents.h"
#include <iostream>

using namespace std;

DragonSpacecraft::DragonSpacecraft(string type) : Dragon(type) {}

DragonSpacecraft::~DragonSpacecraft() {
     cout << "DRAGONSPACECRAFT DESTRUCTOR\n";
}

void DragonSpacecraft::handleContent(Contents *content) {
    if(content->getType() == "Cargo") {
        cout << "Cargo loaded onto " <<Dragon::getType()<<".\n";
        Dragon::add(content);
    }
    else {
       Dragon::handleContent(content);
    }
}