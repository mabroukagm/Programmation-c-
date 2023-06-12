#include <stdio.h>

/*void main()
{
    int x;
    printf("x="); scanf("%d",&x);
    if((x % 2)==0)
    {printf("%d est pair", x);}
    else{printf("%d est impair", x);}
}*/
void main()
{
    int x;
    printf("x="); scanf("%d",&x);
    if(x % 2)
    {printf("%d est impair", x);}
    else{printf("%d est pair", x);}
}

