//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "Engine.h"
void Engine::add(FalconRocket *f) {
    if(engine== nullptr)
        engine = f;
    else
        engine->add(f);
    
    int temp = engine->getEngineCount();
    engine->setEngineCount(temp+1);
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