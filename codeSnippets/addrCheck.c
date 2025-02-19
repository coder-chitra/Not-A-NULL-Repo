#include<stdio.h>

int main() {
 int x = 10;
 int *pX = &x;
 printf("ptr = %p \n",pX);
 printf("x = %d\n",x);
 printf("%p\n",&x);
 return 0;
}