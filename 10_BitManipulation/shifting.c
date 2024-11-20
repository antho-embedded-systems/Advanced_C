#include <stdio.h>

int leftShift(int number, int index)
{
    int result = 0;
    result = number << index;
    return result;
}

int rightShift(int number, int index)
{
    int result = 0;
    result = number >> index;
    return result;
}