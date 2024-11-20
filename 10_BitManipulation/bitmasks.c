#include <stdio.h>

int bitmaskAND(int mask, int flag)
{
    flag = flag & mask;
    return flag;
}

int bitmaskOR(int mask, int flag)
{
    flag = flag | mask;
    return flag;
}
