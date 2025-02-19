#include<stdio.h>
#include<string.h>

struct Person
{
    char name[65];
    int age;
}; 

int main()
{
    struct Person *p;
    strcpy(p->name,"xyz");
    p->age = 20;

    printf("Name = %s\n",p->name);
    printf("Age = %d\n",p->age);
    return 0;
}