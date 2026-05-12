// get the value in Array or Vector
//  in order from hight value to lowest
//  Loop function for swap and dont't use "std::sort"
// swap pointer

#include <iostream>
// swap pointer function for swap number
void swap(int *a, int *b).
{
    int start = *a;
    *a = *b;
    *b = start;
}

int main()
{
    int arrNumber[5] = {1, 3, 2, 7, 5};

    std::cout << "test loop" << std::endl;

    // 2 Loop: big loop for set how many loop (depend on how many Array)
    for (int i = 0; i < 5; i++)
    {

        // small loop inside in big loop for compare array.
        // It will du untill end of big loop

        for (int j = 0; j < 4; j++)
        {
            if (arrNumber[j] > arrNumber[j + 1])
            {
                swap(&arrNumber[j], &arrNumber[j + 1]);
            }
        }
        std::cout << arrNumber[i] << std::endl;
    }

    std::cout << "End Loop" << std::endl;
    return 0;
}