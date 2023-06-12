#include<stdio.h>

void main()
{int saisi;
printf("saisi=");scanf("%d",&saisi);
for(int i=2; i<=saisi; i++)
{
    if (saisi%i==0)
        printf("%d est un diviseur\n", i);
}
}
/*void main()
{int saisi,i=2;
printf("saisi=");scanf("%d",&saisi);
do
{
    if (saisi%i==0)
       {printf("%d est un diviseur\n", i);
       }
        i++;
}
while(i<=saisi);
}*/

