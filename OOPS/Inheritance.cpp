//----------------------------------------------------------------------------------------------
/*
    # Inheritance
      -- When a properties & member functions of base class are passed on to the derived class.
      -- it allow in code reusability.

    # Mode of Inheritance
        --        | Derived Class | Dervied Class | Derived Class
        Base class| Private Mode  | Protected Mode| Public Mode
        Private   | Not inherited | Not Inherited | Not Inherited
        protected | Private       | Protected     | Protected
        Public    | Private       | Protected     | public

    1. private Inheritance
        -- private: members of base: Not accessible in derived class
        -- protected: members of base: become private in derived class
        -- public: members of base: become private in derived class
    2. Protected Inheritance
        --private members of base: Not accessible in derived class
        --protected members of base: Remain protected in derived class
        --public members of base: Become protected in derived class


    3. Public Inheritance
        -- private members of base: Not accessible in derived class
        -- protected members of base: remain protected in dervied class
        -- public members of base : remain public in dervied class


    # Types of Inheritance
        -- Single Inheritance - parent -> child
        -- Multi- Level inheritance -  parent(name,age) -> parent(rollno) -> child(research Area)
        -- Mutliple Inheritance - parent ------------|
                                  parent --> child <-|
        -- Hierarchial Inheritance   - parent -->child
                                         |____> child

        -- Hybrid inheritance - parent is the bas class. child1 and child2 inherit from Parent(single inheritance). Grandchild inherits from both child1 and chil2 (multiple inheriance).This forms a hybrid of single and multiple inheritance.
          Parent
          /    \
     Child1   Child2
         \     /
        GrandChild

*/

// Example:
#include <iostream>
#include <string>
using namespace std;

/*
// single level inheritance.
class Person
{
    public:
    string name;
    int age;

    // Person(string name, int age)
    // {
        //     this->name = name;
        //     this->age = age;
        // }
        Person(string name, int age)
        {
            this->name = name;
            this->age = age;
        }
    };

    class student : public Person
    {
        public:
        int Roll_no;

        student(string name, int age, int Roll_no) : Person(name, age)
        {
        }

        void getInfo()
        {
            cout << "Name: " << name << endl;
            cout << "age: " << age << endl;
            cout << "Roll.no: " << Roll_no << endl;
        }
    };

    int main()
    {
        student s1("rahul kumar", 21, 1234);
        s1.getInfo();
        return 0;
    }

    */
//------------------------------------------------------------------------------------------------------
// Mutli-level inheritance
// class Person
// {
// public:
//     string name;
//     int age;
// };

// class student : public Person
// {
// public:
//     int Roll_no;
// };
// class GradStudent : public student
// {
// public:
//     string researchArea;
// };

// int main()
// {
//     GradStudent s1;
//     s1.name = "tony start";
//     s1.researchArea = "quantum physics";
//     cout << s1.name << endl;
//     cout << s1.researchArea << endl;
//     return 0;
// }
//-------------------------------------------------------------------------------------------------------------
// Example : Mutliple Inheritance
// class stu
// {
// public:
//     string name;
//     int rollno;
// };
// class Teacher
// {
// public:
//     string subject;
//     double salary;
// };

// class TA : public stu, public Teacher
// {
// public:
//     void display()
//     {
//         cout << "Name: " << this->name << endl;
//         cout << "Subject: " << this->subject << endl;
//         cout << "salary: " << this->salary << endl;
//     }
// };

// int main()
// {
//     TA t1;
//     t1.name = "tony stark";
//     t1.subject = "enginerring";
//     t1.salary = 34455453;

//     t1.display();
//     return 0;
// }
//-----------------------------------------------------------------------------------------------------------------------------------------------------
// Example: Hierarchial Inheritance

// class Person
// {
// public:
//     string name;
//     int age;
// };
// class stu1 : public Person
// {
// public:
//     int rollno;
// };
// class Teacher : public Person
// {
// public:
//     double sal;
// };

//--------------------------------------------------------------------------------------------------------------------------------------------------------------
// Example of Hybrid Inheritance
// Ambiguity: Because Parent is inherited twice (via Child1 and Child2), we should use virtual inheritance to avoid duplication:
class Parent
{
    // base class
};

class Child1 : virtual public Parent
{
    // virtual inheritance
};

class Child2 : virtual public Parent
{
    // virtual inheritance
};

class GrandChild : public Child1, public Child2
{
    // no ambiguity now
};

//-------------------------------------------------------------------------------------------
