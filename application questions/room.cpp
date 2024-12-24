// This program calculates the area and volume of a room based on its dimensions.

#include <iostream> // For input/output operations
using namespace std;

class Room {
public:
    // Data members
    double length;
    double breadth;
    double height;

    // Member function to calculate the area of the room
    double area() {
        return length * breadth;
    }

    // Member function to calculate the volume of the room
    double volume() {
        return length * breadth * height;
    }
};

int main() {
    cout << "Welcome! This program calculates the area and volume of a room.\n" << endl;

    Room room1; // Create an object of the Room class

    // Initialize data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;

    // Output the area and volume of the room
    cout << "Area: " << room1.area() << " square units" << endl;
    cout << "Volume: " << room1.volume() << " cubic units" << endl;

    return 0; // Indicate successful program execution
}
