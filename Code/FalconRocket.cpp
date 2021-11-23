//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "FalconRocket.h"

void FalconRocket::print() {
    cout<<"Stage 1: "<<stages[0]->getEngineNo()<<" engine(s)."<<endl;
    cout<<"Stage 2: "<<stages[1]->getEngineNo()<<" engine(s)."<<endl;
}

void FalconRocket::setStageState(Stage * stagein, int stageno) {
    delete this->stages[stageno];
    stages[stageno] = stagein;
}

void FalconRocket::add(vector<Engine *>, int stage) {

}

//stageNo 0 = First Stage, 1 = Second Stage, 2 = Both stages.
void FalconRocket::launch(int stageNo) {
    if(stageNo == 0) stages[0]->handleChange(this);
    else if(stageNo == 1) stages[1]->handleChange(this);
    else{
        stages[0]->handleChange(this);
        stages[1]->handleChange(this);
    }
}

void FalconRocket::getStageStatus() {
    cout<<"The status of the Falcon Rocket: "<<name<<endl;
    cout<<"==================================================================="<<endl;
    cout<< "The Falcon Rocket's first stage status is:"<<endl;
    stages[0]->currentStatus();
    cout<< endl;
    cout<< "The Falcon Rocket's second stage status is:"<<endl;
    stages[1]->currentStatus();
    cout<<"==================================================================="<<endl;
}

Stage * FalconRocket::getStage(int stageNo) {
    return stages[stageNo];
}


void FalconRocket::setName(string name) {
    this->name = name;
}

void FalconRocket::reinstateMemento(Memento * memIn) {
    stages[0] = memIn->stages[0];
    stages[1] = memIn->stages[1];
}


Memento  * FalconRocket::createMemento() {
    return  new Memento(stages[0], stages[1]);
}

void FalconRocket::addSatellite(SpaceXProperty *) {
    //implemented in Falcon Nine only
}

string FalconRocket::getName() {
    return name;
}

//Observer edit

// FalconRocket:: ~FalconRocket(){
//     cout<<"Deleting FalconRocket"<<endl;
// }

void FalconRocket :: attach(Observer *observer){
    list_observer.push_back(observer);
}

void FalconRocket :: detach(Observer *observer){
    list_observer.remove(observer);
}

void FalconRocket :: numberOfObservers(){
    cout << "There are " << list_observer.size() << " observers in the list."<<endl;
}

void FalconRocket :: createMessage(string message = "Empty") {
    this->message = message;
    notify();
  }

void FalconRocket :: notify(){
    list<Observer *>::iterator iterator = list_observer.begin();
    numberOfObservers();
    while (iterator != list_observer.end()) {
        (*iterator)->update(message);
        ++iterator;
    }
}


FalconRocket::~FalconRocket() {

}



