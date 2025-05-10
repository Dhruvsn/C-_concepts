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

// class Parent
// {
// public:
//     void show()
//     {
//         cout << "Parent class\n";
//     }
//     virtual void hello()
//     {
//         cout << "Hello from parent\n";
//     }
// };

// class child : public Parent
// {
// public:
//     void show()
//     {
//         cout << "Child class\n";
//     }

//     void hello()
//     {
//         cout << "hello from child\n";
//     }
// };

// int main()
// {
//     child c1;
//     c1.show();
//     c1.hello();
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area()
    {
        return 0;
    }

    void displayArea()
    {
        cout << "Area: " << area() << endl;
    }

    // ✅ Virtual destructor added
    virtual ~Shape()
    {
        cout << "Shape Destructor Called" << endl;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    double area() override
    {
        return 3.14 * radius * radius;
    }

    ~Circle()
    {
        cout << "Circle Destructor Called" << endl;
    }
};

class Rectangle : public Shape
{
private:
    double length, width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double area() override
    {
        return length * width;
    }

    ~Rectangle()
    {
        cout << "Rectangle Destructor Called" << endl;
    }
};

int main()
{
    Shape *s1 = new Circle(5.0);
    Shape *s2 = new Rectangle(4.0, 6.0);

    s1->displayArea();
    s2->displayArea();

    delete s1; // Correctly calls Circle's destructor and Shape's
    delete s2; // Correctly calls Rectangle's destructor and Shape's

    return 0;
}
