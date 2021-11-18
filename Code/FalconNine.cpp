//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "FalconNine.h"
void FalconNine::print() {
    FalconRocket::print();
}

FalconNine::FalconNine() {
    stages[0] = new FirstStage(9);
    stages[1] = new SecondStage(9);
}

FalconNine::~FalconNine() {

}

void FalconNine::add(FalconRocket *) {

}

void FalconNine::remove() {

}

void FalconNine::getStageState() {

}

void FalconNine::createMemento() {

}

void FalconNine::setMemento() {

}
