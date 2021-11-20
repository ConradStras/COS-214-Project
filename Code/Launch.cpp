//
// Created by Thebe on 11/19/2021.
//

#include "Launch.h"

void Launch::fireUpFalconHeavy() {

    if( rocket->getStage(0)->getEngineNo()== 27 && rocket->getStage(1)->getEngineNo() == 1)
        cout<<"The Falcon Heavy is now preparing to launch"<<endl;
    else
        cout<<"The Falcon Heavy cannot launch without its full engines."<<endl;
}

void Launch::fireUpFalconNine() {
    if(rocket->getStage(0)->getEngineNo() == 9 && rocket->getStage(1)->getEngineNo()==1)
        cout<<"The Falcon 9 is ready to launch."<<endl;
    else
        cout<<"The Falcon 9 is not ready to launch."<<endl;
}