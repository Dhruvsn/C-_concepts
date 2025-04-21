/*  What is Dynamic Memory Allocation?

    1. Dynamic memory allocation is the process of allocating memory at the runtime of a program.
    2. It allows programmers to reserve some memory during the program’s execution, use it as required and then free it to use it for some other purpose.
    3. This memory is allocated in the Heap memory of the program instead of the stack memory.
    4. It is very useful in cases like:
            . When you are not sure about the size of the array you need.
            . Implementing data structures such as linked list, trees, etc.
            . In complex programs that require efficient memory management.

    5. Dynamic memory allocation in C++ and deallocation is achieved by using two specialized operators: new and delete.

    6. new Operator
        . The new operator requests for the allocation of the block of memory of the given size of type on the Free Store (name for the part of heap memory available for new operator).
        . If sufficient memory is available, a new operator initializes the memory to the default value according to its type and returns the address
            to this newly allocated memory

        Syntax:
            new data_type;

                . In above statement, a memory block that can store a single value of given data_type is reserved in the heap and the address is returned.
                  This address should be stored in the pointer variable of the same type.

                Example:
                    int *nptr = new int;

                    . We allocated the memory for a single integer using new and stored its address in the inter pointer nptr.
                      We can also initialize the allocated memory by porviding an initial value:

                      < int *nptr = new int(10); >


*/
// Example:

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Declared a pointer to store
    // the address of the allocated memory
    int *nptr;

    // Allocate and initialize memory
    nptr = new int(6);

    // Print the value
    cout << *nptr << endl;

    // Print the address of memory
    // block
    cout << nptr;
    return 0;
}

// Allocate BLock of Memory (Array)
// A new operator is also used to dynamically allocate a block (an array) of memory of given data type as shown below:
// new data_type[n];
// This statement dynamically allocates memory for n elements of given data_type. Arrays can also be initialized during allocation.

// Example:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declare a pointer to store
    // the address of the allocated memory

    int *nptr;

    // Allocate and initialize array of integer with 5 elements
    nptr = new int[5]{1, 2, 3, 4, 5};

    // print array
    for (int i = 0; i < 5; i++)
    {
        cout << nptr[i] << " ";
    }

    return 0;
}

/*  ### What if enough memory is not available during runtime?

       1. If enough memory is not available in the heap to allocate, the new request indicates failure by throwing an exception of
          type std:bad_alloc, unless "nothrow" is used with the new operator, in which case it returns a "nullptr" pointer. Therefore,
          it may be a good idea to check for the pointer variable produced by the new before using its program.

*/

/*
  int *p = new (nothrow) int;
  if(!p) {
  cout << "Memory allocation failed\n";
    }
*/

// delete Operator
/*  In C++, 'delete' Operator is used to release dynamically allocated memory. It deallocates memory that was previously allocated with new.

Syntax:
    delete ptr;

    . Where , ptr is the pointer to the dynamiclly allocated memory.

    . To free the dynamically allocated array pointed by pointer variable, use the following form of delete:
    < delete[] arr;


*/
// Example:

#include <iostream>
using namespace std;

int main()
{
    int *ptr = NULL;

    // Request memory for integer variable
    // using new operator
    ptr = new int(10);
    if (!ptr)
    {
        cout << "allocation of memory failed";
        exit(0);
    }

    cout << "Value of *p: " << *ptr << endl;

    // Free the value once it is used
    delete ptr;

    // Allocate an array
    ptr = new int[3];
    ptr[2] = 11;
    ptr[1] = 22;
    ptr[0] = 33;
    cout << "Array: ";
    for (int i = 0; i < 3; i++)
        cout << ptr[i] << " ";

    // Deallocate when done
    delete[] ptr;

    return 0;
}



// Errors Associated with Dynamic Memory
// As powerful as dynamic memory allocation is it is also prone to one of the worst errors in C++. Majo ones are: 

/*
    1. Memory Leaks
      > "Memory leak" us a situation where the memory allocated for a particular task remains allocated even after it is no longer needed. 
       Moreover, if the address to the memory is lost , then it will remain allocated till the program runs. 

    Solution: use "smart pointers " whenever possible. They automatically deallocate when goes out of scope. 


    2. Dangling Pointers
      > "Dangling pointers " are created when the memory pointed by the pointer is accessed after it is deallocated, leading to 
          undefined behaviour (crashes, garbage data , etc). 
          
    Solution: Initialize pointers with nullptr and assign nullptr again when deallocated. 


    3. Double Deletion
      > When delete is called on the same memory twice, leading to crash or corrupted program. 
    
    Solution: Initialize pointers with nullptr and assign nullptr again when deallocated. 

*/


