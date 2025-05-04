
/*
    # Destructor :
        -- Destructor deallocate the memory that is prowided during creation of constructor.

    Syntax:
        ~className(){}

     # Disadvantage of not using Destructor is : memory leak

*/
// Example:

// class Student
// {
// public:
//     string *nameptr;
//     double *cgpaptr;

//     Student(string name, double cgpa)
//     {
//         nameptr = new string;
//         *nameptr = name;
//         cgpaptr = new double;
//         *cgpaptr = cgpa;
//     }

//     Student(Student &orgObj)
//     {
//         nameptr = new string;
//         *nameptr = *orgObj.nameptr;
//         cgpaptr = new double;
//         *cgpaptr = *orgObj.cgpaptr;
//     }

//     // destructor
//     ~Student()
//     {
//         cout << "Hi, I delete everything\n";
//         delete cgpaptr, nameptr;
//     }

//     void getInfo()
//     {
//         cout << "Name: " << *nameptr << endl;
//         cout << "cgpa: " << *cgpaptr << endl;
//     }
// };

// int main()
// {
//     Student s1("Dhruv", 8.0);
//     s1.getInfo();
//     return 0;
// }