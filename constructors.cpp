/*  #### Constructors ####

    -- In C++, 'constructor' is  a special method that is invoked automatically at the time an object of a class is created.It is used to initialize the data members of new objects.
    -- The constructor in C++ has the same name as the class or structure.

*/

// Example:

#include <iostream>
using namespace std;

class A
{
public:
    // constructor of the class without
    // any parameters
    A()
    {
        cout << "Constructor called" << endl;
    }
};

int main()
{
    A obj;
    return 0;
}

/*
    ### Types of Constructors in C++ ###

    -- Constructor can be classified based on in which situations they are being used.
    -- They are 4 types of constructor in C++:

    1. Default Constructor
    2. Parameterized Constructor
    3. Copy Constructor
    4. Move Constructor

*/

/*
    1. Default Constructor
        -- A 'default constructor' is a constructor that doesn't take any argument. It has no parameters.It is also called a zero-argument constructor.
        -- The compiler automatically creates an implicit default constructor if the programmer does not define one.

*/

// Example:
#include <iostream>
using namespace std;

// class with no explicity defined constructors
class A
{
public:
};

int main()
{
    // creating object without any parameter
    A a;
    cout << "In Main";
    return 0;
}

/*
2. Parameterized Constructor
    -- Parameterized constructors make it possible to pass arguments to constructors.
    -- To create a 'parameterized constructor', simply add parameters to it the way you would to any other function. when you define the constructor's body, use the parameters to initialize the object.

*/

// Example:

#include <iostream>
using namespace std;

class A
{
public:
    int val;

    // parameterized constructor
    A(int x)
    {
        val = x;
    }
};

int main()
{
    // creating object with a parameter
    A a(10);
    cout << a.val;
    return 0;
}

// Note: If a parameterized constructor is defined, the non-parameterized constructor should also be defined as compilerr does not create the default constructor.

/*
    3. Copy Constructor
    -- A 'copy constructor' is a member function that initializes an object using another object of the same class. Copy constructor takes a refernce to an object of the same class as an argument.

*/

// Example:

#include <iostream>
using namespace std;

class A
{
public:
    int val;
    // parameterized constructor
    A(int x)
    {
        val = x;
    }

    // Copy constructor
    A(A &a)
    {
        val = a.val;
    }
};

int main()
{
    A a1(10);

    // creating another object from a1
    A a2(a1);

    cout < a2.val;
    return 0;
}

/*
    4. Move Constructor
    -- The 'move constructor' is a recent addition to the family of constructors in C++. It is like a copy constructor that constructs the object from the already existing objects.
    -- but instead of copying the object in the new memory, it makes use of move semantics to transfer the ownership of the already created object to the new object without creating extra copies.
    -- It can be seen as stealing the resources from other objects.

    Syntax:
        className (className&& obj){
        //body of the constructor
        }

    -- The move constructor takes the 'rvlaue refernce' of the object of the same class and transfers the ownership of this object to the newly created object. 
    -- Like a copy constructor, the compiler will create a move constructor for each class that does not have any explicit move constructor. 
  */

  /*
    ### Characteristics of Constructors ###

    1. The name of the constructor is the same as its class name. 
    2. Constructors are mostly declared as public member of the class though they can be declared as private. 
    3. Constructors do not reutrn values, hence they do not have a return type. 
    4. A constructor gets called automatically when we create the object of the class. 
    5. Multiple constructors can be declared in a single class
    6. In case of multiple constructors, the one with matching function signature will be called. 
  
  
  */