#include<stdio.h>
int Matrix_Min_Max(int T[][10],int i, int M)
{int j;
int max=T[i][0];
for(j=0;j<M;j++)
{if(T[i][j]>max)
{max=T[i][j] ;}
return max;
}}
int main()
{ int i,j,L,max, C;
printf("Donner le nombre des lignes:"); scanf("%d", &L);
printf("Donner le nombre des colonnes:"); scanf("%d", &C);
int Matrice[10][20];
for (i=0;i<L;i++){
for (j=0;j<C;j++){
printf("Matrice[%d][%d]=",i,j);scanf("%d",&Matrice[i][j]);
}}
for (i=0;i<L;i++)
{max=Matrix_Min_Max(Matrice,i,C);
printf("le maximum de ligne %d est %d",i,max);}
return 0;
}
