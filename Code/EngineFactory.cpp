//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "EngineFactory.h"
Engine* EngineFactory::createEngine(string e){
    if(e=="merlin"){
        Engine* engine = new MerlinEngine();
        return engine;
    }
    else if(e=="vacuum"){
        Engine* engine = new VacuumEngine();
        return engine;
    }
    return 0;
}

Dragon* EngineFactory::createDragon(string d) {
    return 0;
}