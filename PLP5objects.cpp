//Create an object (a simple Person or Date object is fine)
//Give the object class attributes (aka instance variables)
//Give the object functions
//Create an object that inherits from the first object (e.g., Student or Appointment) with some attributes and functions of its own
//Test how to instantiate both types of objects, call their functions, and modify their variables.

#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int bday;  
    Person(const std::string& n, int a) : name(n), bday(a) {}

    void fb() const {
        std::cout << "Hello! I'm " << name << " and my birthday is " << bday << std::endl;
    }
};

class Student : public Person { //class Derived : public Person
public:
    std::string major;
    Student(const std::string& n, int a, const std::string& m) : Person(n, a), major(m) {}

    void study() const {
        std::cout << "I'm studying " << major << "." << std::endl;
    }
};

int main() {
    Person fayza("Fayza", 20030423);  
    fayza.fb();

    Student sebah("Sebah", 20050614, "Engineering");  
    sebah.fb();
    sebah.study();

    fayza.bday = 20001231;  
    sebah.bday = 20000229;   

    //Test how to instantiate
    //fayza.fb();
    //sebah.fb();

    return 0;
}