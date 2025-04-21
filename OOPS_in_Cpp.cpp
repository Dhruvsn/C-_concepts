/*
    ## Object Oriented programming in C++ ##

        1. Object-oriented programming aims to implement real-world entites like inheritance,hiding,
            polymorphism, etc.
        2. The main aim of OOP is to bind togther the data and the functions that operate on them so that no other part of the code can access this data except that function.

        # Characteristics of an Object-Oriented programming language :
            > There are some basic concepts that act as the building blocks of OOPs i.e.


            1. Class
                . The building block of Object-Oriented programming in C++ is a Class. It is a "user-defined data type" that act as a blueprint representing a group of objects which shares some common properties and behaviours.
                    These properties are stored as data members and behaviour as member function.

                For example: Consider the class of Animals. An "Animal" class could have common properties like "name", "age", and "species" as data members, and behaviors like "eat" , "sleep" and "makeSound" as member function.
                Each individual animal object (such as a dog, cat, or elephant) can be created from this blueprint, and each will have its own unique values for the properties (like the name and age), but
                all will share the same behaviours defined by the class (like eating, sleeping, and make sounds).


*/

// class Animal
// {

// public:
//     string species;
//     int age;
//     int name;

//     // Member functions
//     void eat()
//     {
//         // eat something
//     }
//     void sleep()
//     {
//         // sleep for few hrs
//     }
//     void makeSound()
//     {
//         // make sound;
//     }
// }

// Here, public is the 'access specifier' that specify what functions are available to others. 
//-------------------------------------------------------------------------------------------------------------------------------------


/*  ### Object ####

    1. An "Object" is an identifiable actual entity with some characteristics and behaviour. 
    2. In C++, it is an instance of a class. For Example: the Animal class is just a concept or category, not an actual entity. 
       But a black cat named VoidShadowDarkFangReaper is actual animal that exists. 
       Similarly, classes are just the concepts and objects are the actual entity that belongs to that concept. 


    3. When a class is defined, no memory is allocated but when it is instantiated (i.e. and object is created) memory is allocated. 
      . An object of a class is created as shown:  
                            Animal VoidShadowdarFangReaper;    // here , VoidShadowdarFangReaper is an object of class Animal.

     4. Objects take up space in memory and have an associated address like a record in pascal or structure or union.when a program is executed, the objects interact by sending messages to one another. 
       Each object contains data and code to manipulate the data. Object can interact without having to know details of each other's data or code, it is sufficient to know the type of message accepted and the type of response returned by the objects. 
    

*/

/*
    ### Encapsulation ###
        1. "encapsulation " is defined as wrapping up data and info under a single unit. 
        2. In object-Oriented Programming, encapsulation is defined as binding together the data and the functions that manipulate them together in a class. 
        3. Consider an example of the Animal class, the data mebmbers species, age, and name are encapsulated with the member functions like eat(), sleep, etc. They can be protected by the access specifier protected, hides the dat of the class from outsite. 


*/


/*
    ### Abstraction ###
      1. "Abstraction" is one of the most essential and important features of object-oriented programming in C++. 
      2. Abstraction means displaying only essential information and ignoring the other details. 
      3. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation. 
      4. In our case, when we call the makeSound() method, we don't need to know how the sound is produced internally, only that the method makes the animal sound. 


*/

/*
    ### Polymorphism ### 
        1. "Polymorphism" means having many forms.In simple words , we can define polymorphism as the ability of an entity to behave different scenarios.Person at the same time can have different characteristics. 

        2. For example, the same makeSound() method, the output will vary depending on the type of animal. So, this is an example of polymorphism where the makeSound() mehtod behaves differently depending on the Animal type (Dog or Cat). 

        3. In C++, polymorphism can be of three types: 
            1. OPerator Overloading: The process of making an operator exhibit different behaviours in different instances is known as operator overloading. 
            2. Function Overloading: Function overloading is using a single function name to perform different types of tasks. 
            3. Function Overriding: Function overriding is changing the behaviour of a function that is derived from the base class using inheritance. 


*/

/*
    ### Inheritance ### 
        1. The capability of a class to derive properties and characteristics from antother class is called inheritance. 
            . Sub class : The clas that inherits properties from another class is called Sub class or Derived Class. 
            . Super Class: The class whose properties are inherited by a sub-class is called Base Class or Superclass. 

        2. Inheritance supports the concept of "reusability", i.e. When we want to create a new class and there is already a class that includes some of the code that we wnat, we can derive our
          new class from the existing class. By doing this, we are resuing the fields and methods of the existing class. 


        Example: Dog, Cat, Cow can be derived class of Animal Base class. 


*/

/*  ### Advantage of OOPs 
    
        1. Modularity and Reusability: OOP promotes modularity through classes and objects, allowing for code reusability. 
        2. Data Encapsulation: OOP encapsulates data within objects, enhancing data security and integrity. 
        3. Inheritance: OOP supports inheritance, reducing redundancy by reusing existing code. 
        4. Polymorphism: OOP allows polymorphism, enabling flexible and dynamic code through method overriding. 
        5. Abstraction: OOP enables abstraction, hiding complex details and exposing only essential features. 
        





*/