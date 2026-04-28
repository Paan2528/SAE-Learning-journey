#include <iostream>

int main()
{
    // int on the Heap
    // new allocates memory on the heap and returns a pointer to it. The value 10 is assigned to that memory location.

    int *number = new int{};

    // Array on the Heap
    int *arr = new int[3]{1, 2, 'A'};

    // Output the values
    // *number dereferences the pointer to get the value stored at that memory location, which is 10. arr[0] accesses the first element of the array, which is 1.
    std::cout << *number << std::endl;
    std::cout << arr[0] << std::endl;
    std::cout << arr[1] << std::endl;
    std::cout << arr[2] << std::endl;

    // Clean up memory
    delete number;
    delete[] arr;

    return 0;
}