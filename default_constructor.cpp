/*   ### Default Constructor in C++ ###

    -- A 'default constructor' is a constructor that either takes no arguments or has default values for all its parameters.
    -- It is also referred to as a 'zero-argument constructor' when it explicitly accepts no arguments.

    -- If a default constructor is not explicitly defined by the programmer in the source code,the compiler automatically generates one during the compilation process.
    -- If a programmer explicitly defines a default constructor, the compiler does not generate it. Instead, the explicitly defined default constructor is called implicitly whenever needed.


    -- In cases where a class is derived from a base class with a default constructor, or a class contatins an object of another class with a default constructor, the compiler must insert code to ensure
        these default constructors are invoked appropriately for the base class or the embedded objects.
 */

// Default Constructors and Inheritance:

#include <iostream>
using namespace std;

class Base
{
public:
    // Compiler "declares" constructor
};

class A
{
public:
    // User defined constructor
    A() { cout << "A Constructor" << endl; }

    // Uninitialized
    int size;
};

class B : public A
{
    // Compiler defines default constructor of B,
    // and inserts stub to call A constructor
    // Compiler won't initialize any data of A
};

class C : public A
{
public:
    C()
    {
        // User defined default constructor of C
        // Compiler inserts stub to call A's constructor
        cout << "C Constructor" << endl;

        // Compiler won't initialize any data of A
    }
};

class D
{
    A a;

public:
    D()
    {
        // User defined default constructor of D
        // a - constructor to be called, compiler inserts
        // stub to call A constructor
        cout << "D Constructor" << endl;

        // Compiler won't initialize any data of 'a'
    }
};

// Driver Code
int main()
{
    Base base; // Only Base constructor (default provided by the compiler) is called
    B b;       // Calls A's constructor due to inheritance (compiler-generated constructor for B)
    C c;       // Calls A's constructor first, then C's constructor
    D d;       // Calls A's constructor for member 'a', then D's constructor

    return 0;
}

// Constructors and Default Arguments:

// CPP code to demonstrate constructor can have default
// arguments
#include <iostream>
using namespace std;
class A
{
public:
    int sum = 0;
    A();                // default constructor with no argument
    A(int a, int x = 0) // default constructor with one
                        // default argument
    {
        sum = a + x;
    }
    void print() { cout << "Sum =" << sum << endl; }
};
int main()
{
    // This construct has two arguments. Second argument is
    // initialized with a value of 0 Now we can call the
    // constructor in two possible ways.
    A obj1(10, 20);
    A obj2(5);
    obj1.print();
    obj2.print();
    return 0;
} 
