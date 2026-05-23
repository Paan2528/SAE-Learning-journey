#include <iostream>
#include <string>

// Studen ID

class meinClass
{
private:
    std::string name;
    int id;

public:
    // Sette
    void setName(std::string newName)
    {
        name = newName;
    }
    void setID(int newID)
    {
        if (id > 0)
        {
            id = newID;
        }
    }

    // Gette
    std::string getName()
    {
        return name;
    }

    int getID()
    {
        return id;
    }
};

int main()
{
    meinClass myObj;          // build Object
    myObj.setName("Janjira"); // call the Oblect
    myObj.setID(571539901);

    std::cout << myObj.getName() << std::endl;
    std::cout << myObj.getID() << std::endl;

    return 0;
}