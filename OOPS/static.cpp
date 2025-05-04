
/*
    ## Static Keyword ##
        1. Static Variables
            -- Variables declared as static in a function are created & initialized once for the lifetime of the program. //in funciton
            -- Static variables in a class are created & initialised once. They are shared by all the objects of the class. //in class


*/

#include <iostream>
using namespace std;

// void counter()
// {
//     static int count = 0; // only initialized once
//     count++;
//     cout << count << endl;
// }

// int main()
// {
//     counter();
//     counter();
//     counter();

//     return 0;
// }
// -------------------------------------------------------------------------------------------
/*
    2. Static variables(inside classes)
       -- A static variable inside a class is shared by all objects.
       -- only one copy fo the static member exists,no matter how many objects are created.

*/

class Student
{
public:
    static int count;
    Student()
    {
        count++;
    }
};
int Student::count = 0; // define outside the class.

// int main()
// {
//     Student s1, s2, s3;
//     cout << s1.count << endl;
//     cout << s2.count << endl;
//     cout << s3.count << endl;
// }
//------------------------------------------------------------------------------------------------

/*
    3. Static Functions in Class
        -- A static function does not belong to any one object.
        -- It cannot access non-static members
        -- It can be called using the class name directly.

*/
// Example:
class Test
{
public:
    static void show()
    {
        cout << "static function called!" << endl;
    }
};

// int main()
// {
//     Test::show(); // no need to create object
//     return 0;
// }
//---------------------------------------------------------------------------------------------------------------------------

/*
    4. Static Objects
        1. In global scope:
            -- Lifetime = from when the program starts to when it ends.
        2. In function scope:
            -- Static objects are constructed only once, and destroyed at program end, not when function ends.
*/

// example:
class Demo
{
public:
    Demo() { cout << "Constructor\n"; }
    ~Demo() { cout << "Destructor\n"; }
};

void show()
{
    static Demo obj; // created only once
}

int main()
{
    show();
    show();
    return 0;
}
