//
// Created by Conrad Strasheim on 2021/11/17.
//

#ifndef COS_214_PROJECT_STATE_H
#define COS_214_PROJECT_STATE_H


using namespace std;

class FalconRocket;

class State {
public:
    State();
    virtual bool currentState()=0;
    virtual void handleChange(FalconRocket*) = 0;
    virtual ~State();

};


#endif //COS_214_PROJECT_STATE_H
