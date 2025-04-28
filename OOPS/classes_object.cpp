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
//----------------------------------------------------------------------------------------------------------------------------------

#include <bits/stdc++.h>
#include <string>
using namespace std;

// class Teacher
// {
// private:
//     double salary;

// public:
//     // properties
//     string name;
//     string subject;
//     string debt;

//     // methods
//     void changeDept(string newDept)
//     {
//         debt = newDept;
//     }
//     // setter :- it is used to set the value of private variables
//     void setsalary(double sal)
//     {
//         salary = sal;
//     }
//     // getter:- it is used to get the value of private variables
//     void getsalary()
//     {
//         cout << salary << endl;
//     }
// };
//--------------------------------------------------------------------------------------------------

// class Acount
// {
// private:
//     double balance;
//     string password; // data hiding

// public:
//     string acccountId;
//     string urername;
// }

// int
// main()
// {
//     Teacher t1;
//     t1.name = "Dhruv";
//     t1.debt = "cse";
//     t1.subject = "Maths";
//     t1.setsalary(2400.10);

//     t1.changeDept("Ece");
//     cout << t1.name << endl;
//     t1.getsalary();
//     return 0;
// }

/*
    1. Encapsulation

     -- Encapsulation is wrapping up of data & member functions in a single unit called class.
     -- It is play major role in data hiding concept.


*/

/*
    # Constructor
        -- Special method invoked automatically at time at object creation. Used for initialisation.

        . same name as class
        . Constructor doesn't have a return type
        . Only called once (automatically), at object creation.
        . Memory allocation happens when constructor is called

        # Type of Constuctor
            1. Non-parameterized constructor
            2. Parameterized constructor
            3. Copy constructor

    [Note: when there is more than one constructor in same class, this phenomenon is known as "constructor overloading".And when oject is created, cpp
    Compiler automatically detect contructor which is called by user.
    Note2: Constructor overloading is example of Polymorphism.]

     -- this is a special pointer in C++ that points to the currect object.
        this->prop is same as *(this).prop
    Note: In pointer like *ptr = &a in this * is known as deferencing operator

*/
// Example of parameterized constructor
// class Teacher
// {
// private:
//     double salary;

// public:
//     string name;
//     string dept;
//     string subject;

//     // Parameterized constructor
//     Teacher(string n, string d, string s, double sal)
//     {
//         name = n;
//         dept = d;
//         subject = s;
//         salary = sal;
//     }

//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Department: " << dept << endl;
//         cout << "Subject: " << subject << endl;
//         cout << "Salary: " << salary << endl;
//     }
// };

// int main()
// {
//     string sub;
//     cout << "Enter a subject: ";
//     getline(cin, sub);

//     Teacher t1("Dhruv", "CSE", sub, 200000.99); // Corrected here (double quotes)
//     t1.display();

//     return 0;
// };
//----------------------------------------------------------------------------------------------------------------------
// Example of this operator.
class Teacher
{
public:
    string name;
    string dept;
    string subject;
    // constructor
    Teacher(string name, string dept, string subject)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
    }

    // copy construcotr
    Teacher(Teacher &orgobj) // this is by refernce
    {
        cout << "i am custom copy constructor ...\n";
        this->name = orgobj.name;
        this->dept = orgobj.dept;
        this->subject = orgobj.subject;
    }

    void display()
    {
        cout << "name: " << this->name << endl;
        cout << "dept: " << this->dept << endl;
        cout << "subject: " << this->subject << endl;
    }
};

// int main()
// {
//     Teacher t1("Dhruv", "cse", "Networking");
//     t1.display();
// }
///------------------------------------------------------------------------------------------------------------------
/*
    3. Copy Constructor

        -- Special Constructor (default) used to copy properties of one object into another.

     -- There are Two type of Copy Constructor
        1. Shallow:- A shallow copy of an object copies all of the member values from one object to another.
            -- There is drawback of using shallow copy during Dynamic memory Allocation.

        2. Deep Copy:- A deep copy, on the other hand, not only copies the member values but also makes copies of any
            dynamically allocated memory that the members point to.


*/

// example of Copy constructor

// int main()
// {
//     Teacher t1("Dhruv", "Cse", "Networking");

//     // Teacher t2(t1); // default copy constructor
//     Teacher cutom_constructor(t1);

//     t2.display();
// }

//------- shallow copy example --------------------

// class Student
// {
// public:
//     string *nameptr;
//     double *cgpaptr;

//     Student(string name, double cgpa)
//     {
//         nameptr = new string;
//         *nameptr = name;
//         cgpaptr = new double;
//         *cgpaptr = cgpa;
//     }

//     Student(Student &orgObj)
//     {
//         this->nameptr = orgObj.nameptr;
//         this->cgpaptr = orgObj.cgpaptr;
//     }

//     void getInfo()
//     {
//         cout << "Name: " << *nameptr << endl;
//         cout << "cgpa: " << *cgpaptr << endl;
//     }
// };

// int main()
// {
//     Student s1("Dhruv", 7.09);
//     Student s2(s1);
//     // s1.getInfo();
//     *(s2.nameptr) = "Aryan";
//     *(s2.cgpaptr) = 9.00;
//     s2.getInfo();
//     s1.getInfo();
// };

// Deep copy constructor example:

class Student
{
public:
    string *nameptr;
    double *cgpaptr;

    Student(string name, double cgpa)
    {
        nameptr = new string;
        *nameptr = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }

    Student(Student &orgObj)
    {
        nameptr = new string;
        *nameptr = *orgObj.nameptr;
        cgpaptr = new double;
        *cgpaptr = *orgObj.cgpaptr;
    }

    void getInfo()
    {
        cout << "Name: " << *nameptr << endl;
        cout << "cgpa: " << *cgpaptr << endl;
    }
};

int main()
{
    Student s1("Dhruv", 8.0);
    Student s2(s1);
    s1.getInfo();
    cout << "\n";
    *(s2.nameptr) = "Aryan";
    *(s2.cgpaptr) = 9.0;
    s2.getInfo();
}