#ifndef COS_214_PROJECT_SPACESHIPENGINEER_H
#define COS_214_PROJECT_SPACESHIPENGINEER_H

#include "Observer.h"
#include "FalconRocket.h"
#include "DragonSpacecraft.h"
#include "CrewDragon.h"



class SpaceshipEngineer: public Observer {

public: 
    SpaceshipEngineer(FalconRocket &subject) : subject_(subject) {
    this->subject_.attach(this);
    cout << "This is the Engineer \"" << ++SpaceshipEngineer::static_number_ << "\".\n";
    this->number_ = SpaceshipEngineer::static_number_;
  }


    virtual ~SpaceshipEngineer();
    virtual void update(const string &message_from_subject);
    void printInfo();
    void RemoveFromList();

private:
  string message_from_subject_;
  FalconRocket &subject_;

  static int static_number_;
  int number_;

};


#endif //COS_214_PROJECT_SPACESHIPENGINEER_H