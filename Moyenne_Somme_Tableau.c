#include <stdio.h>
#include <stdlib.h>
int somme_Tableau(int T[], int Taille);
double moyenne_Tableau(int T[], int Taille);
int main ()
{
int Tableau[5]={10,2,8,300,4};

printf("La somme des elements de Tableau est %d\n",somme_Tableau(Tableau,5) );
printf("La moyenne des elements de Tableau est %f",moyenne_Tableau(Tableau,5) );
return 0;
}


int somme_Tableau(int T[], int Taille)
{int somme;
for(int i=0;i<Taille;i++)
{
 somme+=T[i];
}
return somme;
}
double moyenne_Tableau(int T[], int Taille)
{double moyenne;
double somme;
for(int i=0;i<Taille;i++)
{
 somme+=T[i];
}
moyenne = somme/(double)Taille;
return moyenne;
}
