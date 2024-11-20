#include <stdio.h>
#include <malloc.h>

int main(int argc, char **argv)
{
    const double pi = 3.141592654;
    //const const const const const double pi = 3.141592654; Same as line above, even definig multiple const qualifier.
    //pi = pi/2; Is not possible because const is a read only variable
    typedef const int zip;
    const zip q = 8;
    
    const float *pf; // pf points to a constant float value
    float * const pt; //pt is a const pointer (be carefull, const pointer cannot point to a different memory area than the one it is currently affected)
    const float * const ptr;
    float const * pfc; //Same as const  float *pfc
    
    /*Volatiles*/
    volatile const int loc; // same as const vloatile int * ploc;
    //An example of parameter const and volatile is a read only status register.
    //It is volatile because it can change unexpectedly.
    //It is const because the program should not attempt to modify it.
    
    //An example of pointer volatile is: Although this is not very common:
    //when an interrupt service routine modifies a pointer to a buffer.
    
    /*Restrict qualifier*/
    //Used in pointer declarations as a type qualifier for pointers.
    //Tells the compiler that a particular pointer is the only reference to the value it points throughout its scope
    //The same value is not referenced by any other pointer or variable within that scope
    //The pointer is the sole initial means of accessing a data object
    //Tells some other identifier might have changed the data in between two uses of a pointer
    
    //With restrict keyword used, the compiler is free to look for computational shortcuts.
    
    //restrict keyword not supported by C++
    
    //If programmer use restrict keyword and violate the above condition, result is undefined behaviour.
    
    //int restrict intPtrA;
    //int restrict intPtrB;
    //Tells the compiler that, for the duration of the scope in which intPtrA and intPtrB are defined,
    //they will never access the same value.
    //Their use for pointng to integers inside an array is mutually exclusive.
    //EXAMPLE:
    int n;//local variable for the array
    int array[10];
    int * restrict restar = (int *) malloc(10*sizeof(int));
    int *par = array;
    
    for (n=0;n<10;n++)
    {
        par[n] += 5;//cannot been combine with line 53 because not restrict, and separated by array call (line 52)
        restar[n] += 5; // combine with line 54, it is the same as restar[n] += 8;
        array[n] *= 2;
        par[n] += 3;//cannot been combine with line 50 because not restrict, and separated by array call (line 52)
        restar[n] =+ 3; // combine with line 51, it is the same as restar[n] += 8;
    }
    
    return 0;
}
