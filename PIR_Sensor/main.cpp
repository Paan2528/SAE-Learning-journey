
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

#include "LCD1602.h"

int main()
{
    LCD1602 lcd(0x27);
    lcd.init();
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("LED LOOP");
    //----------PIR Sensor------------//
    int lead = 17; //
    std::cout << "PIR Sensor" << std::endl;

    while (true)
    {

        std::string cmd_on = "pinctrl set " + std::to_string(lead) + " op dh";
        std::system(cmd_on.c_str());
        std::cout << "PIR sensor " << " (GPIO " << lead << ") -> Something MOVE!" << std::endl;
        lcd.clear();
        lcd.setCursor(0, 1);
        lcd.print("SOMETHING MOVING!");

        std::this_thread::sleep_for(std::chrono::milliseconds(500));

        // the motion could not be detected
        std::string cmd_off = "pinctrl set " + std::to_string(lead) + " op dl";
        std::system(cmd_off.c_str());
    }
    return 0;
}