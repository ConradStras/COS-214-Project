//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "Satellite.h"


void Satellite::print() {
    satellite->print();
}

void Satellite::remove() {
    if(satellite!= nullptr)
        satellite = nullptr; //???
}

Satellite* Satellite::clone() {
    return new Satellite();
}
