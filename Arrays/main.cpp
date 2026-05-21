#include <iostream>
#include <string>

const int ROWS = 8;
const int COLS = 30;

char framTUI[ROWS][COLS];

void cleanScreen()
{
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            framTUI[row][col] = ' ';
        }
    }
}

void framScreen()
{
    for (int col = 0; col < COLS; col++)
    {
        framTUI[0][col] = '-';
        framTUI[ROWS - 1][col] = '-';
    }
    for (int row = 0; row < ROWS; row++)
    {
        framTUI[row][0] = '|';
        framTUI[row][COLS - 1] = '|';
    }
    framTUI[0][0] = '+';
    framTUI[0][COLS - 1] = '+';
    framTUI[ROWS - 1][0] = '+';
    framTUI[ROWS - 1][COLS - 1] = '+';
}

void printFram()
{
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            std::cout << framTUI[row][col];
        }
        std::cout << std::endl;
    }
}
void textinTUI(int row, int col, std::string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (col + i < COLS - 1)
        {
            framTUI[row][col + 1] = text[i];
        }
    }
}
void updateTUI(int score, std::string question, std::string result)
{
    cleanScreen();
    framScreen();
    textinTUI(1, 2, "Hello GAME!");
    textinTUI(3, 2, "Score: " + std::to_string(score));
    textinTUI(4, 2, "Question: " + question);
    textinTUI(5, 2, "Result: " + result);
}

int main()
{
    int score = 0;
    int answer;

    updateTUI(score, "2+3 = ?", "weiting....");
    printFram();

    std::cout << "Answer: ";
    std::cin >> answer;

    if (answer == 5)
    {
        score++;
        updateTUI(score, "2+3 = ?", "Correct!");
    }
    else
    {
        updateTUI(score, "2+3 = ?", "Wrong!");
    }
    printFram();
    return 0;
}