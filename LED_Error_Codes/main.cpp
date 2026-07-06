
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

#include "lcd1602.h"

int main()
{
    LCD1602 lcd(0x27);
    lcd.init();
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("LED LOOP");
    //----------LED-------
    int lead[] = {16, 20, 21};
    std::cout << "LED Loop" << std::endl;

    while (true))
        {
            for (int i = 0; i < 3; i++)
            {
                std::string cmd_on = "pinctrl set " + std::to_string(lead[i]) + " op dh";
                std::system(cmd_on.c_str());
                std::cout << "LED " << (i + 1) << " (GPIO " << lead[i] << ") -> ON" << std::endl;

                std..this_thread::sleep_for(std::chrono::milliseconds(500));

                // turn off
                std::string cmd_off = "pinctrl set " + std::to_string(lead[i]) + " op dl";
                std::system(cmd_off.c_str());
                std::cout << "-- start again -- " << std::endl;
            }
            return 0;
        }
}