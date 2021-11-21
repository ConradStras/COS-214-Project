//
// Created by Conrad Strasheim on 2021/11/21.
//

#ifndef COS_214_PROJECT_SIMULATION_H
#define COS_214_PROJECT_SIMULATION_H
#include "Memento.h"
//Takes the caretaker participant in the memento DP.
class SimulationStore {
public:
    void StoreMemento(Memento* mem, int no);
    Memento * retrieveMemento(int no);
    ~SimulationStore();
private:
    Memento * mem[3]; //so we can have three saved states.
};


#endif //COS_214_PROJECT_SIMULATION_H
