#include<stdio.h>  
int main()    
{    
 int i,fact=1,number,intNum=1;
 long long b=1,longNum=1;
 char izvele, charNum=1;
 printf("Izvēlieties datu tipu - char(c), int(i), long long(l):");
 scanf("%c",&izvele);
 printf("Ievadiet decimālu skaitli:");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++)
    {    
      fact=fact*i;    
    }    
  if(izvele == 'i')
  {
    for(i=1;i<=number;i++)
    {
      intNum=intNum*i;
      b=b*i;
      if(intNum != b)
      {
       break;
      }
    }
    if((long long)intNum != b)
    {
      printf("Ar šo datu tipu nevar aprēķināt faktoriālu");
    }
    else
    {
      printf("Faktoriāls no %d is: %d\n",number,intNum);
    }
  }
  else if (izvele == 'c')
  {
    for(i=1;i<=number;i++)
    {
      charNum=charNum*i;
      b=b*i;
      if(charNum != b)
      {
        break;
      }
    }
    if((long long)charNum != b)
    {
      printf("Ar šo datu tipu nevar aprēķināt faktoriālu");
    }
    else 
    {
      printf("Faktoriāls no %d is: %d\n",number,charNum);
    }
  }
  else if (izvele == 'l')
  {
    for(i=1;i<=number;i++)
    {
      longNum=longNum*i;
      b=b*i;
      if (longNum != b)
      {
        break;
      }
    }
    if(i>21)
    {
      printf("Ar šo datu tipu nevar aprēķināt faktoriālu");
    }
    else
    {
       printf("Faktoriāls no %d is: %lld\n",number,longNum);
    }
  }
return 0;  
}   