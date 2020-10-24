#include <stdio.h>

int main()
{
   int a;
   int b;
   int c;
   int d[4];
   int q;
   printf("Lūdzu ievadiet trīs decimālus skaitļus\n");
    printf("Ievadiet pirmo skaitli\n");
    scanf("%d", &a);
    printf("Ievadiet otro skaitli\n");
    scanf("%d", &b);
    printf("Ievadiet trešo skaitli\n");
    scanf("%d", &c);
    
    
   printf("Izvēlaties skaitļu secību - augošu vai dilstošu\n");
   printf("Lai iegūtu augošu nospiediet 1, lai dilstošu 2:\n");

   scanf("%d", &q);
   
    if (a <= b && a <= c)
    {
        if (b <= c)
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
    else if (b <= a && b <= c)
    {
       
        if (a <= c)
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
        
    if (q == 1)
    {
        printf("Skaitļi augošā secībā: %d %d %d\n", d[1], d[2], d[3]);
    }
    else
    {
        printf("Skaitļi dilstošā secībā: %d %d %d\n", d[3], d[2], d[1]);
    }
  return (0);
}
