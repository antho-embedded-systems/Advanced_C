#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>
jmp_buf buf;

int main(int argc, char **argv)
{
    /*Use of the goto*/
    //Difficult to maintain, not a good programming style.
    const int maxInput = 5;
    int i = 0;
    double number, average, sum = 0.0;
    
    for (i=1; i<=maxInput; i++)
    {
        printf("%d. Enter a number: ", i);
        scanf("%lf", &number);
        if(number < 0.0)
            goto jump;
        sum += number;
    }
    jump: average = sum/(i-1);
    printf("Sum = %.2f\n",sum);
    printf("Average = %.2f\n",average);
    
    /*The NULL statement*/
    //For exemple, when you want to find the index of first
    //occurence of a certain character in a string
    char a[50] = "the empire strikes back";
    
    for(int i=0;a[i]!='t';i++)
    {
        ;//null statement as no operation is required
    }
    
    /*Comma operator*/
    //while(i<100)
    //    sum+= data[i], ++i;//i is added after the sum affectation to data[i]
    //int i(5,10);//10 is assigned to i
    //int j = (f1(), f2());
    //x=(y = 3, (z= ++y + 2) + 5); //x = 11: 4+2+5=11
    printf("display1"),
    printf("display2"),
    printf("done\n");
    
    int w1=1, w2=2;
    printf("%d:%d",w1,w2);
    
    /*setjmp and longjmp*/
    //setjmp can be use as try in java and C++
    //longjmp can be used as through in java and C++
    int var = setjmp(buf);
    printf("var = %d\n",var);
    if (var != 0) exit(0);
    longjmp(buf,42);//does a forever loop.
    printf("Does this line get printed?\n");
    return 0;
}
