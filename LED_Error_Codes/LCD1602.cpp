#include "LCD1602.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/i2c-dev.h>
#include <thread>
#include <chrono>

#define LCD_CHR 1      // Mode - Sending data
#define LCD_CMD 0      // Mode - Sending command
#define LINE1 0x80     // 1st line
#define LINE2 0xC0     // 2nd line
#define BACKLIGHT 0x08 // On
#define ENABLE 0x04    // Enable bit

LCD1602::LCD1602(int address) : addr(address), fd(-1) {}

LCD1602::~LCD1602()
{
    if (fd >= 0)
        close(fd);
}

void LCD1602::init()
{
    fd = open("/dev/i2c-1", O_RDWR);
    if (fd < 0)
        return;
    if (ioctl(fd, I2C_SLAVE, addr) < 0)
        return;

    sendByte(0x33, LCD_CMD);
    sendByte(0x32, LCD_CMD);
    sendByte(0x06, LCD_CMD);
    sendByte(0x0C, LCD_CMD);
    sendByte(0x28, LCD_CMD);
    clear();
}

void LCD1602::sendByte(int bits, int mode)
{
    int bits_high = mode | (bits & 0xF0) | BACKLIGHT;
    int bits_low = mode | ((bits << 4) & 0xF0) | BACKLIGHT;
    toggleEnable(bits_high);
    toggleEnable(bits_low);
}

void LCD1602::toggleEnable(int bits)
{
    unsigned char buf[1];
    buf[0] = bits | ENABLE;
    write(fd, buf, 1);
    std::this_thread::sleep_for(std::chrono::microseconds(500));
    buf[0] = bits & ~ENABLE;
    write(fd, buf, 1);
    std::this_thread::sleep_for(std::chrono::microseconds(500));
}

void LCD1602::clear()
{
    sendByte(0x01, LCD_CMD);
    std::this_thread::sleep_for(std::chrono::milliseconds(2));
}

void LCD1602::setCursor(int col, int row)
{
    int val = (row == 0) ? (LINE1 + col) : (LINE2 + col);
    sendByte(val, LCD_CMD);
}

void LCD1602::print(const std::string &text)
{
    for (char c : text)
    {
        sendByte(c, LCD_CHR);
    }
}