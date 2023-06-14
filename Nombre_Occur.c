#include<stdio.h>
#define TAILLE 5
void main()
{
int Ent,occu,i;
int Tab[TAILLE]={1,2,3,2,5};
printf("Le nombre a chercher:"); scanf("%d",&Ent);
occu=0;
for (i=0;i<TAILLE;i++)
{if(Tab[i]==Ent)
occu++;}
printf("%d apparait dans Tab %d fois",Ent,occu);

}
