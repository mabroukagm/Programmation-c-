#include<stdio.h>


int main()
{
int  i=0;
char Nom[30];
printf("Quel est votre nom ?\n");
printf("Nom:"); scanf("%s",Nom);

while(Nom[i]!='\0')
{
   i++;
}
printf("Le nombre des caracteres =%d",i);
return(0);
}
