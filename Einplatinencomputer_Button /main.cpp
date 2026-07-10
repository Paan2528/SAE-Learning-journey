#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
#include <functional>
#include "LCD1602.h"

int checkButton17()
{
    std::array<char, 128> buffer;
    std::string result;

    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen("pinctrl get 17", "r"), pclose);
    if (!pipe)
        return 1;

    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr)
    {
        result += buffer.data();
    }
}
int checkButton27()
{
    std::array<char, 128> buffer;
    std::string result;

    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen("pinctrl get 27", "r"), pclose);
    if (!pipe)
        return 1;

    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr)
    {
        result += buffer.data();
    }
}
void callblack(int button)
{
    LCD1602 lcd(0x27);
    lcd.init();
    lcd.clear();

    if (button == checkButton17())
    {
        lcd.setCursor(0, 0);
        lcd.print("Button 1");
    }
    else
    {
        lcd.setCursor(0, 0);
        lcd.print("Button2");
    }
}

int main()
{

    while (true)
    {
        if (checkButton17() == 0)
        {
            callblack(17);
        }
        if (checkButton27() == 0)
        {
            callblack(27);
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(30));
    }
}