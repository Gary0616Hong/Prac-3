#include <iostream>
#include "Person.h"

int main() {
    // create a person list with 3 people
    PersonList pl1 = createPersonList(3);

    // make a shallow copy of the list
    PersonList pl2 = shallowCopyPersonList(pl1);

    // modify the age of the first person in the copy
    pl2.people[0].age = 10;

    // print out the ages of the first people in the original and copy
    std::cout << "Original: " << pl1.people[0].age << std::endl;
    std::cout << "Copy: " << pl2.people[0].age << std::endl;

    return 0;
}