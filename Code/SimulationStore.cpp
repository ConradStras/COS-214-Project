//
// Created by Conrad Strasheim on 2021/11/21.
//

#include "SimulationStore.h"

void SimulationStore::StoreMemento(Memento *memento, int no) {
    this->mem[no] = memento;
}

Memento *SimulationStore::retrieveMemento(int no) {
    return mem[no];
}

SimulationStore::~SimulationStore() {

}
