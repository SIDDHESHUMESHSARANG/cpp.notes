#include <iostream>
#include "class.h"
using namespace std;

int main()
{
    Counter c1;
    Counter c2;
    Counter c3;

    cout << "Total Objects Created: " << Counter::getCount() << endl;

    Counter::resetCount();
    cout << "Count After Reset: " << Counter::getCount() << endl;

    return 0;
}