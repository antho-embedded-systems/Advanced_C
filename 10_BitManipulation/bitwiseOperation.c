#include <stdio.h>

int logicalAnd(int n1, int n2)
{
    int res = 0;
    res = n1 & n2;
    return res;
}

int logicalOr(int n1, int n2)
{
    int res = 0;
    res = n1 | n2;
    return res;
}

int exclusiveOr(int n1, int n2)
{
    int res = 0;
    res = n1 ^ n2;
    return res;
}

int complementOne(int n)
{
    int res = 0;
    res = ~(n);
    return res;
}

int complementTwo(int n)
{
    int res = 0;
    res = ~(n);
    res += 1;
    return res;
}