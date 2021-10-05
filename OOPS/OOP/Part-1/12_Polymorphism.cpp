/*
Polymorphism means "many forms", and 
it occurs when we have many classes that are related to each other by inheritance.

Like we specified in the previous chapter; 
Inheritance lets us inherit attributes and methods from another class.
 Polymorphism uses those methods to perform different tasks.
  This allows us to perform a single action in different ways.

For example, think of a base class called Animal that has a method called animalSound(). 
Derived classes of Animals could be Pigs, Cats, Dogs, Birds - 
And they also have their own implementation of an animal sound (the pig oinks, and the cat meows, etc.)

*It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.
*/

#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    void animalSound()
    {
        cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal
{
public:
    void animalSound()
    {
        cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal
{
public:
    void animalSound()
    {
        cout << "The dog says: bow wow \n";
    }
};

int main()
{
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
    return 0;
}