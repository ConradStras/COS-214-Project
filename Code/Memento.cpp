//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "Memento.h"

Memento::Memento(Stage *Stage1, Stage *Stage2) {
    stages[0] = new FirstStage(Stage1->getNoH(), Stage1->getEngineNo(), Stage1->getEngineState(), Stage1->getLaunchState(), Stage1->getEngineVec());
    stages[1] = new SecondStage(Stage2->getNoH(), Stage2->getEngineNo(),
                                Stage2->getEngineState(), Stage2->getLaunchState(), Stage2->getPayloadState(), Stage2->getEngineVec());
}


Memento::~Memento() {
    delete stages[0];
    delete stages[1];
}
