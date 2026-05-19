#include <iostream>
// 2 Bool + Logic if statment
// Programm Light and Fan control (On/OFF)

// Start Programm
void print(std::string text)
{
    std::cout << text << std::endl;
}
std::string input()
{
    std::string text;
    std::cin >> text;
    return text;
}

void Initialize()
{
    print("Please add you name:");
    std::string nameUser = input();
    print("Wellcome " + nameUser + " to Home controls");
}
// run loop

void Run()
{
    while (true)
    {
        print("Select electrical equipment");
        print("---Lamper---|---Fan---");
        print("Pleases select the Equiment");
        print("1 for Lamper or 2 for Fan");
        std::string inputEquiment = input();
        while (inputEquiment != "1" && inputEquiment != "2")
        {
            print("Pleases select number 1 or 2");
            inputEquiment = input();
        }

        std::string equimentName;

        if (inputEquiment == "1")
        {
            equimentName = "Lamper";
            print("Hier is Lamper");
        }
        else if (inputEquiment == "2")
        {
            equimentName = "Fan";
            print("Hier is Fan");
        }

        print("-------ON(1)/OFF(0)---------");
        std::string command = input();
        while (command != "1" && command != "0")
        {
            print("Pleases select number 1 or 0");
            command = input();
        }

        if (command == "1")
        {
            print(equimentName + "ON");
        }
        else if (command == "2")
        {
            print(equimentName + "OFF");
        }
    }
}

// close the programm
void Finalize()
{
}

int main()
{
    Initialize();
    Run();
    Finalize();
}