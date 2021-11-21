//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "Button.h"

Button::Button(Command *c) {
    command = c;
}

void Button::pressFireUpHeavy() {

    command->fireUpFalconHeavy();
}

void Button::pressFireUpNine() {

    command->fireUpFalconNine();
}

void Button::pressTest() {


}
