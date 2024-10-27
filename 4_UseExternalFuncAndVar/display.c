#include <stdio.h>

extern int loop_counter;

extern void display(void)
{
    printf("%d",loop_counter+1);
}