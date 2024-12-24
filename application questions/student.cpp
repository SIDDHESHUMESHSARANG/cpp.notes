/* This C++ program demonstrates Object-Oriented Programming concepts
   by displaying a student's name and age using a class and its methods. */

// I'M ADDING COMMENTS IN MY CODE FOR BETTER UNDESTANDING  

#include <iostream> // For input/output operations
#include <string>   // For using the string class
using namespace std; // Standard namespace

class student {        // Class to represent a student
public:
    string name;       // Data member: stores the name of the student
    int age;           // Data member: stores the age of the student
    void display();    // Member function: displays student details
};

// Definition of the display() function outside the class
void student::display() {
    cout << "Name: " << name << ", Age: " << age << endl; // Output the name and age
}

int main() {
    student s1;         // Create a student object
    s1.name = "Alice";  // Assign a name to the student
    s1.age = 20;        // Assign an age to the student
    s1.display();       // Call the display method to show details
    return 0;           // Indicate successful program execution
}

