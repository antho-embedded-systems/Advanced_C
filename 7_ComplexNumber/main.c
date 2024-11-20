#include <stdio.h>
#include <complex.h>

#define __STDC_WANT_LIB_EXT1__ 1

int main()
{
    #ifdef __STDC_NO_COMPLEX__
        printf("Complex numbers are not supported.\n");
        exit(1);
    #else
        printf("Complex numbers are suported.\n");
        double complex cx = 1.0 + 3.0*I;
        double complex cy = 1.0 - 4.0*I;
        
        printf("Working with complex numbers:\n");
        printf("Starting values: cx = %.2f%+.2fi cy = %.2f%+.2fi\n",creal(cx),cimag(cx),creal(cy),cimag(cy));
        
        double complex sum = cx + cy;
        printf("Sum cx + cy = %.2f%+.2fi\n",creal(sum),cimag(sum));
        
        double complex difference = cx - cy;
        printf("Difference cx - cy = %.2f%+.2fi\n",creal(difference),cimag(difference));
        
        double complex product = cx*cy;
        printf("Sum cx * cy = %.2f%+.2fi\n",creal(product),cimag(product));
        
        double complex quotient = cx/cy;
        printf("Difference cx / cy = %.2f%+.2fi\n",creal(quotient),cimag(quotient));
        
        double complex conjugate = conj(cx);
        printf("The conjugate of cx = %.2f%+.2fi\n",creal(conjugate),cimag(conjugate));
    #endif
    return 0;
}
