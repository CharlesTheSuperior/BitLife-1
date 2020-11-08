#include "person.hpp"
#include <stdlib.h>
#include "person.hpp"
void randName(person thePerson){
    string firstNames[20] = {"Greg", "Joe", "Donald", "Jesus", "Justin", "Victor",
                             "Danieva", "Sina", "Francis", "Jamie", "Theresa", "Meredith",
                             "Steve", "Bill", "Julie", "Sharon", "Mary", "Anna", "Justine", "Karen"};
    string lastNames[20] = {" Fang", " Lee", " Mateo", " Paraiso", " Haghighi", " Brown", " Parker",
                            " Glottenmeyre", " McLeod", " Jackson", " Johnson", " Garcia", " Davis", " Martinez", 
                            " Nelson", " Olajuwon", " Jordan", " Robertson", " Horvat", " Crosby"};
    int FName = rand() % 20, LName = rand() % 20;
    thePerson.name = firstNames[FName] + lastNames[LName];
}