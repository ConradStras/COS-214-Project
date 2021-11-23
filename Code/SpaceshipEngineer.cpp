#include "SpaceshipEngineer.h";

SpaceshipEngineer :: ~SpaceshipEngineer(){
    cout<<  "This was SpaceshipEngineer number \"" << this->number_ << "\".\n";
}

void SpaceshipEngineer :: update (const string &message_from_subject){
    message_from_subject_ = message_from_subject;
    printInfo();
}

void SpaceshipEngineer :: RemoveMeFromTheList(){
    subject_.detach(this);
    cout << "Spaceship engineer \"" << number_ << "\" removed from the list.\n";
}


void SpaceshipEngineer :: printInfo() {
cout << "Spaceship engineer \"" << this->number_ << "\": a new message is available --> " << this->message_from_subject_ << "\n";
  }
