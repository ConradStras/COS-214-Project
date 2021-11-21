//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "DragonFactory.h"
Dragon* DragonFactory::createDragon(string d) {
    if(d=="crew"){
        Dragon* dragon = new CrewDragon(d);
        return dragon;
    }
    else if(d=="spacecraft"){
        Dragon* dragon = new DragonSpacecraft(d);
        return dragon;
    }
    return 0;
}

Engine* DragonFactory::createEngine(string e) {
    return 0;
}