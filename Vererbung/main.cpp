#include <iostream>
#include <string>

class ClassRoom
{
protected:
    int sID;
    std::string sName;

public:
    void setData(std::string studentName, int studenid)
    {
        sID = studenid;
        sName = studentName;
    }
    void math()
    {
        std::cout << sName << " learning Math." << std::endl;
    }
    void english()
    {
        std::cout << sName << " learning English." << std::endl;
    }
    void sport()
    {
        std::cout << sName << " learning Sport." << std::endl;
    }
};
class Class1 : public ClassRoom
{
public:
    void newStudent()
    {
        std::cout << sName << ". I'm a new student" << std::endl;
    }
};
class Class2 : public ClassRoom
{
public:
    void secondYearStudent()
    {
        std::cout << sName << ". I'm a second year student" << std::endl;
    }
};

int main()
{
    Class1 myClass1;
    Class2 myClass2;

    myClass1.setData("Janjira Yatoum", 1539900517);
    myClass1.english();
    myClass1.newStudent();
    myClass2.setData("Jaruwan Yatoum", 1234353035);
    myClass2.sport();
    myClass2.secondYearStudent();

    return 0;
};