#include <iostream>
#include <string>
#include <cmath>

int main()
{
    // input first Number
    std::string firstNumber;
    std::cout << "Please enter the first number: ";
    std::cin >> firstNumber;
    float firstNumberFloat = std::stof(firstNumber);

    // input Math operator
    std::string mathOperator;
    std::cout << "Please enter the math operator: \n";
    std::cin >> mathOperator;

    // input second Number
    std::string secondNumber;
    std::cout << "Please enter the second number: ";
    std::cin >> secondNumber;
    float secondNumberFloat = std::stof(secondNumber);

    // Result
    float result;
    // Calculate the result based on the math operator
    switch (mathOperator[0])
    {
    case '+':
        result = firstNumberFloat + secondNumberFloat;
        break;
    case '-':
        result = firstNumberFloat - secondNumberFloat;
        break;
    case '*':
        result = firstNumberFloat * secondNumberFloat;
        break;
    case '/':
        if (secondNumberFloat == 0)
        {
            std::cout << "Error: Division by zero is not allowed.\n";
            return 0;
        }
        result = firstNumberFloat / secondNumberFloat;
        break;
    default:
        std::cout << "Error: Invalid math operator.\n";
        return 0;
    }

    // Loop
    bool resultIsValid = true;
    while (resultIsValid)
    {
        std::string mathOperator;
        std::cout << "If you want to continue, please enter the math operator: (+ - * / ^ l) or  'A' to get the result or 'exit' to exit the program.\n";
        std::cin >> mathOperator;

        if (mathOperator == "A")
        {
            std::cout << "Result: " << result << "\n";
            result = 0;
            continue;
        }
        std::string nextNumber;
        std::cout << "Please enter the next number: ";
        std::cin >> nextNumber;

        double num = std::stof(nextNumber);
        // Calculate the result based on the math operator
        switch (mathOperator[0])
        {
        case '+':
            result = result + num;
            break;
        case '-':
            result = result - num;
            break;
        case '*':
            result = result * num;
            break;
        case '^':
            result = pow(result, num);
            break; // '^' for exponentiation
        case 'l':
            result = log(num);
            break; // 'l' for logarithm
        case '/':
            if (num == 0)
            {
                std::cout << "Error: Division by zero is not allowed.\n";
                return 0;
            }
            result = result / num;
            break;
        default:
            std::cout << "Error: Invalid math operator.\n";
            return 0;
        }
    }
}

// Make 2 Loop for continuing the calculation until the user wants to get the result or exit the program.