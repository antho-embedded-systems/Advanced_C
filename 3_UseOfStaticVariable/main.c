#include <stdio.h>

int sum(int num)
{
    /*
     * Find sum a number
     */
     static int cpt = 0;
     cpt += num;
     return cpt;
}

int main(int argc, char **argv)
{
    printf("%d",sum(25));
    printf("%d",sum(15));
    printf("%d",sum(30));
    return 0;
}


