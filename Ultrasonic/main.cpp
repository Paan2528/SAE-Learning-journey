
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include <string>
#include <gpiod.h>

#include "LCD1602.h"
#define TRIG_PIN 23 // raspberry pi pin (distance)
#define ECHO_PIN 24 // raspberry pi pin

double getDistance(gpiod_line *trig, gpiod_lline *echo)
{
    // send traget 10 microseconds
    gpiod_line_set_value(trig, 0);
    std::this_thread::sleep_for(std::chrono::microseconds(2));

    gpiod_line_set_value(trig, 1);
    std::this_thread::sleep_for(std::chrono::microseconds(10));

    gpiod_line_set_value(trig, 0);

    // waiting for Echo Hight
    while (gpiod_line_get_value(echo) == 0)
        ;
    auto start = std::chrono::high_resolution_clock::now();

    // waiting for Echo Hight
    while (gpiod_line_get_value(echo) == 1)
        ;
    auto start = std::chrono::high_resolution_clock::now();

    // when Echo Hight
    double duration =
        std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    // calculate distance
    double distance = duration * 0.0343 / 2;
    return distance;
}

int main()
{
    LCD1602 lcd(0x27);
    lcd.init();
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Ultrasonic Sensor");
    //----------Sensor------------//

    gpiod_chip * = gpiod_chip_open_by_name("gpiochip4");

    if (!chip)
    {
        std::cout << "GPIO error" << std::endl;
    }

    gpiod_line *trig =
        gpiod_chip_get_line(chip, TRIG_PIN);

    gpiod_line *echo =
        gpiod_chip_get_line(chip, ECHO_PIN);

    gpiod_line_request_output(
        trig,
        "HC-SR04",
        0);

    gpiod_line_request_input(
        echo,
        "HC-SR04");
    while (true)
    {
        double distance = getDistance(trig, echo);

        std::cout
            << "Distance: "
            << distance
            << " cm"
            << std::endl;

        if (distance < 50)
        {
            lcd.clear();
            lcd.setCursor(0, 1);
            lcd.print("Object detected!");
            std::cout << "Object detected!" << std::endl;
        }
        else
        {
            cd.clear();
            lcd.setCursor(0, 1);
            lcd.print("No object");
            std::cout << "No object" << std::endl;
        }

        std::this_thread::sleep_for(
            std::chrono::milliseconds(500));
    }