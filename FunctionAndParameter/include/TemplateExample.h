#pragma once

#include <iostream>

template<class Ta>
Ta abc(Ta& a, Ta& b, Ta& c)
{
    return a + b * c;
}

//交换两个变量的值
template<class Ts>
void Swap(Ts& a, Ts& b)
{
    Ts temp = a;
    a = b;
    b = temp;
}

template<class Tc>
int count(Tc* arr, int n)
{
    return n;
}

template<class Tf>
void fill(Tf* arr, int start, int end, const Tf& value)
{
    for (size_t i = start; i < end; i++)
    {
        arr[i] = value;
    }
}

template<class Tsu>
Tsu inner_product(Tsu* arrfirst, Tsu* arrsecond, int n)
{
    Tsu result123 = arrfirst[0] * arrsecond[0];
    for (size_t i = 1; i < n; i++)
    {
        std::cout << "arrFirst:" << arrfirst[i] << "   i:" << i << std::endl;
        std::cout << "arrSecond:" << arrsecond[i] << "   i:" << i << std::endl;
        result123 = result123 + arrfirst[i] * arrsecond[i];
    }
    
    return result123;
}

template<class Ti>
void iota(Ti* arr, int n, const Ti& value)
{
    for (size_t i = 0; i < n; i++)
    {
        arr[i] = arr[i] + value;
    }
}

