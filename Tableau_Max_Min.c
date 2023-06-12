#include<stdio.h>

void main()
{
int N,i,Min_tab, Max_tab;
int tab[10];
for(i=0;i<=9;i++)
{printf("N="); scanf("%d",&N);
tab[i]=N;

}

Max_tab=tab[0]=Min_tab;
for(i=1;i<=9;i++)
{
 if(tab[i]>=Max_tab)
 Max_tab=tab[i];
 else
if(tab[i]<=Min_tab)
    Min_tab=tab[i];
}
for(i=0;i<=9;i++)
{printf("tab[%d]=",tab[i]);}
printf("le Maximum de tab = %d\n",Max_tab);
printf("le Minimum de tab = %d\n",Min_tab);
}

