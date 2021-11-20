//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_COMMAND_H
#define COS_214_PROJECT_COMMAND_H


class Command {
public:
    virtual void fireUpFalconHeavy() = 0 ;
    virtual void fireUpFalconNine() = 0 ;
    virtual void abort()= 0;
};


#endif //COS_214_PROJECT_COMMAND_H
