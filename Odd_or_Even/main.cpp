#include <iostream>

void checkNum()
{
    int numBox[10] = {2, 4, 5, 6, 9, 11, 3, 6, 9, 4};

    for (int i = 0; i < 10; i++)
    {
        if (numBox[i] % 2 == 0)
        {
            std::cout << "Evan:" << numBox[i] << std::endl;
        }
        if (numBox[i] % 2 == 1)
        {
            std::cout << "Odd:" << numBox[i] << std::endl;
        }
    }
}

int main()
{
    std::cout << "Start" << std::endl;
    checkNum();
    return 0;
}