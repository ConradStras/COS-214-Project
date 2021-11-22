//
// Created by Conrad Strasheim on 2021/11/15.
//
// Edited by Nikita Oelofse on 2021/11/19

#ifndef COS_214_PROJECT_DRAGON_H
#define COS_214_PROJECT_DRAGON_H
#include "SpaceXProperty.h"

using namespace std;

class Contents;

class Dragon : public SpaceXProperty {   
    public:
        Dragon(string type);
        ~Dragon();
        virtual void addDelegator(Dragon * nextD);
        virtual void print();
        const string &getType() const;
        virtual void handleContent(Contents *);
    private:
        vector<Contents*> allTheContent;
        Dragon * nextDragon;
        string type;
    protected:
        virtual void add(Contents* );
};


#endif //COS_214_PROJECT_DRAGON_H
