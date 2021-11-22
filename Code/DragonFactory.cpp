//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "DragonFactory.h"
#include <cstring>
Dragon* DragonFactory::createDragon(string d) {
    string s1="Crew Dragon";
    string s2="Space Dragon";

//    if(d=="Crew Dragon"){
//        Dragon* dragon = new CrewDragon(d);
//        return dragon;
//    }
//    else if(d=="Space Dragon"){
//        Dragon* dragon = new DragonSpacecraft(d);
//        return dragon;
//    }
//    return 0;
    if(strstr(d.c_str(),s1.c_str())){
        Dragon* dragon = new CrewDragon(d);
        return dragon;
    }
    else if(strstr(d.c_str(),s2.c_str())){
        Dragon* dragon = new DragonSpacecraft(d);
        return dragon;
    }
    return 0;
}

Engine* DragonFactory::createEngine(string e) {
    return 0;
}
