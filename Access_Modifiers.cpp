/*
    ### Access Modifiers in C++ ###

        1. In C++, 'access modifiers or access specifiers' in a class are used to assign the accessibility to the class members,i.e.,
           they set some restrictions on the class members so that they can't be directly accessed by the outside functions.
        2. Access modifiers are used to implement an important aspect of Object-Oriented Programming known as 'Data hiding'.alignas

        -- There are 3 type of access modifiers in C++:

           1. public
           2. private(default)
           3. protected


    1. Public Specifier:

        -- All the class members declared under the public specifier will be available to everyone. The data members and member functions declared as public can be accessed by other classes and functions too.
        -- The public members of a class can be accessed from anywhere in the program using the direct member access operator (.) with the object of that class.


*/

// Example:

#include <iostream>
using namespace std;

// class definition
class Circle
{
public:
    double radius;
    double compute_area()
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Circle obj;

    // Accessing public members outside class
    obj.radius = 5.5;
    cout << "Radius is : " << obj.radius << "\n";
    cout << "Area is : " << obj.compute_area();

    return 0;
}

/*
    2. Private Specifier
        -- The class members declared as private can be accessed only by the member functions inside the class. They are not allowed to be accessed directly by any object or function outsite the class.

        -- They are not allowed to  be accessed directly by any object or function outside the class.
        -- Only the member functions or the 'friend functions/friend class' are allowed to access the private data members of the class.

    ## How to Access Private Members? ##

        -- The standard way to access the private data members of a class is by using the public member functions of the class. The functioin that provides the access is called getter method and the function that updates the value is called the setter method.

*/

// Example:

#include <iostream>
using namespace std;

class Circle
{
    // private members
private:
    double radius;

public:
    // Returns the private variable (getter)
    double getRadius()
    {
        return radius;
    }

    // set the private variable (setter)
    void setRadius(double r)
    {
        radius = r;
    }

    double compute_area()
    {
        return 3.14 * radius * radius;
    }
}

int
main()
{
    Circle obj;

    // Accessing private variables using public getter and setter methods
    obj.setRadius(1.5);
    cout << "Radius is: " << obj.getRadius() << endl;
    cout << "Area is : " << obj.compute_area() << endl;

    return 0;
}

/*

    3. Protected Specifier:
     --  The 'protected' access modifier is similar to the private access modifier in the sense that it can't be accessed outside of its class unless with the help of a friend class.
     -- The difference is that the class members declared as protected can be accessed by any subclass (derived class) of that class as well.


*/

// Example:

#include <bits/stdc++.h>
using namespace std;

// base class
class Parent
{
protected:
    int id_protected;
};

// Derived class from public base class
class Child : public parent
{
public:
    void setId(int id)
    {
        // child class is able to access inherited
        //  prootected data members of base class
        id_protected = id;
    }

    int getId()
    {
        return id_protected;
    }
};

int main()
{
    Child obj1;
    obj1.setId(81);
    cout << "ID: " << obj1.getId();

    return 0;
}

// Note: This access through inheritance can alter the access modifier of the elements of base class ii derived class depending on the mode of Inheritance. 

