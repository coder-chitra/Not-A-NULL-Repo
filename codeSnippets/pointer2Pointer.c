#include<stdio.h>

int main() 
{
    int x = 10;
    int *pX = &x;
    int **ppX = &pX;

    printf("\n *PX = %d\n",*pX);
    printf("\n *PPX = %d\n",**ppX);
    
    return 0;
}