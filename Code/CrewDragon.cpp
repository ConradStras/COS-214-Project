//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#include "CrewDragon.h"
#include <iostream>
#include "Contents.h"
CrewDragon::CrewDragon(string type)  : Dragon(type){
    cout << "CREWDRAGON CONSTRUCTOR\n";
}

CrewDragon::~CrewDragon() {
    cout << "CREWDRAGON DESTRUCTOR\n";
}

void CrewDragon::handleContent(Contents *content) {
    if(content->getType() == "Humans") {
        cout << "Humans boarded CrewDragon.\n";
    } else if(content->getType() == "Cargo") {
        cout << "Cargo loaded onto CrewDragon.\n";
    }
    Dragon::add(content);
}