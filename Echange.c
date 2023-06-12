#include <stdio.h>
void main()
{
    int x, y, z;
    printf("int1:"); scanf("%d",&x);
    printf("int2:"); scanf("%d",&y);
    z=x;
    x=y;
    y=z;
    printf("Apres echange int1=%d et int2=%d" ,x,y);
}
