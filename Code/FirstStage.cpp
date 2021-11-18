//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "FirstStage.h"

using namespace std;
FirstStage::FirstStage() {
    Stage::setEngineNo(0);
}


void FirstStage::increaseEngineCount() {
    Stage::setEngineNo(Stage::getEngineNo()+1);
}

void FirstStage::handleChange() {

}

void FirstStage::printContents() {

}

void FirstStage::fire() {

}

FirstStage::~FirstStage() {

}
