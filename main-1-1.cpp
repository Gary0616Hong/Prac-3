#include <iostream>
#include "Person.h"

int main() {
    int n = 5;
    Person* arr = createPersonArray(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i << ": Name - " << arr[i].name << ", Age - " << arr[i].age << std::endl;
    }
    delete[] arr;
    return 0;
}