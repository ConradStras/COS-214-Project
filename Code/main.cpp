//
// Created by Conrad Strasheim on 2021/11/15.
//
#include <iostream>
#include "FalconRocket.h"
#include "FalconHeavy.h"
#include "FalconNine.h"
#include "MerlinEngine.h"
#include "VacuumEngine.h"
#include "Command.h"
#include "Button.h"
#include "Launch.h"
#include "DragonSpacecraft.h"
#include "CrewDragon.h"
#include "Humans.h"
#include "Cargo.h"
#include "SpaceXFactory.h"
#include "EngineFactory.h"
#include "DragonFactory.h"
using namespace std;

int main(){
//    Charlotte Testing:
    FalconRocket* f1 = new FalconNine("Brooklyn Nine Nine");
    FalconRocket* f2 = new FalconHeavy("We will steal the moon.");
    f1->print();
    cout<<endl;
    f2->print();
    cout<<endl;

    //Engine Factory Method
    Engine* falconNineEngines = new Engine();
    Engine* falconHeavyEngines = new Engine();

    Engine* vacuumEngine = new VacuumEngine();
    Engine* vacuumEngineHeavy = new VacuumEngine;

    SpaceXFactory* factories[2];
    factories[0] = new EngineFactory();
    factories[1] = new DragonFactory();

    int num0 = 10;
    Engine** merlinEngines = new Engine*[num0];
    for(int i = 0; i<num0; i++){
        merlinEngines[i] = factories[0]->createEngine("merlin");
        falconNineEngines->add(merlinEngines[i],1);
    }
    falconNineEngines->add(vacuumEngine,2);
    f1->add(falconNineEngines->first,1);
    f1->add(falconNineEngines->second,2);

    int num1 = 27;
    Engine** merlinEnginesHeavy = new Engine*[num1];
    for(int i = 0; i<num1; i++){
        merlinEnginesHeavy[i] = factories[0]->createEngine("merlin");
        falconHeavyEngines->add(merlinEnginesHeavy[i],1);
    }
    falconHeavyEngines->add(vacuumEngineHeavy,2);
    f2->add(falconHeavyEngines->first,1);
    f2->add(falconHeavyEngines->second,2);

    //adding satellites to Falcon 9
    SpaceXProperty* s1 = new Satellite();
    int numSatellites = 60;
    SpaceXProperty** satellites = new SpaceXProperty*[numSatellites];
    for(int i = 0; i<numSatellites; i++){
        satellites[i] = s1->clone();
        f1->addSatellite(satellites[i]);
    }
    f1->print();
    cout<<endl;
    f2->print();
    cout<<endl;

    f1->getStageStatus();
    f1->launch(0);
    f1->getStageStatus();
    f1->launch(1);
    f1->getStageStatus();

    Command *command = new Launch(f1);
    Button* button= new Button(command);

    button->pressFireUpNine();
    // Testing dragons.
    Contents * arrHumansAndCargo[20];
    for (int i = 0; i < 20; ++i) {
        if (i % 2 == 0) arrHumansAndCargo[i] = new Humans();
        else arrHumansAndCargo[i] = new Cargo();
    }

//    Dragon * dragons[6];
    int num2=6;
    Dragon** dragons = new Dragon*[num2];

    for (int i = 0; i < 6; ++i) {
        if(i % 2 == 0) {
            dragons[i] = factories[1]->createDragon("Space Dragon " + to_string(i));
        }
          else
              dragons[i] = factories[1]->createDragon("Crew Dragon " + to_string(i));
    }

    dragons[0]->addDelegator(dragons[1]);
    dragons[2]->addDelegator(dragons[3]);
    dragons[4]->addDelegator(dragons[5]);
    for (int i = 1 ; i < 6; ++i) {
        for (int j = 0; j < 20; ++j) {
            dragons[i]->handleContent(arrHumansAndCargo[j]);
        }
        dragons[i]->print();
    }
    //Done testing dragons.

    //Testing for dragon factory
//    int num2 = 0;
//    int num3 = 0;
//
//    Dragon** crewDragons = new Dragon*[num2];
//    Dragon** dragonSpacacrafts = new Dragon*[num3];
//
//    for(int i = 0; i<num2; i++){
//        crewDragons[i] = factories[1]->createDragon("crew");
//    }
//    for(int i = 0; i<num3; i++){
//        crewDragons[i] = factories[1]->createDragon("spacecraft");
//    }
    return 0;
}
