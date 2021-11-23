//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#include "CrewDragon.h"
#include <iostream>
#include "Contents.h"
CrewDragon::CrewDragon(string type)  : Dragon(type){}

CrewDragon::~CrewDragon() {
    cout << "CREWDRAGON DESTRUCTOR\n";
}

void CrewDragon::handleContent(Contents *content) {
    if(content->getType() == "Humans") {
        cout << "Humans boarded "<<Dragon::getType()<<".\n";
    } else if(content->getType() == "Cargo") {
        cout << "Cargo loaded onto "<<Dragon::getType()<<".\n";
    }
    Dragon::add(content);
}


//Observer edit

void CrewDragon :: attach(Observer *observer){
    list_observer.push_back(observer);
}

void CrewDragon :: detach(Observer *observer){
    list_observer.remove(observer);
}

void CrewDragon :: numberOfObservers(){
    cout << "There are " << list_observer.size() << " observers in the list."<<endl;
}

void CrewDragon :: createMessage(string message = "Empty") {
    this->message = message;
    notify();
  }

void CrewDragon :: notify() {
    list<Observer *>::iterator iterator = list_observer.begin();
    numberOfObservers();
    while (iterator != list_observer.end()) {
        (*iterator)->update(message);
        ++iterator;
    }
}