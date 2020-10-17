// Operācijas:
// operācijai ir rezultāts, operācijas rezultātam vienmēr kaut kāds datu tips
// operācijas rezultāta datu tips _parasti_ ir "plašākais" datu tips kas piedalās operācijā
// +,-,*,/,%
// a + b

#include <stdio.h>
#include <time.h>

int main()
{
    char a = 5;
    char b = 10;
    char c = a + b;
// +
    printf("a+b=%d\n",a+b);
    printf("%d + %d = %d\n",a,b,c);
// /
    char d = a / b; // char / char -> char -> char
    printf("%d / %d = %d\n",a,b,d); // gaidām 5 / 10 = 0.5, nē nav 0.5
    float dd = a / b; // char / char -> char -> float
    printf("%d / %d = %d\n",a,b,dd); // gaidām 5 / 10 = 0.5, nē nav 0.5
    printf("%d / %d = %f\n",a,b,dd); // gaidām 5 / 10 = 0.5, nē nav 0.5
    float aa = 5;
    dd = aa / b; // float / char -> float -> float
    printf("%f / %d = %.1f\n",aa,b,dd); // gaidām 5 / 10 = 0.5
    d = aa / b; // float / char -> float -> char
    dd = d;
    printf("%f / %d = %f\n",aa,b,dd);
    printf("(float)%d / %d = %f\n",a,b, (float)a/ b );
    printf("(float)a / b - rezultāta izmērs baitos  - %d\n", sizeof((float)a/ b));

    printf("1. * %d / %d = %f\n",a,b, 1. * a / b );
    printf("1. * a / b - rezultāta izmērs baitos  - %d\n", sizeof(1. * a / b));
    // 1 - vesela tipa konstante (int)
    // 1. - reālā datu tipa konstante (double)
    // (char)
    // (float)1

// %
    char e = a % b;
    //printf("%d \% %d = %d\n",a,b,e);
    printf("%d %c %d = %d\n",a,37,b,e);
    printf("%d %c %d = %d\n",a,0x25,b,e);
    printf("%d %c %d = %d\n",a,'%',b,e);
    printf("%d %c %d = %d\n",999,'%',990,999%990);// 9
    printf("%d %c %d = %d\n",999,'%',1990,999%1990);// 999

return 0;
}
