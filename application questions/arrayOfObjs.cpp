#include <iostream>
#include "class.h"
using namespace std;

int main()
{
    Student students[3] = {
        Student("Alice", 20),
        Student("Bob", 21),
        Student("Charlie", 22)};

    for (int i = 0; i < 3; i++)
    {
        students[i].display();
    }

    return 0;
}
