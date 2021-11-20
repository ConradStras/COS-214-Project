//
// Created by Thebe on 11/19/2021.
//

#ifndef COS_214_PROJECT_LAUNCH_H
#define COS_214_PROJECT_LAUNCH_H
#include "Command.h"
#include "FalconRocket.h"
class Launch : public Command{

private:
    FalconRocket* rocket;
public:
    void abort(){};
    void fireUpFalconHeavy();
    void fireUpFalconNine();

};


#endif //COS_214_PROJECT_LAUNCH_H
