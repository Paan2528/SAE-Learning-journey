
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

    srand(time(nullptr));

    while (true)
    {
        std::string text[] = {
            "SAE Hamburg",
            "Software",
            "Rust",
            "C#",
            "Arduino"};

        int index = rand % 4;

        lcd.clear();

        lcd.setCursor(0, 0);
        lcd.print(text[index]);

        lcd.setCursor(0, 1);
        lcd.print("Random");

        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
    return 0,
}