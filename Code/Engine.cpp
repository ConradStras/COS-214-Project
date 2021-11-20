//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "Engine.h"
void Engine::add(FalconRocket *f) {
    if(engine== nullptr)
        engine = f;
    else {
        engine->add(f);
    }
}

void Engine::add(Engine* e, int stage){
    if(stage==1){
        first.push_back(e);
    }
    else if(stage==2){
        second.push_back(e);
    }
}

void Engine::print() {
    engine->print();
}

void Engine::remove() {
    if(engine!= nullptr) {
        delete engine; //added this before making it null.
        engine = nullptr; //not sure about this?
    }
}

Engine* Engine::clone() {
    return new Engine();
}

void Engine::getStageStatus() {
    FalconRocket::getStageStatus();
}
