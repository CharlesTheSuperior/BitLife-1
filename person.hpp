#include <iostream>
#include <string>
using std::string;
//<<<<<<< Updated upstream
#ifndef PERSON.H

struct person {
  long long int currency;
  firstName name;
  haircolor hair; 
  gender g; 
};

enum haircolor: char { black, blonde, brown, red, otherHaircolor};
enum gender: char { male, female, other};

#endif // PERSON.H
