//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#ifndef COS_214_PROJECT_DRAGONSPACECRAFT_H
#define COS_214_PROJECT_DRAGONSPACECRAFT_H
#include "Dragon.h"
#include "SpaceXProperty.h"
#include <list>


using namespace std;

class DragonSpacecraft : public Dragon{
    public:
        DragonSpacecraft(string type);
        ~DragonSpacecraft();
        void handleContent(Contents *);



        //Observer edit
        virtual void attach(Observer *observer);
        virtual void detach(Observer *observer);
        virtual void notify();

        void numberOfObservers();
        void createMessage(string);

    private:
        list<Observer *> list_observer;
        string message;
};


#endif //COS_214_PROJECT_DRAGONSPACECRAFT_H
