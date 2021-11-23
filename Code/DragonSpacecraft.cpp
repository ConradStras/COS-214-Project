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


//Observer edit


void DragonSpacecraft :: attach(Observer *observer){
    list_observer.push_back(observer);
}

void DragonSpacecraft :: detach(Observer *observer){
    list_observer.remove(observer);
}

void DragonSpacecraft :: numberOfObservers(){
    cout << "There are " << list_observer.size() << " observers in the list."<<endl;
}

void DragonSpacecraft :: createMessage(string message = "Empty") {
    this->message = message;
    notify();
  }

void DragonSpacecraft :: notify() {
    list<Observer *>::iterator iterator = list_observer.begin();
    numberOfObservers();
    while (iterator != list_observer.end()) {
        (*iterator)->update(message);
        ++iterator;
    }
}