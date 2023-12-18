# PLP 5: 
Classes and Inheritance


C++ is an object oriented language which supports objects, classes, and structures. Classes are user-defined data types which hold their own data members and member functions. Objects are instances of classes which can be used to access data. Structures are similar to classes in the sense that they are user-defined data types which hold their own data members and member functions except that the members of a structure are public by default; classes are private by default. 

There are naming conventions in C++ that one should be aware of:

A very commonly followed naming convention is camel case where the variable starts with lowercase letter for the first term and uppercase letter for the second term or both first terms uppercase. 


ex. MyVariable, myVariable, variable - Examples for each listed below



Classes - CamelCase - Dog , AllDogs
Objects - camelCase - germanShepard , poodle
Instance variables - camelCase - height , totalWeight
Functions - camelCase - findWeight , findHeight




While C++ does not have standard methods for functions that serve a similar purpose across all subjects; for example toString() in Java and __str__ in Python allow for information about the objects to be printed, C++ does have the “<<” operator. You can overload with the “<<” operator as it allows you to define a string representation for your objects. 



#include <iostream>
#include <string>

class Dog {
public:
    std::string name;
    int age;

    Dog(std::string n, int a) : name(n), age(a) {}
};

std::ostream& operator<<(std::ostream& os, const Dog & dog) {
    os << "Meet " << dog.name << ", he is a " << dog.age << " year-old dog!";
    return os;
}

int main() {
    Dog myDog("Doggy", 3);
    std::cout << myDog << std::endl;

    return 0;
}




To reiterate, C++ is an object-oriented language which supports inheritance. Inheritance is the ability of one class to derive properties from another class.


class Dogs {
//code
};

class Derived : public Dogs {
//code derived from Dogs class
};



With inheritance, C++ also supports multiple inheritance. Multiple inheritance is the ability of one class to derive properties from more than one class.


class Dogs {
    //code
};

class Cats {
    //code
};

class Derived : public Dogs, public Cats {
    //code derived from Dogs class and Cats class
};




While multiple inheritance is useful, it is important to be cautious of the “diamond problem.” The “diamond problem” is when it is ambiguous as to which parent class a property is inherited from if more than one parent class implements certain properties.




C++ deals with overloading method names and resolving those calls through offering an overloading feature. The overloading feature enables an overload of two or more methods with the same name but distinct parameters in order to create compile-time polymorphism. Function and operator overloading can be used to carry it out.



Sources:
https://www.geeksforgeeks.org/structure-vs-class-in-cpp/
https://www.udacity.com/blog/2021/11/multiple-inheritance-in-c.html#:~:text=C%2B%2B%20programmers%20use%20multiple%20inheritance,and%20how%20to%20solve%20them.
https://en.wikipedia.org/wiki/Multiple_inheritance#:~:text=Multiple%20inheritance%20has%20been%20a,one%20parent%20class%20implements%20said
https://www.mygreatlearning.com/blog/function-overloading-in-cpp/#:~:text=The%20C%2B%2B%20programming%20language%20offers,used%20to%20carry%20it%20out.



