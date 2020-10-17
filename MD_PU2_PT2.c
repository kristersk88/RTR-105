#include <stdio.h>

int main()
{
 char a,b,c,d;

 printf("Ievadiet decimālu skaitli a:\n");
scanf("%d",&a);

printf("Ievadiet decimālu skaitli b:\n");
scanf("%d",&b);

c = a << b;
d = a >> b;

printf("%d << %d = %d\n",a,b,c);
printf("%d >> %d = %d\n",a,b,d);

}