#include <iostream>
#include <stdlib.h>
#include "TemplateExample.h"

//函数声明
int abc(int a, int b, int c);

int main()
{
    int a = 5;
    int b = 5;
    int c = 5;

    std::cout << abc<int>(a, b, c) << std::endl;

    int swapFirst = 111;
    int swapSecond = 222;
    Swap<int>(swapFirst, swapSecond);
    std::cout << swapFirst << "|" << swapSecond << std::endl;

    int arr[10] = { 0 };
    std::cout << count<int>(arr, 10) << std::endl;

    int start = 0;
    int end = 8;
    int value = 111;
    fill(arr, start, end, value);
    for (size_t i = 0; i < end; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    
    int arrFirst[3] = {9, 9, 9};
    int arrSecond[3] = {9, 9, 9};
    std::cout << inner_product<int>(arrFirst, arrSecond, 3) << std::endl;

    int arrThird[3] = {1, 1, 1};
    iota<int>(arrThird, 3, 4);
    for (size_t i = 0; i < 3; i++)
    {
        std::cout << arrThird[i] << "   " ;
    }

    std::cout << std::endl;

    return 0;
}
