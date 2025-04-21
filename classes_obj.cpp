/*  ### C++ Classes and Objects ###

        1. "In C++, classes and objects are the basic building" block that leads to Object-Oriented programming in C++.

    ### What is Class? ###
    -- A class is a "user-defined data type, " which holds its own "data members and membe functions" that can be accessed and used by creating an instance of that class.A C++ class is like a blueprint for an object.

    -- For Example: Consider the Class of "Cars". There may be many cars with different names and brands but all of them will share some common properties like all of them will have 4 wheels, speed limit, Mileage range, etc.
       The car can also accelerate, turn ,apply brakes, etc. So here, the "Car" is the class, wheels, speed limits, and mileage are its attributes (data members) and accelerate, turn, apply brakes are its methods (member functions).



*/

/* ### Defining Class

-- A class must be defined before its use. In C++, it is defined using the keyword class keyword as shown:

  class className {
    access_specifier:
        // data member

        // member method
  }

  -- Data Members: These are the variables that are defined inside the class.
  -- Member Functions: Functions declared inside a class. Also referred to as a member method.


*/

// Example:
class GFG
{
public:
    // Data member
    int val;

    // Member function
    void show()
    {
        cout << "values: " << val << endl;
    }
};

/*   ### Access Modifiers ###

    -- In C++ classes, we can control the access to the members of the class using "Access Specifiers".
       ALso known as "access modifier" , they are the keywords that are specified in the class and all the members of the class under that access specifier will have particular access level.

     -- Ther are 3 access specifiers that are as follows:
        1. Public: Members declared as public can be accessed from outside the class.
        2. private: Members declared as private can only be accessed within the class itself.
        3. protected: Members declared as protected can be accessed within the class and by derived classes.

    note: If we do not specify the access specifier, the private specifier is applied to every member by default.


    ### What is Object? ###

    -- When a class is defined , only the specification (attributes and behaviour) for the object is defined.No memory is allocated to the class definition. To use the data and access functions defined in the class, we nned to create its "objects".

    -- Objects are the actual entites that are created as an instance of a class. There can be as many objects of a class as desired.

    ### Create Object ###
    -- Once the class is defined, we can create its object in the same way we declare the variables of any other inbuild data type.

    < className objectName; >
     . This statement creates an object of class Name class.

    ## Member Acces ##
     -- Members of the class can be accessed inside the class iteself simply by using their assigned name.

     - To access them outside, the (.) dot operator is used with the object of the class.

      obj.member1 // for data members
      obj.member2(..) // for functions

      -- There obj is the name of the object of the given class, member1 is data member and member2 is member function.

      Example:

            // create object
            GFG obj;

            // Access data member and assign
            // it some value
            obj.val = 10;

            // Access member method
            obj.show();


    ### Special Member Functions ###
        In C++ classes, there are some special member functions that are essential to manage objects and provide some basic functionalities.


        1. Constructor

            -- 'Constructors' are special class members which are called by the compiler every time and object of that class is instatntiated.They are used to construct the objects and making them ready for use.
                constructors have the same name as the class.

            Example:

                // constructor
                Myclass(){
                    cout << "constructor called!";

                }

        Note:- if the programmer does not define the constructor, the compiler automatically creates the default, copy and move constructor.


        2. Destructors

            -- 'Destructors' is another special member function that is called by the compiler when the scope of the object ends.It deallocates all the memory previously used by the object of the class so that there will be no memory leaks.
                 The destructor also has the same name as the class but with   'tilde (~) as prefix.

            Example:

                // Destructor
                ~Myclass(){
                    cout<< "Destructor called!";
                }


        3. Static Data Members

            -- 'Static data members' shared by all objects of the class, meaning only one copy exists for all objects of the class and they are declared with the 'static' keyword.

        Example:

            class GFG {

            public:
                static int val;

            };

            // initialize static member
            int GFG::val = 22;
            int main() {

                // Access without creating object
                cout<< GFG::val <<endl;

            }


        4. Static Member Functions

            -- 'Static member functions' are associated with the class itself rather than any specific object. They can only access static data members and cannot access instance data members.
                Static member functions are called using the class name, not the object.

            -- We defined the member function inside the class, but we can also define the member function outside the class.
               To define a member function outside the class definition , we use scop resolution (::) operator.

            Example:
                class GFG {
                    public:
                        static void printHello();
                    };

                    // Definition of static member function
                    void GFG::printHello() {
                        cout<< "hello world";
                    }
                    int main() {
                        // Access without creating object
                        GFG::printHello();
                    }

        5. Friend Class and Function

            -- In C++, 'friend classes and functions' allow access to the private and protected member of other classes:
               A 'friend class' has the ability to access the private and protected members of other classes where it is declared as a friend.
               This feature can be useful when it is necessary for one class to access the private and protected members of another class.

               A 'friend function' in C++ is similar to a friend class. It can be given special permission to access the private and protected members of a class. Although it is not a member function of the class, it can still access and modify those private and protected members because it is declared as a friend.


        6. Local Class
            -- Classes are generally declared in global scope and are accessible to every function or other classes once they are defined. But C++ also provides facility to define a class within a function. It is called local class in C++ and is only accessible in that function.

        7. Nested Class
            -- A 'nested class' is a class defined within another enclosing class. As a member of the enclosing class, it has the same access rights as any other member. The members of the enclosing class do not have special access to the members of the nested class; the standart access rules apply.

        8. Enum Class

            -- 'Enum classes' in C++ are a safer and more organized way to using enums. They help to group related constants together while avoiding naming problems and ensuring better type safety.

        9. this pointer
            -- In C++, 'this' pointer is a pointer that points to the current instance of a class. it is used within the member functions of a class to refer to the object of that class. This pointer allows access to the calling object's data and methods within it's own member functions.

            clas A{
                int n;
                A(int n){
                this -> n = n;
                }

            }


*/

/*    ### Class vs Object


            class                                                           Object
            - A blueprint or template for creating objects.             - An instance of a class with actual values.
            - No memory is allocated for a clas unitl an object         - Memory is allocated when an object is created.
               is created.
            - Conceptual entity describing structure and behaviour.     - A real-world entity created from the class.
            - Defines properties and functions common to all objects    - Stores specific data and manipulates it using class functions.
              of that type.
            - Represents a general concept or type                      - Represents a specific instance of the class.



*/