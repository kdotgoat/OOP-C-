#include <iostream>
#include <string>
class Animal {
public:
    void eat(){
     cout<< "I can eat!" << endl;
     }
};

class Dog : public Animal {
public:
    void bark() {
    cout << "I can bark! Woof woof!" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Inherited from Animal
    myDog.bark(); // Defined in Dog
    return 0;
}
