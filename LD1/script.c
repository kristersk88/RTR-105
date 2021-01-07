#include<stdio.h>
#include<math.h>
double bessj1 ( double x )
{
 long double a;
 double S;
 int k=0;
 a = pow(-1,k)*pow(x,2*k)/(1.)*(k+1.)*pow(2,2*k);
 S = a ;
 while (k<=1000)
 {
   k++;
   a = a * (-1) * x*x / (4*k*(k+1));
   S = S + a ;
 }
 printf("a1000 = %.2Le\n",a);
 return S ;
}

double pirmspedejais ( double x )
{
 long double a;
 double S;
 int k=0;
 a = pow(-1,k)*pow(x,2*k)/(1.)*(k+1.)*pow(2,2*k);
 S = a ;
 while (k<1000)
 {
   k++;
   a = a * (-1) * x*x / (4*k*(k+1));
   S = S + a ;
 }
 printf("a999 = %.2Le\n",a);
 return S ;
}

double anulle(double x)
{
double aa;
int k=0;
aa = pow(-1,k)*pow(x,2*k)/(1.)*(k+1.)*pow(2,2*k);
return aa;
}

int main () {
double x ,y, yy, ao, a999;
printf("Bessj1 aprēķināšana:\nIevadiet argumentu x: ");
scanf("%lf",&x);
y=j1(x);
printf("bessj1(%.2f)=%.2f\n",x,y);
printf("\n");

ao = x;
ao = anulle(x);
printf("a0 = %.2f\n",ao);
a999 = pirmspedejais(x);
yy = x/2*bessj1(x);
printf( "bessj1(%.2f ) caur formulu: %.2f \n" ,x , yy ) ;
printf("\n");
printf("\t\t\t\t\t\t1000\n");
        printf("\t\t\t\t      ______\n");
        printf("\t\t\t\t      \\           k    2*k\n");
        printf("\t\t\t\tx      \\       (-1) * x\n");
        printf("bessj1(%.2f) =  -  *    >   _____________________\n",x);
        printf("\t\t\t\t2      /                     2*k\n");
        printf("\t\t\t\t      /_____  k! * (k+1)! * 2\n");
        printf("\t\t\t\t        k=0\n");
	printf("\n");
	printf("                                  2\n");
	printf("                          (-1) * x\n");
	printf("Rekurences reizinātājs: _______________\n");
	printf("\n");
	printf("                          (4*k*(k+1))\n");
}

