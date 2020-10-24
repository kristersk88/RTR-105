#include <stdio.h>

int main()
{
   char a;
   char b;
   char c;
   char d[4];
   char q;
   
   printf("Lūdzu ievadiet trīs burtus:\n");
    scanf("%c %c %c", &a, &b, &c);
   
    if (a < b && a < c)
    {
        if (b < c)
        {
            d[1] = a;
            d[2] = b;
            d[3] = c;
        }
        else
        {
            d[1] = a;
            d[2] = c;
            d[3] = b;
        }
    }
    else if (b < a && b < c)
    {
        if (a < c)
        {
            d[1] = b;
            d[2] = a;
            d[3] = c;
        }
        else
        {
            d[1] = b;
            d[2] = c;
            d[3] = a;
        }
    }
    else if (c <= a && c <= b)
    {
        if (a <= b)
        {
            d[1] = c;
            d[2] = a;
            d[3] = b;
        }
        else
        {
            d[1] = c;
            d[2] = b;
            d[3] = a;
        }
    }
    
   
   printf("Izvēlaties burtu secību - augošu vai dilstošu\n");
   printf("Lai iegūtu augošu nospiediet 'a', lai dilstošu 'd':\n");

   scanf("%s", &q);
    if (q == 'a')
    {
        
        printf("Burti augošā secībā: %c %c %c\n", d[1], d[2], d[3]);
    }
    else
    {
        printf("Burti dilstošā secībā: %c %c %c\n", d[3], d[2], d[1]);
    }
  return (0);
}