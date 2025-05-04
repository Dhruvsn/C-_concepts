/*
    ## Polymorphism ##
        -- Polymorphism is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.

        1. compile Time Polymorphism --> Constructor overloading.
        2. Run Time Polymorphism

    ## Compile Time Polymorphism ##
        -- Compile Time Polymorphism is static PolymorPhism.
        -- Function Overloading : Function overloading in C++ means defining multiple functions with the same name but different parameters (type or number).
        -- Operator overloading:

    ## Run Time Polymorphism ##
        -- Run Time Polymorphism is dynamic Polymorphism
        Type of Run Time Polymorphism
            1. Function Overriding -> Parent & Child both contain the same function with different implementation.
                -- The parent class function is said to be overridden.
                -- Overriding -> Inheritance
            2.  Virtual Functions
                -- A virtual function is a member function that you expect to be redefined in derived class.
                -- Virtual functions are Dynamic in nature.
                -- Defined by the keyword "virtual" inside a base class and are always declared with the base class and overridden in a child class.
                -- A virtual function is called during Runtime.

*/

#include <iostream>
#include <string>
using namespace std;

// function overloading.
// class Print
// {
// public:
//     void show(int x)
//     {
//         cout << "Int: " << x << endl;
//     }
//     void show(char ch)
//     {
//         cout << "Char: " << ch << endl;
//     }
// };

// int main()
// {
//     Print p1;
//     p1.show('c');

//     return 0;
// }
//-----------------------------------------------------------------------------------------------------
// Function Overriding

class Parent
{
public:
    void show()
    {
        cout << "Parent class\n";
    }
    virtual void hello()
    {
        cout << "Hello from parent\n";
    }
};

class child : public Parent
{
public:
    void show()
    {
        cout << "Child class\n";
    }

    void hello()
    {
        cout << "hello from child\n";
    }
};

int main()
{
    child c1;
    c1.show();
    c1.hello();
    return 0;
}