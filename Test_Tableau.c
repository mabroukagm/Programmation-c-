#include<stdio.h>
int Test_Tableau(int N,int T[], int Val)
{int i=0;

for(i=0; i<N;i++)
if(T[i]==Val)
{return(1);}
return(0);
}
void main()
{
int j; int Nmax, Valeur;
printf("Donner la valeur a chercher"); scanf("%d", &Valeur);
printf("Donner la taille du tableau:"); scanf("%d", &Nmax);
int Table[Nmax];
for (j=0;j<Nmax;j++)
{printf("Table[%d]=",j);scanf("%d",&Table[j]);}
if (Test_Tableau( Nmax, Table, Valeur))
printf("%d existe ",Valeur);
else
printf("%d n existe pas",Valeur);
}
/*#include<stdbool.h>
bool Test_Tableau(int N,int T[], int Val)
{int i=0;

while(T[i]!=Val&& i<N)
{i++;}
if(T[i]==Val)
{return(true);}
void main()
{
int j; int Nmax, Valeur;
bool Test;
printf("Donner la valeur a chercher"); scanf("%d", &Valeur);
printf("Donner la taille du tableau:"); scanf("%d", &Nmax);
int Table[Nmax];
for (j=0;j<Nmax;j++)
{printf("Table[%d]=",j);scanf("%d",&Table[j]);}
Test =Test_Tableau( Nmax, Table, Valeur);
if (Test)
printf("%d existe ",Valeur);
else
printf("%d n existe pas",Valeur
}*/
