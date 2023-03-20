#include "Person.h"
#include <iostream>

using namespace std;

int main() {
    int n = 3;
    PersonList personList = createPersonList(n);
    for (int i = 0; i < n; i++) {
        cout << "Person " << i << ": " << personList.people[i].name << ", " << personList.people[i].age << endl;
    }
    delete[] personList.people;
    return 0;
}