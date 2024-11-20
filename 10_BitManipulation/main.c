#include <stdio.h>
#include <math.h>
#include <limits.h>
#include "bitwiseOperation.h"
#include "convert.h"
#include "shifting.h"
#include "bitmasks.h"

int main()
{
    /*Convert*/
    long long n = 101;
    printf("%lld in binary = %d in decimal\n", n, convertBinaryToDecimal(n));
    printf("%d in decimal = %lld to binary\n", convertBinaryToDecimal(n) , convertDecimalToBinary(convertBinaryToDecimal(n)));
    
    /*Bitwise operations*/
    int w1 = 25;
    int w2 = 77;
    printf("Logical AND between %d and %d = %d\n",w1,w2,logicalAnd(w1,w2));
    //0000000000011001 => 25
    //0000000001001101 => 77
    //----------------
    //0000000000001001 => 9
    printf("Logical OR between %d and %d = %d\n",w1,w2,logicalOr(w1,w2));
    //0000000000011001 => 25
    //0000000001001101 => 77
    //----------------
    //0000000001011101 => 93
    printf("Exclusive OR between %d and %d = %d\n",w1,w2,exclusiveOr(w1,w2));
    //0000000000011001 => 25
    //0000000001001101 => 77
    //----------------
    //0000000001010100 => 84
    printf("Complement one of %d = %d\n",w1,complementOne(w1));
    //0000000000011001 => 25
    //----------------
    //1111111111100110 => -26
    printf("Complement two of %d = %d\n",w1,complementTwo(w1));
    //0000000000011001 => 25
    //----------------
    //1111111111100111 => -25
    
    /*Shifting*/
    //If we shift to the left or to the right by the amount that is
    //greater or equal to the number of bits in the size of the data item,
    //it leads to undefined result.
    //Same undefined behaviour when shifting by negative amount.
    int w3 = 3; // 0000 0000 0000 0000 0000 0000 0000 0011
    printf("Left shift of %d with index 1 is: %d\n", w3, leftShift(w3, 1));
    
    int w4 = 138; // 0000 0000 0000 0000 0000 0000 1000 1010
    printf("Left shift of %d with index 2 is: %d\n", w4, leftShift(w4, 2));
    
    unsigned int w5 = 4151832098; // 1111 0111 0111 0111 1110 1110 0010 0010
    printf("Right shift of %u with index 1 is: %u\n", w5, rightShift(w5, 1));

    /*Bitmasks*/
    //Example with AND operator:
    //MASK  : 00000011 -> 3
    //AND
    //FLAG  : 10010110 -> 150
    //EQUALS: 00000010 -> 2
    printf("Bitmask AND between flag = 150 and mask = 3: %d\n",bitmaskAND(150, 3));
    
    //Example with OR operator:
    //MASK  : 00000011 -> 3
    //AND
    //FLAG  : 10010110 -> 150
    //EQUALS: 10010111 -> 151
    printf("Bitmask OR between flag = 150 and mask = 3: %d\n",bitmaskOR(150, 3));
    
    //Clearing bits OFF using AND: "flags = flags &~(mask)"
    //Toggling bits using Exclusive OR: "flags = flags ^(mask)"
    //Checking the value of a bit: "if((flags & mask) == mask){do something...}"
    //To optimize memory, we can store multiples flags inside a integer and access
    //only the ones we want inside the int, that is 32 bits (4 bytes).
    //But it makes things more complex for setting the bits.
    
    /*Bitfields*/
    struct packed_struct
    {
        unsigned int :3;
        unsigned int f1:1;
        unsigned int f2:1;
        unsigned int f3:1;
        unsigned int type:8;
        unsigned int index:18;
    };
    struct packed_struct packed_data;
    packed_data.type = 255;
    packed_data.index = 262143;
    unsigned int i = packed_data.index/5 +1;
    printf("packed_data.type: %u\n",packed_data.type);
    printf("packed_data.index: %u\n",packed_data.index);
    printf("packed_data.index/5 +1: %u\n",i);
    
    
    
    return 0;
}
