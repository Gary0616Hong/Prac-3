#include <iostream>
#include "Person.h"

int main() {
    // Create a PersonList struct with 2 people
    PersonList pl;
    pl.numPeople = 2;
    pl.people = new Person[pl.numPeople];
    pl.people[0].name = "John Doe";
    pl.people[0].age = 0;
    pl.people[1].name = "Jane Doe";
    pl.people[1].age = 1;

    // Create a deep copy of the PersonList struct
    PersonList newPL = deepCopyPersonList(pl);

    // Modify the original PersonList struct
    pl.people[0].name = "Bob Smith";
    pl.people[0].age = 30;

    // Print the original and copied PersonList structs
    std::cout << "Original PersonList:" << std::endl;
    for (int i = 0; i < pl.numPeople; i++) {
        std::cout << pl.people[i].name << ", " << pl.people[i].age << std::endl;
    }

    std::cout << "Copied PersonList:" << std::endl;
    for (int i = 0; i < newPL.numPeople; i++) {
        std::cout << newPL.people[i].name << ", " << newPL.people[i].age << std::endl;
    }

    // Clean up memory
    delete[] pl.people;
    delete[] newPL.people;

    return 0;
}