/*    ### Strings in C++ ###
        1. In C++, strings are sequences of characters that are used to store words and text.
        2. They are also used to store data, such as numbers and other type of information in the form of text.

    Creating a String
        1. In C++, we can create a string by simply specifying the data type first and then the name of the string.
            _____________________________
            | string string_name;       |
            |____________________________|

        Example:  string str;

        . The string variable can be updated store a new string literal in a similar way it is initialized.

             string str = "Tara";
             cout<< str << endl;

             str = "Singh";
             cout << str << endl;

        . A single character can also be changed by first accessing the character and then using assignment operator to assign value.

            string str = "Tara";

            // updating second character
            str[1] = 'a';



    Methods to Find the Lenght of a string
        > There are few methods to find the length of a string in mentioned below:
            1. Using string::size
            2. Using string::length
            3. Using the C library function strlen() method:
            4. Using while loop:
            5. Using for loop:


*/

// 1 . Using string::size
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Hello, World!";
    cout << "Length of the string using size(): " << str.size() << endl;
    return 0;
}
// 2 . Using string::length
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Hello, World!";
    cout << "Length of the string using length(): " << str.length() << endl;
    return 0;
}
// 3 . Using the C library function strlen() method:
#include <iostream>
#include <cstring> // for strlen()
using namespace std;
int main()
{
    char str[] = "Hello, World!";
    cout << "Length of the string using strlen(): " << strlen(str) << endl;
    return 0;
}

// 4 . Using while loop:
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Hello, World!";
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    cout << "Length of the string using while loop: " << length << endl;
    return 0;
}
// 5 . Using for loop:
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Hello, World!";
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    cout << "Length of the string using for loop: " << length << endl;
    return 0;
}

/*
    ### C++ String vs C String ###

                        String                                              |        Character Array
                        1. String define objects that can be                | 1. The null character terminates a character array of characters.
                        represented as string streams.                      |
                        2. No array decay occurs in string as string are    | 2. the threat of array decay is present in the case of the character
                        represented as objects.                             |
                        3. A string class provides numerous functions for   | 3. Character arrays do not offer inbuild functions to manipulate strings.
                         manipulating strings.                              |
                        4. Memory is allocated dynamically.                 | 4. The size of the character array has to be allocated statically.




    C++ String Fuctions:
        Functions                  Description
        1. length()               Returns the length of the string.
        2. swap()                 Swaps the contents of two strings.
        3. size()                Returns the size of the string.
        4. resize()              Resizes the length of the string up to the given number of characters.
        5. find()                Used to find the string which is passed in parameters.
        6. push_back()           This function is used to push the passed character at the end of the string.
        7. pop_back()            This function is used to pop the last character from the string.
        8. clear()               Clears the contents of the string.
        9. strcmp()              This function compares at most the first num bytes of both passed strings.
       10. strncpy()             This function is similar to the strcpy() function, except that at most n bytes of src are copied.
       11. strrchr()             This function locates the last occurrence of a character in the string.
       12. strcat()              This function appends a copy of the source string to the end of the destination string.
       13. find()                This frunction is used to search for a certain substring inside a string and returns the position of the first character fo the substring.
       14. replace()             This function is used to replace each element in the range [first, last) that is equal to old value with new value.]
       15. substr()              This function is used to create a substring from a given string.
       16. compare()             This function is used to compare two strings and returns the result in the form of an integer.
       17. erase()               This function is used to remove a certain part of a string.
       18. rfind()               This function is used to find the sting's last occurrence.
       12.

*/

/*
    #### std::string class in C++ ####

        1. C++ has in its definition a way to represent a "sequence of characters as an object of the class".
        2. This class is called std::string.  The string class stores the characters as a sequence of bbytes with the functionality
            of allowing access to the single-byte charater.


     ### Operations on Strings
     1> Input Funtions

        getline()         --> This function is used to store a stream of characters as entered by the user in the object memory.
        push_back()       --> This function is used to input a character at the end of the string.
        pop_back()        --> Introduced from C++11 (for strings), this function is used to delete the last character from the string.



*/

// C++ Program to demonstrate the working of
// getline(), push_back() and pop_back()
#include <iostream>
#include <string> // for string class
using namespace std;

int main()
{
    // Declaring string
    string str;

    // Taking string input using getline()
    getline(cin, str);

    // Displaying string
    cout << "The initial string is: ";
    cout << str << endl;

    // Inserting a character
    str.push_back("s");

    // Displaying string
    cout << "The string after push_back operation is : ";
    cout << str << endl;

    // Deleting a character
    str.pop_back();

    // Displaying string
    cout << "The string after pop_back operation is : ";
    cout << str << endl;

    return 0;
}
// Time complexity: 0(1)
// space complexity: 0(n) where n is the size of the string

/*
    2> Capacity Funtions

    capacity()   --> This function returns the capacity allocated to the string, which can be equal to or more than the size of the
                     string. Additional space is allocated so that when the new characters are added to the string, the operations can
                     be done efficiently.

    resize()     --> This function changes the size of the string, the size can be increased or decreased.
    length()     --> This function finds the length of the string.

    shrink_to_fit()  --> This function decreases the capacity of the string and make it equal to the minimum capacity of the string.
                          This operation is useful to save additional memory if we are sure that no further addition of characters has to
                          be made.
*/

// C++ Program to demonstrate the working of
// capacity() , resize() and shrink_to_fit()

#include <iostream>
#include <string> // for string class
using namespace std;

int main()
{
    // Initializing string
    string str = "geeksforgeeks is for geeks";

    // Displaying string
    cout << "The initial string is: ";
    cout << str << endl;

    // Resizing string using resize()
    str.resize(13);

    // Displaying string
    cout << "The string after resize operation is: ";
    cout << str << endl;

    // Displaying capacity of string
    cout << "The capacity of string is: ";
    cout << str.capacity() << endl;

    // Displaying length of the string
    cout << "The length of the string is: " << str.length() << endl;

    // Decreasing the capacity of string
    // using shrink_to_fit()
    str.shrink_to_fit();

    // Displaying string
    cout << "The new capacity after shrinking is: ";
    cout << str.capacity() << endl;

    return 0;
}