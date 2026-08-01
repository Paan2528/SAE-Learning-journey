#include <iostream>
#include <cstdlib> // malloc, free

class Cafe
{
    std::string title;

public:
    Cafe(std::string t) { title = t; }
    void printInfo() { std::cout << title << std::endl; }

    void *operator new(size_t size)
    {
        return malloc(size);
    }
    void operator delete(void *ptr)
    {
        free(ptr);
    }
};
int main()
{
    Cafe *myCafe = new Cafe(" Iced Matcha latte");
    myCafe->printInfo();
    delete myCafe;

    Cafe *myCafeNewMenu = new Cafe("Epresso with orange");
    myCafeNewMenu->printInfo();
    delete myCafeNewMenu;
    return 0;
}