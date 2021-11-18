//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "FalconHeavy.h"
void FalconHeavy::print() {
    FalconRocket::print();
}

FalconHeavy::FalconHeavy() {
    stages[0] = new FirstStage();
    stages[1] = new SecondStage();
}

FalconHeavy::~FalconHeavy() {

}

void FalconHeavy::add(FalconRocket *) {

}

void FalconHeavy::remove() {

}

void FalconHeavy::getStageState() {

}

void FalconHeavy::createMemento() {

}

void FalconHeavy::setMemento() {

}
