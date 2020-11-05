#include<stdio.h>
int main()
{
    int skaitlis;
    int i=1;
    long long b=1;
    long long c=1;
    int intNum=1;
    char charNum=1;
    long long longNum=1;
    char izvele;
    printf("Ievadiet decimālu skaitli: ");
    scanf("%d",&skaitlis);
    printf("Izvēlieties datu tipu - char(c), int(i), long long(l): ");
    scanf(" %c", &izvele);
    while(i<=skaitlis)
    {
        b=b*i;
        i++;
    }
    i = 1;
    if(izvele == 'i')
    {
        while(i<=skaitlis)
        {
            intNum = intNum * i;
            c = c * i;
            i++;
            if (intNum != c){
                break;
            }
            }
            if((long long)intNum != b)
            {
                printf("Ar šo datu tipu nav iespējams aprēķināt jūsu ievadīto skaitli");
                
        } else
        {
            printf("Faktoriāls no skaitļa %d ir %d\n", skaitlis, intNum);
        }
    } else if (izvele == 'c')
    {
        while (i<=skaitlis)
        {
            charNum = charNum * i;
            c=c*i;
            i++;
            if (charNum != c)
            {
                break;
            }
        }
            if((long long)charNum != b)
            {
                printf("Ar šo datu tipu nav iespējams aprēķināt jūsu ievadīto skaitli");
            }
            else
            {
                printf("Faktoriāls no skaitļa %d ir %d\n", skaitlis, charNum);
            }
    }else if (izvele == 'l')
    {
        while (i<=skaitlis)
        {
            longNum = longNum * i;
            c=c*i;
            i++;
            if (longNum != c)
            {
                break;
            }
        }
            if(i>21)
            {
                printf("Ar šo datu tipu nav iespējams aprēķināt jūsu ievadīto skaitli");
            }
            else
            {
                printf("Faktoriāls no skaitļa %d ir %lld\n", skaitlis, longNum);
            }
    }
}
