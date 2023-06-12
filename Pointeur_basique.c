#include<stdio.h>
#include<stdlib.h>
void main()
{

    int i=rand();
    int *p;
    p=&i;
    printf("la valeur de i = %d\n",*p);
    *p=rand();
    printf("la nouvelle valeur de i = %d",i);
}
