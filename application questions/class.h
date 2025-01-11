#include <iostream>
#include <string>
using namespace std;

// 1
class Student
{
private:
    string name;
    int age;

public:
    Student(string a, int b) : name(a), age(b) {}

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// 2
class Counter
{
private:
    static int count;

public:
    Counter()
    {
        count++;
    }

    static int getCount()
    {
        return count;
    }

    static void resetCount()
    {
        count = 0;
    }
};
int Counter::count = 0;

// 3
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating" << endl;
    };

    void sleep()
    {
        cout << "Animal is sleeping" << endl;
    };
};

// 4
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking" << endl;
    }
};