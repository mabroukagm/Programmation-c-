#include <stdio.h>
 void main()
 {
int saisi, max, min;
printf("saisi="); scanf("%d",&saisi);
max=min=saisi;
while(saisi)
 {
if (saisi>=max)
    max=saisi;
else

if (min>=saisi)
min=saisi;

printf("saisi="); scanf("%d",&saisi);
}
printf("le max  est %d et le min est %d",max,min);
 }
