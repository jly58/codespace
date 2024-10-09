#include <stdio.h>
#define SIZE 100
int main() {
    int myArray[SIZE]; // declare type and size. int is 4 bytes.
    int myArrayTwo[3] = { 1, 2, 3 }; // another way to declare array that's better
    myArray[0] = 23;
    myArray[1] = 29;
    myArray[2] = 33;
    myArray[3] = 53;
    myArray[4] = 65;
    int myArrayThree[4]; // one size bigger than array two.
    int realSize = 0;

    for (int i=0; i<5; i++) {
        printf("Array[%d]=%d\n", i, myArray[i]);
    }

    for (int i=0; i<3; i++) {
        printf("myArrayTwo[%d]=%d\n", i, myArrayTwo[i]);
    }

    myArrayTwo[2] = 5;

    for (int i=0; i<3; i++) {
        printf("after: myArrayTwo[%d]=%d\n", i, myArrayTwo[i]);
    }
    
    // copy every element from array 2 to array 3
    for (int i=0; i<3; i++) {
        myArrayThree[i] = myArrayTwo[i];
        realSize++;
    }
    myArrayThree[3] = 69;
     for (int i=0; i<realSize; i++) {
        printf("myArrayThree[%d]=%d\n", i, myArrayThree[i]);
    }
    return 0;

}

