// largest of N numbers

#include <iostream>

int main()
{
    constexpr int constSizeOfArr = 1000; // CHANGE THE MAX SIZE OF ARRAY
    std::cout << "Enter size of array(1-" << constSizeOfArr<<"): ";
    int sizeArr{};
    std::cin >> sizeArr;
    int arr[constSizeOfArr];
    if (sizeArr <= constSizeOfArr && sizeArr > 0)
    {
        for (int i = 0; i <= (sizeArr - 1); i++)
        {
            std::cout << "Enter element[" << i << "] : ";
            std::cin >> arr[i];
        }
        for (int i = 0; i <= (sizeArr - 1); i++)
        {
            if (arr[0] < arr[i])
                arr[0] = arr[i];
        }
        std::cout << arr[0];
    }
    else
    {
        if (sizeArr == 0)
            std::cout << "Enter valid number other than 0.";
        else
            std::cout << "The size of array is out of range.";
    }
}