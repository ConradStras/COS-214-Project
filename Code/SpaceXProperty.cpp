//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "SpaceXProperty.h"
void SpaceXProperty::attach(Observer *) {

}

void SpaceXProperty::detach(Observer *) {

}

void SpaceXProperty::notify() {

}

SpaceXProperty* SpaceXProperty::clone() {
    return new SpaceXProperty();
}

SpaceXProperty::~SpaceXProperty() {

}