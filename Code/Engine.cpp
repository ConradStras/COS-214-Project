//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "Engine.h"
void Engine::add(FalconRocket *f) {
    if(engine== nullptr)
        engine = f;
    else
        engine->add(f);
}

void Engine::print() {
    engine->print();
}

void Engine::remove() {
    if(engine!= nullptr)
        engine = nullptr; //not sure about this?
}

void Engine::clone() {

}