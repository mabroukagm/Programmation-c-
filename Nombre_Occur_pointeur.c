#include<stdio.h>
#define TAILLE 5
void main()
{
int Ent,occu,i;
int Tab[TAILLE]={1,2,3,2,5};
int *p;
printf("Le nombre a chercher:"); scanf("%d",&Ent);
occu=0;
for (p=Tab;p<(Tab+TAILLE);p++)
{if(*p==Ent)
occu++;}
printf("%d apparait dans Tab %d fois",Ent,occu);

}
