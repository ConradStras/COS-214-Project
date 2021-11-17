//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_FALCONROCKET_H
#define COS_214_PROJECT_FALCONROCKET_H
#include <iostream>
#include <string>
#include <vector>
#include "State.h"
#include "Memento.h"
#include "SpaceXProperty.h"
using namespace std;

class FalconRocket: public SpaceXProperty { //Component in Decorator DP
public:
    virtual void add(FalconRocket*)=0;
    virtual void print()= 0; //print engines + totals? Works nicely.
    virtual void remove()= 0;
    virtual void getStageState() =0;
    virtual void createMemento() = 0;
    virtual void setMemento() = 0;

private:
    // a stage is a (stage class) and a state.
    // stage = strategy and state.
    // therefore the rocket takes the context role of the state DP/
    Stage * stages[];
    Memento * savedState;
    //adding these to facilitate easy workings for state changes.
    int noEngines;
    int noSatellites;
};

#endif //COS_214_PROJECT_FALCONROCKET_H
