#include <stdio.h>
#include <malloc.h>

struct myArray {
    int length;
    int flexibleArray[];
}; //end struct myArray

//A flexible array member can be declared only as the last member of a struct

//Each struct can contain at most one flexible array member

//A flexible array cannot be the only member of a struct
//The struct must also have one or more fixed members

//Any struct with a flexible array member cannot be statically initialized
//It must be allocated dynamically
//You cannot fix the size of the flexible array member at compile time

int main()
{
    int desiredSize = 0;
    printf("Enter the array size:\n");
    scanf("%d",&desiredSize);
    
    struct myArray *ptr;
    
    ptr = malloc(sizeof(struct myArray) + desiredSize * sizeof(int));
    if (ptr == NULL)
        return(-1);
    ptr->length = desiredSize;
    for(int i=0; i<ptr->length ;i++)
    {
        ptr->flexibleArray[i] = i;//fill the tab with dummy datas
    }
    for(int i=0; i<ptr->length ;i++)
    {
        printf("%d ",ptr->flexibleArray[i]);//display the datas in tab
    }
    free(ptr);
    return(0);
}
