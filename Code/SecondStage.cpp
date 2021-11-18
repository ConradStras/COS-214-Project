//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "SecondStage.h"

SecondStage::SecondStage() {
    Stage::setEngineNo(0);
    noSatellites = 0;
}

void SecondStage::increaseEngineCount() {
    Stage::setEngineNo(Stage::getEngineNo()+1);
}

void SecondStage::increaseSatelliteCount() {
    noSatellites = noSatellites+1;
}

SecondStage::~SecondStage() {

}

bool SecondStage::currentState() {
    return false;
}

void SecondStage::handleChange() {

}

void SecondStage::printContents() {

}

void SecondStage::fire() {

}

void SecondStage::depositPayload() {

}
