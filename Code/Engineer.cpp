#include "Engineer.h";

Engineer :: ~Engineer(){
    cout<<  "This was Engineer number \"" << this->number_ << "\".\n";
}

void Engineer :: update (const string &message_from_subject){
    message_from_subject_ = message_from_subject;
    printInfo();
}

void Engineer :: RemoveMeFromTheList(){
    subject_.detach(this);
    cout << "Engineer \"" << number_ << "\" removed from the list.\n";
}


void Engineer :: printInfo() {
cout << "Engineer \"" << this->number_ << "\": a new message is available --> " << this->message_from_subject_ << "\n";
  }
