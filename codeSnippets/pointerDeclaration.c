#include<stdio.h>

int main() {

    int x = 10; // integer variable x has assigned a value 10
    int *pX = &x; // integer pointer pX pointing to addrees of varibale x 

    // verifying if both are pointing to same address ?

    printf("Address of X = %p\n", &x);  // printing address of X
    printf("Value of Pointer pX = %p\n", pX); // printing value at pX
    
    return 0;
}