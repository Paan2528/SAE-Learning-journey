#include <iostream> // add missing include for std::cout
#include <cmath>
#include <cstdint> // add missing include for std::int

/// <summary>

/// <param name="a_iLHS"></param>
/// <param name="a_iRHS"></param>

bool g_bIsRunning = true; // change to bool and add initialization
char g_sInput;
int a_iLHS = 2, a_iRHS = 2;

// change void to int and add return statement
/// Calculations
int calc_addition(int a_iLHS, const int a_iRHS)
{
    return a_iLHS + a_iRHS;
}

int calc_substraction(int a_iLHS, const int a_iRHS)
{
    return a_iLHS - a_iRHS; // + -> -
}

int calc_multiplication(int a_iLHS, const int a_iRHS)
{
    return a_iLHS * a_iRHS;
}

// change static to int and add return statement
int calcDivision(int a_iLHS, const int a_iRHS)
{
    return a_iLHS / a_iRHS;
}

void Initialize(void)
{
    std::cout << "-- Init --" << std::endl;
}

void Finalize(void)
{
    std::cout << "-- Fin --" << std::endl;
}

void Run(void)
{
    while (g_bIsRunning)
    {
        std::cout << "-- Run --" << std::endl;
        std::cout << "Command: " << std::endl; // std::cout -> std::string
        std::cin >> g_sInput;

        switch (g_sInput)
        {
        case '+':
            std::cout << calc_addition(a_iLHS, a_iRHS) << std::endl;
            break;
        case '-':
            std::cout << calc_substraction(a_iLHS, a_iRHS) << std::endl;
            break;
        case '*':
            std::cout << calc_multiplication(a_iLHS, a_iRHS) << std::endl;
            break;
        case '/':
            std::cout << calcDivision(a_iLHS, a_iRHS) << std::endl;
            break;
        case 'X':
            g_bIsRunning = false;
            break;
        default:
            break;
        }
    }
}

/// Initializes the program

int main()
{
    std::cout << "Hello World!\n";
    Initialize();
    Run(); //???
    Finalize();
}

void Main()
{
    int res = main();
}
/// <summary>
/// </summary>/// </summary>
/// <param name=""></param>
/// <summary>
/// Finalizes the program
/// </summary>
/// <param name=""></param>
