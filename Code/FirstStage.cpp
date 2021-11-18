//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "FirstStage.h"
#include "FalconRocket.h"

using namespace std;
FirstStage::FirstStage(int nineorheavy) {
    NineOrHeavy = nineorheavy;
    Stage::setEngineNo(0);
}


void FirstStage::increaseEngineCount() {
    Stage::setEngineNo(Stage::getEngineNo()+1);
}

void FirstStage::handleChange(FalconRocket* rocket) {

}

void FirstStage::printContents() {

}

void FirstStage::fire() {

}

FirstStage::~FirstStage() {

}

bool FirstStage::currentState(int NineOrHeavy) { //heavy == 0 Nine == 9
    if(NineOrHeavy == 9){ //we need 9 merlin Eninges.
        if(Stage::getEngineNo() == 9)
        {

        }
    }
    else{

    }
}
