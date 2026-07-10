#ifndef LCD1602_H
#define LCD1602_H

#include <string>

class LCD1602
{
public:
    LCD1602(int address);
    ~LCD1602();
    void init();
    void clear();
    void setCursor(int col, int row);
    void print(const std::string &text);

private:
    int fd;
    int addr;
    void sendByte(int bits, int mode);
    void toggleEnable(int bits);
};

#endif