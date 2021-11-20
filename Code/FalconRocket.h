//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_FALCONROCKET_H
#define COS_214_PROJECT_FALCONROCKET_H
#include <iostream>
#include <string>
#include <vector>
#include "State.h"
#include "FirstStage.h"
#include "SecondStage.h"
#include "Memento.h"
#include "SpaceXProperty.h"
using namespace std;
class Engine;
class Satellite;
class Stage;
class FalconRocket: public SpaceXProperty { //Component in Decorator DP
public:
    virtual void add(vector<Engine*>, int stage);
    virtual void print(); //print engines + totals? Works nicely. Changed this from pure virtual to virtual.
    virtual void remove()= 0;
    virtual void getStageStatus();
    virtual void createMemento();
    virtual void setMemento();
    virtual void setStageState(Stage*, int stageno);
    virtual Stage * getStage(int stageNo);
    virtual void launch(int stageNo);//command DP, state DP (change method).
    virtual ~FalconRocket();
protected:
    // a stage is a (stage class) and a state.
    // stage = strategy and state DPs.
    Stage * stages[2];
    // therefore the rocket takes the context role of the state DP
    vector<Engine*> FirstStageEngines; //not sure about this yet. This seems lekker, rounds off composite DP.
    vector<Engine*> SecondStageEngines;
    vector<Satellite*> satellites;
private:
    Memento * savedState;
    int noSatellites;
    //adding these to facilitate easy workings for state changes.
    //int noEngines;
    //moved the above to the stages, as the state changes need to occur within the DP.

};

#endif //COS_214_PROJECT_FALCONROCKET_H
