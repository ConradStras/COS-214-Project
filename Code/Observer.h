//
// Created by Conrad Strasheim on 2021/11/15.
//

#ifndef COS_214_PROJECT_OBSERVER_H
#define COS_214_PROJECT_OBSERVER_H
#include <string>
#include <iostream>

using namespace std;
class Observer {
public:
  virtual ~Observer(){};
  virtual void update(const string &message_from_subject) = 0;

};


#endif //COS_214_PROJECT_OBSERVER_H
