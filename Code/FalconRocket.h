//
// Created by Conrad Strasheim on 2021/11/15.
//

///
///testing doxygen
///

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
#include "Launch.h"
#include "Satellite.h"

using namespace std;
class Engine;
class Stage;
class Memento;
class Satellite;
//Originator in Memento DP.
class FalconRocket: public SpaceXProperty{ //Component in Decorator DP
public:
    virtual void add(vector<Engine*>, int stage);
    virtual void print();
    virtual void getStageStatus();
    virtual Memento createMemento();//I made three mementos, so that we have three simulations.
    virtual void reinstateMemento();
    virtual void setStageState(Stage*, int stageno);
    virtual Stage * getStage(int stageNo);
    virtual void launch(int stageNo);//command DP, state DP (change method).
    virtual void addSatellite(SpaceXProperty*);
    virtual void setName(string name);
    virtual string getName();
    virtual ~FalconRocket();
protected:
    // a stage is a (stage class) and a state.
    // stage = strategy and state DPs.
    Stage * stages[2];
    string name;
    // therefore the rocket takes the context role of the state DP
private:
    Memento * mem;
};

#endif //COS_214_PROJECT_FALCONROCKET_H
