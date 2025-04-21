/*
            Pointers in CPP
            1. Pointer is a variable that stores the address of another variable.
            2. Pointer enables us programs to simulate call-by-reference and create and manipulate dynamic data structures.

            Syntax:
            <data_type> *<pointer_variable_name>;
            Example: int *p; // p is points to an address that holds int data.

*/
// Example of Pointer in C++:

#include <iostream>
using namespace std;

int main()
{
    int x = 10; // variable declared
    int *myptr; // pointer variable

    // storing address of x in pointer myptr
    myptr = &x;
    *myptr = 20;

    cout << "value of x is: ";
    cout << x << endl;

    // pirnt the address stored in myptr pointer variable
    cout << "Address stored in myptr is : ";
    cout << myptr << endl;

    // print value of x using pointer myptr
    cout << "value of x using *myptr is: ";
    cout << *myptr << endl;

    return 0;
}

/*
        ### Application of Pointers in C++ ###
            1. To pass arguments by reference to functions.
            2. To create dynamic data structures like linked lists, trees, and graphs.
            3. To manage memory dynamically using new and delete operators.
            4. To implement data structures like arrays, strings, and structures.
            5. To return multiple values from functions:For example in returning squre and cube of a number.
            6. To do system-level programming where memory addresses are useful

        ### Features of Pointers in C++ ###
            1. The Pointer have a few important features and uses like it saves memory space.
            2. They are used to allocate memory dynamically.
            3. It is used for file handling,etc.


        ### 'this' pointer in C++ ###
            1. The 'this' pointer is passed as a hidden argument to all non-static member functions calls and is available as as local variable within the body of all nonstatic function.
            2. 'this' pointer is not available in static member functions as static member functions can be called without any object (with class name).

            Declaration:
            this->x = x;

        ### References in C++ ###

            1. When a variable is declared as a reference, it becomes an alternative name for an existing variable.
            2. A variable can be declared as a reference by putting '&' in the decalaration.

*/

// Example of Reference in C++:

#include <iostream>
using namespace std;

int main()
{

    int y = 10;
    cout << "value of y before change is: " << y << endl;

    // ref is a reference to y.
    int &ref = y;

    // changing value of y to 30
    y = 30;
    cout << "value of y is: " << y << endl;
    cout << "value of myref after change in value of y is: " << ref << '\n';

    return 0;
}

/*
    ### Difference between Pointer and Reference in C++ ###

        1. A pointer can be declared as void but a reference can never be void.
        For example:
            int a = 10;
            void*aa=&a; // it is valid
            void &ar = a; // it is not valid


        2. Reference are less powerful than pointers.
        3. Once a refernce is created, it cannot be later made to refernce another object: it cannot be reseated. This is often done with pointers.
        4. References cannot be NULL. Pointer are often made NULL to indicate that they are not pointing to any valid thing.
        5. A refernce must be initialized when declared. There is no such requirement for pointers.


*/