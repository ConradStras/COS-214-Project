//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "MerlinEngine.h"
void MerlinEngine::print() {
    cout<<"MerlinEngine added."<<endl;
}

Engine* MerlinEngine::clone() {
    return new MerlinEngine();
    //maybe return new *this if an engine will have parameters
}