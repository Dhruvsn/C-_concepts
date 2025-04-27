/*
    . Classes & objects

    -- Objects are entitites in the real world
    -- class is like a blueprint of these entites

    stntax: class <classname> {};

    . Access Modifiers

    -- private: data & methods accessible inside class.
    -- public: data & methods accessible to everyone.
    -- protected: data & methods accessible inside class & to its derived class.

*/

#include <bits/stdc++.h>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // properties
    string name;
    string subject;
    string debt;

    // methods
    void changeDept(string newDept)
    {
        debt = newDept;
    }
    // setter :- it is used to set the value of private variables
    void setsalary(double sal)
    {
        salary = sal;
    }
    // getter:- it is used to get the value of private variables
    void getsalary()
    {
        cout << salary << endl;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Dhruv";
    t1.debt = "cse";
    t1.subject = "Maths";
    t1.setsalary(2400.10);

    t1.changeDept("Ece");
    cout << t1.name << endl;
    t1.getsalary();
    return 0;
}

/*
    1. Encapsulation

     -- Encapsulation is wrapping up of data & member functions in a single unit called class.
     -- It is play major role in data hiding concept.




*/