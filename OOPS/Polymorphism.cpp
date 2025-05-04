/*
    ## Polymorphism ##
        -- Polymorphism is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.

        1. compile Time Polumorphism
        2. Run Time Polymorphism

*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    Student()
    {
        cout << "Non-parameterized Contructor\n";
    }

    Student(string name)
    {
        this->name = name;
        cout << "Parameterized Constructor\n";
    }
};

int main()
{
    Student s1("Tony Start");

    return 0;
}