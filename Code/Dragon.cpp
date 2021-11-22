//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#include "Dragon.h"
#include <iostream>
#include "Contents.h"

Dragon::~Dragon() {
    cout << "DRAGON DESTRUCTOR\n";
}

void Dragon::add(Contents * contents) {
        allTheContent.push_back(contents);
}

void Dragon::handleContent(Contents * content ) {
    if(nextDragon) {
        cout<<"The content has been pushed to the appropriate Dragon: "<<nextDragon->type<<endl;
        nextDragon->handleContent(content);
    }
}

Dragon::Dragon(string type) {
    this->type =type;
    nextDragon = nullptr;
}


void Dragon::print() {
    cout<<"The Dragon named "<<type<<" has the following content"<<endl;
    vector<Contents*>:: iterator it;
    for (it = allTheContent.begin(); it != allTheContent.end(); ++it) {
        (*it)->print();
        cout << endl;
    }
}

void Dragon::addDelegator(Dragon *nextD) {
    nextDragon = nextD;
}

const string &Dragon::getType() const {
    return type;
}
