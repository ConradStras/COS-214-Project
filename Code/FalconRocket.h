//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_FALCONROCKET_H
#define COS_214_PROJECT_FALCONROCKET_H
#include <iostream>
#include <string>
#include <vector>
#include "State.h"
#include "Stage.h"
#include "Memento.h"
#include "SpaceXProperty.h"
using namespace std;
class Engine;
class Stage;
class FalconRocket: public SpaceXProperty { //Component in Decorator DP
public:
    FalconRocket();
    ~FalconRocket(){};
    virtual void add(FalconRocket*)=0;
    virtual void print(); //print engines + totals? Works nicely. Changed this from pure virtual to virtual.
    virtual void remove()= 0;
    virtual void getStageState() =0;
    virtual void createMemento() = 0;
    virtual void setMemento() = 0;

    //getters and setters
    int getEngineCount();
    int getSatelliteCount();
    void setEngineCount(int e);
    void setSatelliteCount(int c);
private:
    // a stage is a (stage class) and a state.
    // stage = strategy and state.
    // therefore the rocket takes the context role of the state DP/
    Memento * savedState;
    //adding these to facilitate easy workings for state changes.
    int noEngines;
    int noSatellites;
    vector<Engine*> engines; //not sure about this yet
    Stage * stages[2];
};

#endif //COS_214_PROJECT_FALCONROCKET_H
