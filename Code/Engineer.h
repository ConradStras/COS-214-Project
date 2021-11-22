#ifndef COS_214_PROJECT_ENGINEER_H
#define COS_214_PROJECT_ENGINEER_H

#include "Observer.h"
#include "FalconRocket.h"

class Engineer: public Observer {

public: 
    Engineer :: Engineer(FalconRocket &subject) : subject_(subject) {
    this->subject_.attach(this);
    cout << "This is the Engineer \"" << ++Engineer::static_number_ << "\".\n";
    this->number_ = Engineer::static_number_;
  }

    virtual ~Engineer();
    virtual void update(const string &message_from_subject);
    void printInfo();
    void RemoveMeFromTheList();
    void printInfo();

private:
  string message_from_subject_;
  FalconRocket &subject_;
  static int static_number_;
  int number_;

};


#endif //COS_214_PROJECT_ENGINEER_H



