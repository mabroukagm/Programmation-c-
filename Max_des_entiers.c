#include <stdio.h>
 void main()
 {
int x, y, z ,max;
printf("entier1="); scanf("%d",&x);
printf("entier2="); scanf("%d",&y);
printf("entier3="); scanf("%d",&z);
if (x>=y)
    max=x;
else
    max=y;
if (z>=max)
{max=z; }
    printf("le max de %d, %d,%d est %d",x, y, z, max);
 }
