/*
    ## Abstraction ##
        -- Hiding all unnecessary details & showing only the important parts.
        -- best way to implement Abstraction is Access modifier.

        -- using Abstarct classes
        -- Abstract classes are used to provide a base class from which other classes can be derived.
        -- They cannot be instantiated and are meant to be inherited.
        -- Abstract classes are typically used to define an interface for derived classes.

    note: A class with pure virtual function , can automatically become abstract class.
*/
// Example:
#include <iostream>
using namespace std;

class Shape
{
    virtual void draw() = 0; // pure virutal function
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a circle\n";
    }
};

int main()
{
    Circle c1;
    c1.draw();
    return 0;
}


