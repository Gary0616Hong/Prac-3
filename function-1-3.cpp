#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    // Create a new PersonList struct with the same number of people
    PersonList newPL;
    newPL.numPeople = pl.numPeople;
    newPL.people = new Person[newPL.numPeople];

    // Copy each person in the original PersonList to the new one
    for (int i = 0; i < newPL.numPeople; i++) {
        newPL.people[i].name = pl.people[i].name;
        newPL.people[i].age = pl.people[i].age;
    }

    return newPL;
}