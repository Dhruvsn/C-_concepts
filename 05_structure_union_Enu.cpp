/*      ### Structure, Unions and Enumerations in C++ ###

            1. structure, unions and enumerations (enums) are 3 user defined data types in C++. user defined data types allow us to create a data types in C++.
                - User defined data types allow us to create a data type specifically tailored for a particular purpose. It is generally created from the built-in or derived data types.


        Structures:
            1. In C++, structures is a user-defined data type that is used to combine data of different types. it is similar to an array but unlike an array, which stores elements of the same type, a structure can
                store elements of different data types.
            2. In C++ structure can also have member functions to manipulate its data.


*/

// Create Structure:
// A structure has to be defined before usable in the program. It is defined using struct keyword

// struct structure_name{
//     type1 member1;
//     type2 member2;
//     .
//     .
//     .
//     typeN memberN;
// };
// This definition does not allocate any memory to the structure. We have to create structure variables separately to use it.

// Structure_name var_name;

// we can also assign some values to the members:
// struct structure_name var_name = {value1, value2, value3, ...};

// Access and Update:
// structure members can be accessed using the dot_operator(.)

/*
struct structure_name;

// Accessing first member
structure_name.member1;
// Accessing second member
structure_name.member2;
// Accessing third member
structure_name.member3;


*/

#include <bits/stdc++.h>
using namespace std;

// Define structure
struct GFG
{
    int G1;
    char G2;
    float G3;
};

int main()
{

    // Create object of structure
    GFG Geek = {85, 'G', 989.45};

    // Accessing structure members values
    cout << Geek.G1 << endl;
    cout << Geek.G2 << endl;
    cout << Geek.G3;

    return 0;
}

/*      ### Unions ###
            1. In C++, union is user-defined datatype in which we can define members of different types of data types just like structures but unlike a structure, where each member has its own memory, a union
                member has its own memory , a union member shares the same memory location.

        Create Union:

            union union_name{
                type1 member1;
                type2 member2;
                .
                .
                .
                typeN memberN;
            };
            Then we can create union variables:
                union_name var_name;

        Access and Update:
            Only one member of a union stores memory at one time.
               var_name.member1 = val;

            Example:


*/
#include <iostream>
using namespace std;

// Defining a Union
union GFG
{
    int G1;
    char G2;
    float G3;
};

int main()
{

    // Create an object of GFG union
    GFG Geek;

    // Assign union's member variables
    Geek.G1 = 85;

    // Accessing union members values
    cout << Geek.G1 << endl;

    Geek.G2 = 'G';
    cout << Geek.G2 << endl;

    Geek.G3 = 989.45;
    cout << Geek.G3;

    return 0;
}

/*     ### Enumeration ###
            1. In C++, enumeration is a user-defined data type that consists of a set of named integer constants. Enumerations help make the code more readable and easier to maintain by assigning meaningful names to constrants. 
        

        Create Enums:
            Just like other user-defined data types, enums also needs to be defined before we can use it.

            enum enum_name{
                value1, value2 , value3, ...,
                valueN }
            
            Once defined, it can be used in the C++ program.

               enum_name var_name = value;

            This value should be taken from the defined value.

*/

#include <bits/stdc++.h> 
using namespace std; 

int main()  { 
    
	// Defining enum Gender 
	enum GFG { Male, Female }; 

	// Creating GFG type variable and assigning
	// value 
	GFG Geek = Male;

	switch (Geek) {
	case Male: 
		cout << "Who is he?"; 
		break; 
	case Female: 
		cout << "Who is she?"; 
		break; 
	default: 
		cout << "Who is they?"; 
	}
	
	return 0; 
}
