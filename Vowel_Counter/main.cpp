#include <iostream>

void volwel_countter()

{
    std::cout << "This is Volwel:" << std::endl;

    std::string text_t = "i love to eat thai food.";
    int n = text_t.length();

    char arr[n + 1];
    strcpy(arr, text_t.c_str());

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'a')
        {
            std::cout << arr[i] << std::endl;
        }
        else if (arr[i] == 'e')
        {
            std::cout << arr[i] << std::endl;
        }
        else if (arr[i] == 'i')
        {
            std::cout << arr[i] << std::endl;
        }
        else if (arr[i] == 'o')
        {
            std::cout << arr[i] << std::endl;
        }
        else if (arr[i] == 'u')
        {
            std::cout << arr[i] << std::endl;
        }
    }
}

int main()
{

    volwel_countter();
}