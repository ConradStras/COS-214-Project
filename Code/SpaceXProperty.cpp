//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "SpaceXProperty.h"
SpaceXProperty* SpaceXProperty::clone() {
    return new SpaceXProperty();
}

SpaceXProperty::~SpaceXProperty() {}

void SpaceXProperty::attach(Observer *) {}

void SpaceXProperty::detach(Observer *) {}

void SpaceXProperty::notify() {}
