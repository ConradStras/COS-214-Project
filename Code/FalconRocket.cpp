//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "FalconRocket.h"
FalconRocket::FalconRocket() {
    noEngines = 0;
    noSatellites = 0;
}

void FalconRocket::print() {
    cout<<"Number of engines: "<<noEngines<<". Number of satellites: "<<noSatellites<<"."<<endl;
    //this will need more detail
}

int FalconRocket::getEngineCount() {
    return noEngines;
}

int FalconRocket::getSatelliteCount() {
    return noSatellites;
}

void FalconRocket::setEngineCount(int e) {
    noEngines = e;
}

void FalconRocket::setSatelliteCount(int c) {
    noSatellites = c;
}