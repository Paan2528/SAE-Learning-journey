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
    print("__________________________________________");
    print("    Please add you name:                  ");
    std::string nameUser = input();
    print("                                          ");
    print("__________________________________________");
    print("                                          ");
    print("Wellcome " + nameUser + " to Home controls");
    print("__________________________________________");
}
// run loop

void Run()
{
    while (true)
    {
        print("                                             ");
        print("Pleasse Select electrical equipment.");
        print("                                             ");
        print("-------Lamper---------|---------Fan----------");
        print("                                             ");
        print("Press number 1 for Lamper or number 2 for Fan.");

        std::string inputEquiment = input();

        // check input if that user press number 1 or 2 or not.
        while (inputEquiment != "1" && inputEquiment != "2")
        {

            print("Pleases select number 1 or 2 for Equiment");
            inputEquiment = input();
        }

        std::string equimentName;

        if (inputEquiment == "1")
        {
            equimentName = "Lamper";
            print("Hier is Lamper!");
        }
        else if (inputEquiment == "2")
        {
            equimentName = "Fan";
            print("Hier is Fan!");
        }

        print("---------------------------------------");
        print("------ ON(1) ----/----- OFF(0) --------");
        print("and press X for check status of programm.");
        std::string command = input();
        while (command != "1" && command != "0")
        {
            print("Pleases press number 1(ON) or 0(OFF)");
            command = input();
        }

        if (command == "1")
        {
            print("-----Now " + equimentName + " is ON!----");
        }
        else if (command == "0")
        {
            print("-----Now " + equimentName + " is OFF!--");
        }
        else if (command == "X")
        {
            print("Equiment : ");
            print("-----Now " + equimentName + " is ON!----");
            print("-----Now " + equimentName + " is ON!----");
            break;
        }
    }
}

// close the programm
// status of equiement

// std::string statusEquiment = equimentName;

void Finalize()
{
    print("Programm close.");
}

int main()
{
    Initialize();
    Run();
    Finalize();
}