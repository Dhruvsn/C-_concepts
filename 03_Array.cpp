/*  C++ Arrays
        1. In C++, an array is a derived data type that is used to store multiple values of similar data types in a
            a contiguous memory location. Each element can be accessed using its index(position starting from 0).

    Create Array
        1. In C++, we can create/declare an array by simply specifying the data type first and then the nameof the array with it's size
            inside [] square brackets (better known as array subscript operator).alignas
        _______________________________
        | data_typpe array_name[size]; |
        |______________________________|

        Example:  int arr[5];


    Initialize Array
        1. Initializing means assigning initial values to array elements. We can initialize the array with values enclosed in
            curly braces '{}' are assigned to the array.
          Example: int arr[5] = {1, 2, 3, 4, 5};
            The number of values in the list cannot be more than the size of the arrary.But they can be less that the size.
            This is called partial initialization.
           Example: int arr[5] = {1,2,3};

    [Note:- The value assigned should be of the same type of the array elements specified in the declaration.]


    Size of Array
        1. In C+, we do not have the length function as in java to find array size, but it can be calculated using sizeof() operator.


    Properties of Arrays:
        1. An array is a collection of data of the same type,stored at a contiguous memory location.
        2. Indexing of an array starts from 0. It means the first element is stored at the 0th index, the second at 1st, and so on.
        3. Elements of an array can be accessed using their indices.
        4. Once an array is declared its size remains constant throughtout the program.
        5. An array can have multiple dimensions.
        6. The size of the array in bytes can be determined by the sizeof() operator using which we can also find the no of elements in array.
        7.

*/
#include <bits/stdc++.h>
using namespace std;

int firstRepeated(vector<int> &arr)
{
    unordered_map<int, int> freq;

    // Step 1: Count frequency of each element
    for (int i = 0; i < arr.size(); i++)
    {
        freq[arr[i]]++;
    }

    // Step 2: Find first element with freq > 1
    for (int i = 0; i < arr.size(); i++)
    {
        if (freq[arr[i]] > 1)
        {
            return arr[i];
        }
    }

    return -1;  // No repeating elements
}

int main()
{
    vector<int> arr = {1, 3, 8, 7, 4, 2, 7, 7, 9, 3, 1, 9, 8, 6, 5, 0, 2, 8, 6, 0, 2, 4};

    cout << "First repeated element is: " << firstRepeated(arr) << endl;

    return 0;
}

int main()
{

    int arr[] = {1, 2, 3, 5, 4, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    cout << max << endl;
    return 0;
}
