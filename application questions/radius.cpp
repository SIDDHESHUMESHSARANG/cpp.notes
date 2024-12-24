/* This is a C++ Program made using some Object Oriented Programming concepts.
  it calculates the Area of the circle according to the Object */

// I'VE ADDED COMMENTS IN MY CODE FOR BETTER UNDERSTANDING

#include <iostream> // For input/output operations
using namespace std;

class Circle { // Class to represent a circle
private:
    double radius; // Data member: stores the radius of the circle

public:
    // Member function: sets the radius of the circle
    void setRadius(double r) {
        radius = r;
    }

    // Member function: calculates and returns the area of the circle
    double getArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle c1;           // Create a Circle object
    c1.setRadius(5.0);   // Set the radius to 5.0
    cout << "Area: " << c1.getArea() << endl; // Display the area of the circle
    return 0;            // Indicate successful program execution
}
