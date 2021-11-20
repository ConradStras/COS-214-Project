//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_BUTTON_H
#define COS_214_PROJECT_BUTTON_H
#include "Command.h"

using namespace std;

class Button {
public:
    void pressFireUpHeavy();
    void pressFireUpNine();
    void pressTest();

private:

    Command* command;
};


#endif //COS_214_PROJECT_BUTTON_H
