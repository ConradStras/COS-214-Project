#include "DroneShipEngineer.h";

DroneShipEngineer :: ~DroneShipEngineer(){
    cout<<  "This was DroneShipEngineer number \"" << this->number_ << "\".\n";
}

void DroneShipEngineer :: update (const string &message_from_subject){
    message_from_subject_ = message_from_subject;
    printInfo();
}

void DroneShipEngineer :: RemoveMeFromTheList(){
    subject_.detach(this);
    cout << "Drone engineer \"" << number_ << "\" removed from the list.\n";
}


void DroneShipEngineer :: printInfo() {
cout << "Drone engineer \"" << this->number_ << "\": a new message is available --> " << this->message_from_subject_ << "\n";
  }
