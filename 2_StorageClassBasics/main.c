#include <stdio.h>

/*a global double variable that is only accessible inside this file*/
static double var2;
/*a global float variable that is accessible within the entire program*/
extern float var3;

static void myfunc(void);

int main(int argc, char **argv)
{
    /*int variable with block scope and temporary storage*/
    auto int var1;
    /*a float local variable with permanent storage*/
    static float var4;
    /*a register int variable*/
    register int var5;
    myfunc();
    return 0;
}

/*a function that is only accessible with the file it is defined*/
static void myfunc(void)
{
    printf("myfunc");
}
