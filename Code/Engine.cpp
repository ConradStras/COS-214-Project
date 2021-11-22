//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "Engine.h"

void Engine::add(Engine* e, int stage){
    if(stage==1){
        first.push_back(e);
    }
    else if(stage==2){
        second.push_back(e);
    }
}

