#include "binsearch.hpp"
#include <stdio.h>

/**
 * Good morning! Here's your coding interview problem for today.

This problem was asked by Facebook.

Given a 32-bit integer, return the number with its bits reversed.

For example, given the binary number 1111 0000 1111 0000 1111 0000 1111 0000, 
return 0000 1111 0000 1111 0000 1111 0000 1111.*/

int reverse_bitwise(int numb)
{
    int result = 0;
    for(int i = 31 ; i >= 0  ; i--)
    {
        bool is = numb & (1<<i);
        result |= ((is) << (32-i-1));
    }
    return result;
}


int main()
{
    int numb = 0xDEADBEEF;
    int result = reverse_bitwise(numb);
    printf("\t0x%X\n" , result);
    return 0;
}