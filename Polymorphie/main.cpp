#include <iostream>
#include <string>

class Drink
{
public:
    void drinkMenu()
    {
        std::cout << "Wellcome to our Cafe!" << std::endl;
    }
};
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
    Drink ourDrinkMenu;
    Coffee ourCoffee;
    Matcha ourMatcha;

    ourDrinkMenu.drinkMenu();
    ourCoffee.drinkMenu();
    ourMatcha.drinkMenu();
    return 0;
}