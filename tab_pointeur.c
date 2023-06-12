#include<stdio.h>
const int N=10;
int t[10]={1,0,2,0,3,0,4,0,5,0};
void main()
{
int *compteur= NULL;
int *pointeur_Debut= NULL;
int *pointeur_Max= NULL;
pointeur_Debut=t;
pointeur_Max=&t[N-1];
for(compteur=pointeur_Debut; compteur<=pointeur_Max; compteur++)
   if(*compteur==0)
    printf("l'indexe %d est nulle\n", compteur-pointeur_Debut);
}
