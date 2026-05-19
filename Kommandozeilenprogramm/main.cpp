#include <iostream>
#include <string>
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
    print("Welcome " + nameUser + " to Home controls");
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
        print("-------Lamp-----------|---------Fan----------");
        print("                                             ");
        print("Press number 1 for Lamper or number 2 for Fan.");

        std::string inputEquipment = input();

        // check input if that user press number 1 or 2 or not.
        while (inputEquipment != "1" && inputEquipment != "2")
        {

            print("Pleasse select number 1 or 2 for Equipment");
            inputEquipment = input();
        }

        std::string equipmentName;

        if (inputEquipment == "1")
        {
            equipmentName = "Lamp";
            print("Hier is Lamp!");
        }
        else if (inputEquipment == "2")
        {
            equipmentName = "Fan";
            print("Hier is Fan!");
        }

        print("---------------------------------------");
        print("------ ON(1) ----/----- OFF(0) --------");
        print("and press X for close the programm.");
        std::string command = input();
        while (command != "1" && command != "0" && command != "X")
        {
            print("Pleasse press number 1(ON) or 0(OFF)");
            command = input();
        }

        if (command == "1")
        {
            print("-----Now " + equipmentName + " is ON!----");
        }
        else if (command == "0")
        {
            print("-----Now " + equipmentName + " is OFF!--");
        }
        else if (command == "X")
        {
            break;
        }
    }
    return;
}

// close the programm
// status of equiement

// std::string statusEquiment = equimentName;

void Finalize()
{
    print("Programm close.......");
}

int main()
{
    Initialize();
    Run();
    Finalize();
}