#include <iostream>
#include <vector>
#include <list>

// collect user information (Username + Password)
struct passwortManage
{
    std::string Username;
    std::string Password;

    passwortManage(std::string username, std::string password)
    {
        Username = username;
        Password = password;
    }
};

// check if the username is valid (only letters)
bool isCorrectUsernameValid(std::string username)
{
    for (char character : username)
    {
        if (!((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')))
        {
            std::cout << "The username you entered was incorrect. The program will exit now.\n";
            return false;
        }
    }
    return true;
}
// check if the password is valid (only numbers)
bool isCorrectPasswordValid(std::string password)
{
    for (char character : password)
    {
        if (!((character >= '0' && character <= '9')))
        {
            std::cout << "The password you entered was incorrect. The program will exit now.\n";
            return false;
        }
    }
    return true;
}

// start of the program
int main()
{
    // input username
    std::string inputUsername;
    std::cout << "Please enter your username.(Only letters: a-z, A-Z)\nUsername: ";
    std::cin >> inputUsername;

    if (!isCorrectUsernameValid(inputUsername))
    {
        return 0;
    }

    // input password
    std::string inputPassword;
    std::cout << "Hello there! Please enter your password.(Only numbers: 0-9)\nPassword: ";
    std::cin >> inputPassword;

    if (!isCorrectPasswordValid(inputPassword))
    {
        return 0;
    }

    // Loop starts.
    bool passwortLoop = true;
    // List to save the user information.
    std::list<passwortManage> memberUser = std::list<passwortManage>();

    // Loop for creating new users and showing all user data.
    while (passwortLoop == true)
    {
        std::string newUsernameInput;
        std::string newPasswordInput;

        std::cout << "Create new user. Please Press Y Or N for Mamber User Data .\n";
        char userChoise;
        std::cin >> userChoise;

        // new User
        if (userChoise == 'Y')
        {
            std::cout << "Enter new user information.\nUsername: ";
            std::cin >> newUsernameInput;
            std::cout << "\nPassword: ";
            std::cin >> newPasswordInput;
            passwortManage newUser = passwortManage(newUsernameInput, newPasswordInput);
            std::cout << "New user created. Username: " << newUser.Username << " with password: " << newUser.Password;
            memberUser.push_back(newUser);
        }
        // display user data
        else if (userChoise == 'N')
        {

            for (passwortManage user : memberUser)
            {
                std::string currentUsername = user.Username;
                std::string currentPassword = user.Password;

                std::cout << "\nUsername: " << currentUsername << " with password: " << currentPassword << std::endl;
            }
        }
    }
}