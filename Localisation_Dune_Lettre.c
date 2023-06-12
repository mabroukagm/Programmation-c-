#include<stdio.h>

int main()
{
int i,pos_m,pos_s, compteur;
char c;
char Tab_Char[19]="Quel sinistre mot !";
pos_m=0;
for(i=0;i<19;i++)
{
if(Tab_Char[i]=='m')
{pos_m=i; printf("La position de m est %d\n", pos_m);}
}
pos_s=0;
while(Tab_Char[pos_s]!='s')
pos_s++;
 printf("La position de la la premiere lettre s est %d\n", pos_s);

Tab_Char[pos_m]='s';
Tab_Char[pos_s]='m';
puts(Tab_Char);
printf("saisir une lettre:");scanf("%c",&c);
compteur=0;
while((Tab_Char[compteur]!=c) && (Tab_Char[compteur]!='\0'))
compteur++;
    if(compteur<19)
   {printf("La position de %c est %d",c,compteur);}
else
{printf("'%c' n'existe pas",c);}
return(0);
}

