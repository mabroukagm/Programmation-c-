#include<stdio.h>

void main()
{int a, b;
printf("a="); scanf("%d",&a);
printf("b="); scanf("%d",&b);
while(a>0 && b>0)
{
 if (a>=b)
    printf("le diviseur de %d par %d =%d et le reste = %d",a,b,a/b,(a/b)-b);
    else
    printf("le diviseur de %d par %d =%d et le reste = %d",b,a,b/a,(b/a)-a);
}
}
