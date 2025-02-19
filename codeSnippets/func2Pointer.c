#include<stdio.h>

void printHello(){
 printf("Hello World\n");
}

int main() {

    void (*funPtr)() = printHello;
    funPtr();
    return 0;
}