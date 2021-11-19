//
// Created by Conrad Strasheim on 2021/11/15.
//

#include "FirstStage.h"
#include "FalconRocket.h"

using namespace std;
FirstStage::FirstStage(int nineorheavy) {
    NineOrHeavy = nineorheavy;
    Stage::setEngineNo(0);
    //Second stage is where the payload is important, no payload implementation in firststage.
    Stage::setLaunchState(new LaunchState());
    Stage::setEngineState(new LaunchState());
    Stage::setPayloadState(nullptr);
}

FirstStage::FirstStage(int nineorheavy, int EngineNo, State* eState, State * lState){
    NineOrHeavy = nineorheavy;
    Stage::setEngineState(eState);
    Stage::setLaunchState(lState);
    Stage::setEngineNo(EngineNo);
    Stage::setPayloadState(nullptr);
}

void FirstStage::increaseEngineCount() {
    Stage::setEngineNo(Stage::getEngineNo()+1);
}

void FirstStage::handleChange(FalconRocket* rocket) {
    rocket->setStageState(new FirstStage(NineOrHeavy, Stage::getEngineNo(),
                    Stage::getEngineState(), Stage::getLaunchState()),1);
}

void FirstStage::printContents() {

}

void FirstStage::fire() {

}

FirstStage::~FirstStage() {
    Stage::~Stage();
}

string FirstStage::currentStatus() { //heavy == 0 Nine == 9
    //very basic, still needs to be updated for each state inside this stage.
    if(NineOrHeavy == 9){ //we need 9 merlin Eninges.
        if(Stage::getEngineNo() == 9) buildComplete = true;
    }
    else  buildComplete = false;

    return "PlaceHolder";
}
