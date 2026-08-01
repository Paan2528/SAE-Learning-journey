#include <iostream>
#include <string>

// base class
class Drink
{
public:
    virtual void drinkMenu() = 0;
};

// child class
class Coffee : public Drink
{
public:
    void drinkMenu()
    {
        std::cout << "Espresso" << std::endl;
        std::cout << "Cappuccino" << std::endl;
        std::cout << "Americano" << std::endl;
        std::cout << "Iced coffee" << std::endl;
        std::cout << "Cold brew" << std::endl;
    }
};

class Matcha : public Drink
{
public:
    void drinkMenu()
    {
        std::cout << "Iced Matcha Latte" << std::endl;
        std::cout << "Iced Matche with coconut water" << std::endl;
        std::cout << "Iced Matche strawberry sauce " << std::endl;
        std::cout << "Iced Matcha mango sauce smoothie" << std::endl;
    }
};

int main()
{

    Coffee ourCoffee;
    Matcha ourMatcha;

    // in Heap memory
    Drink *ptr1 = new Coffee();
    Drink *ptr2 = new Matcha();

    ptr1->drinkMenu();
    ptr2->drinkMenu();

    // Delete in Heap
    delete ptr1;
    delete ptr2;
}