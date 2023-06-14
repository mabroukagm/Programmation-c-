#include<stdio.h>
void main()
{
int N;
int M;
int *PA, *PB;
printf("N=");scanf("%d",&N);
printf("M=");scanf("%d",&M);
int A[N], B[M];
for(PA=A;PA<A+N;PA++)
{printf("A[%d]=", PA-A);scanf("%d",PA); }
for(PB=B;PB<B+M;PB++)
{printf("B[%d]=", PB-B);scanf("%d",PB); }
for(PB=B;PB<B+M;PB++)
{*PA=*PB;
PA++;}
for(PA=A;PA<A+N+M;PA++)
{printf("A[%d]=%d\n", PA-A,*PA); }
}
