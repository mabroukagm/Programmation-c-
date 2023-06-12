#include<stdio.h>
void Inverse_Tab(int N,int TE[N])
{
int i;
int TS[N];
for(i=0;i<N;i++)
{TS[i]=TE[N-i-1];}
for(i=0;i<N;i++)
{TE[i]=TS[i];}
}
void main()
{
int j; int Nmax=10;
int Table[10]={0,1,2,3,4,5,6,7,8,9};
printf("Avant Inversion Table=");
for (j=0;j<Nmax;j++)
{printf("%3d",Table[j]);}
Inverse_Tab(Nmax,Table);
printf("\n Apres Inversion Table=");
for (j=0;j<Nmax;j++)
{printf("%3d",Table[j]);}
}

