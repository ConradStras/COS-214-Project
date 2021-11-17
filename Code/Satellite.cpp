//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "Satellite.h"

void Satellite::add(FalconRocket *f) {
    if(satellite== nullptr)
        satellite = f;
    else
        satellite->add(f);
}

void Satellite::print() {
    satellite->print();
}

void Satellite::remove() {
    if(satellite!= nullptr)
        satellite = nullptr; //???
}

void Satellite::clone() {

}
