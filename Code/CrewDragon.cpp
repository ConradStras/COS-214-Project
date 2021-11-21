//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#include "CrewDragon.h"
#include <iostream>

CrewDragon::CrewDragon() {
    cout << "CREWDRAGON CONSTRUCTOR\n";
}

CrewDragon::~CrewDragon() {
    cout << "CREWDRAGON DESTRUCTOR\n";
}

void CrewDragon::handleContent(Dragon* content) {
    if(content.type == "Humans") {
        cout << "Humans boarded CrewDragon.\n";
    } else if(content.type == "Cargo") {
        cout << "Cargo loaded onto CrewDragon.\n"; 
    } else {
       Dragon::handleRequest(content);
    }
}