#include<stdio.h>
#include<string.h>
int palindromes(char CE[],int T)
{
int i;
char CS[100];
  T=strlen(CE);
for(i=0;i<T;i++)
{CS[i]=CE[T-i-1];}
if (strcmp(CS,CE)==0)
printf("la phrase %s est palindromes",CE);
else
    printf("la phrase %s n est pas palindromes",CE);
}

void main()
{
char chaine[100];
 printf("Donner la chaine:"); scanf("%s", chaine);
 int T=strlen(chaine);
palindromes( chaine,T);

}
