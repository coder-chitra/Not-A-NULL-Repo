#include<stdio.h>

void callByValueSwap(int num1 , int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void callByReferenceSwap(int *num1 , int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
 int num1 = 10;
 int num2 = 20;

 callByReferenceSwap(&num1 , &num2); // call by reference

 printf("Numbers After Swapping : \n");
 printf("Number 1 = %d  \n", num1);
 printf("Number 2 = %d  \n", num2);

 return 0;
}