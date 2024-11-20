#include <stdio.h>

struct point {int x,y;};

int main()
{
    //initialize list
    int numbers[100] = {1, 2, 3, [3 ... 9] = 10, [10] = 80, 15, [70]=50, [42] = 400};
    for (int i=0;i<20;i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n%d ",numbers[70]);
    printf("%d ",numbers[42]);
    
    //Size of list elements
    int n = sizeof(numbers) / sizeof(numbers[0]);
    printf("Number of elements in list = %d\n",n);
    
    //initialize structure
    //struct point p = {.y = 2, .x = 3};
    //struct point p = {y: 2, x: 3};
    //struct point p = {2, 3};
    
    //tab of points
    struct point pts[5] = { [2].y = 5, [2].x = 6, [0].x = 2 };
    for (int i=0;i<5;i++)
        printf("%d %d\n", pts[i].x, pts[i].y);
    return 0;
}
