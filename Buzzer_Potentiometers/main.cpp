
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

#include "LCD1602.h"

// install GPIO
// 1. sudo apt install pigpio
// 2. sudo systemctl start pigpiod
// 3. sudo apt install libpigpio-dev

#define BUZZER 18

void buzzerPlay(int volume)
{
    gpioHardwarePWM(BUZZER, volume, 500000);
    usleep(500000);
}

int main()
{
    int volume = 500;
    LCD1602 lcd(0x27);
    lcd.init();

    while (true)
    {
        if (volume >= 1)
        {
            buzzerPlay(volume);
            lcd.clear();
            lcd.setCursor(0, 0);
            lcd.print("LOW Sound");
            std::cout << "LOW Sound" << std::endl;
        }
        else if (volume >= 500)
        {
            buzzerPlay(volume);
            lcd.clear();
            lcd.setCursor(0, 0);
            lcd.print("HIGHT Sound");
            std::cout << "HIGHT Sound" << std::endl;
        }
        else
        {
            buzzerPlay(volume);
            lcd.clear();
            lcd.setCursor(0, 0);
            std::cout << "Sound OFF" << std::endl;
        }

        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
    return 0;
}