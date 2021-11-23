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
#include "SimulationStore.h"
#include "Memento.h"
using namespace std;
void TestDragons(){
    SpaceXFactory* factory;
    factory = new DragonFactory();
    Contents * arrHumansAndCargo[20];
    for (int i = 0; i < 20; ++i) {
        if (i % 2 == 0) arrHumansAndCargo[i] = new Humans();
        else arrHumansAndCargo[i] = new Cargo();
    }
    int num2=4;
    Dragon** dragons = new Dragon*[num2];
    for (int i = 0; i < num2; ++i) {
        if(i % 2 == 0) {
            dragons[i] = factory->createDragon("Space Dragon " + to_string(i));
        }
        else
            dragons[i] = factory->createDragon("Crew Dragon " + to_string(i));
    }
    dragons[0]->addDelegator(dragons[1]);
    dragons[2]->addDelegator(dragons[3]);
    for (int i = 0 ; i < num2; ++i) {
        for (int j = 0; j < 20; ++j) {
            dragons[i]->handleContent(arrHumansAndCargo[j]);
        }
        dragons[i]->print();
    }
}

void TestFalcons(){
    FalconRocket* f1 = new FalconNine("Brooklyn Nine Nine");
    FalconRocket* f2 = new FalconHeavy("We will steal the moon.");
    f1->print();
    cout<<endl;
    f2->print();
    cout<<endl;
    Engine* falconNineEngines = new Engine();
    Engine* falconHeavyEngines = new Engine();
    Engine* vacuumEngine = new VacuumEngine();
    Engine* vacuumEngineHeavy = new VacuumEngine;
    SpaceXFactory* factory;
    factory = new EngineFactory();
    int num0 = 10;
    Engine** merlinEngines = new Engine*[num0];
    for(int i = 0; i<num0; i++){
        merlinEngines[i] = factory->createEngine("merlin");
        falconNineEngines->add(merlinEngines[i],1);
    }
    falconNineEngines->add(vacuumEngine,2);
    f1->add(falconNineEngines->first,1);
    f1->add(falconNineEngines->second,2);
    int num1 = 27;
    Engine** merlinEnginesHeavy = new Engine*[num1];
    for(int i = 0; i<num1; i++){
        merlinEnginesHeavy[i] = factory->createEngine("merlin");
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
}

void TestMemento(){
    SimulationStore temp;
    FalconRocket * falcons[2];
    falcons[0] = new FalconNine("Ninety-nine problems, and they're all COS 214");
    falcons[0]->print();
    Engine* falconNineEngines = new Engine();
    Engine* falconHeavyEngines = new Engine();
    Engine* vacuumEngine = new VacuumEngine();
    Engine* vacuumEngineHeavy = new VacuumEngine;
    SpaceXFactory* factory;
    factory = new EngineFactory();
    int num0 = 10;
    Engine** merlinEngines = new Engine*[num0];
    for(int i = 0; i<num0; i++){
        merlinEngines[i] = factory->createEngine("merlin");
        falconNineEngines->add(merlinEngines[i],1);
    }
    cout<<"Creating a stored instance of the Falcon Rockets, before building completion."<<endl;
    cout<<"Storing it as the first Memento."<<endl;
    temp.StoreMemento(falcons[0]->createMemento(),0);
    falconNineEngines->add(vacuumEngine,2);
    falcons[0]->add(falconNineEngines->first,1);
    falcons[0]->add(falconNineEngines->second,2);
    cout<<"Creating a memento of the Falcon Rocket before launch, after build completion."<<endl;
    cout<<"Storing it as the second Memento"<<endl;
    temp.StoreMemento(falcons[0]->createMemento(), 1);
    falcons[0]->launch(2); ///launches both stages.
    cout<<"Creating a memento of the Falcon rocket after launch."<<endl;
    temp.StoreMemento(falcons[0]->createMemento(), 2);
    cout<<"Retrieving each memento after the Falcon has been made and, showing their appropriate status."<<endl;
    Memento * mem;
    for (int i = 0; i < 3; ++i) { ///for loop reinstating each Memento made above, and printing the appropriate messages.
        mem = temp.retrieveMemento(i);
        falcons[0]->reinstateMemento(mem);
        cout<< "Reinstantiation of Memento "<<to_string(i+1)<<" results in:"<<endl;
        cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        falcons[0]->print();
        falcons[0]->getStageStatus();
        cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }

}

void TestObserver(){
    FalconRocket * falcon;
    falcon = new FalconHeavy("As Heavy as I am Humble");
}
///The Main.
int main(){
    //TestFalcons();
    //TestDragons();
    TestMemento();//hello.
    //TestObserver();
    return 0;
}
