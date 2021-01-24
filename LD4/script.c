#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float a, b, precizitate, h, integr1=0, integr2;
int k,n=2;

float simpson(float a,float b, float precizitate)
{
  int n=2,m=1;
  float h, int1=0, int2=(b-a)*(j1(a)+j1(b))/2;
  while(fabs(int2-int1)>precizitate)
  {
    m*=2;
    n=2*m;
    h=(b-a)/n;
    int1=int2;
    int2=0.;
    for(int k=1;k<=m;k++)
    int2+=2.*(2*j1(a+(2*k-1)*h)+j1(a+2*k*h));
    int2+=j1(a)+j1(b)+4*j1(b-h);
    int2*=h/3;
  }
  return int2;
}


float trapece(float a,float b, float precizitate)
{
  int n=2;
  float h, int1=0, int2=(b-a)*(j1(a)+j1(b))/2.;
  while(fabs(int2-int1)>precizitate)
  {
    n*=2;
    h=(b-a)/n;
    int1=int2;
    int2=0.;
    for(int k=1;k<n;k++)
    int2+=j1(a+(k)*h);
    int2+=(j1(b)+j1(a))/2;
    int2*=h;
  }
  return int2;
}

int main()
{
  printf("Cien. lietotāj! Ievadied a vērtību\n");
  scanf("%f",&a);
  printf("Ievadiet b vērtību\n");
  scanf("%f",&b);
  printf("Ievadiet precizitātes vērtību\n");
  scanf("%f",&precizitate);
  
  integr1=(b-a)*(j1(((a+b)/n)/2));
  while(fabs(integr2-integr1)>precizitate)
  {
    n*=2;
    h=(b-a)/n;
    integr1=integr2;
    integr2=0;
    for(k=0;k<n;k++)
    integr2+=h*j1(a+(k+0.5)*h);
  }
  printf("Integrāļa vērtība ar taisnstūra metodi: %.3f\n",integr2);
  printf("Integrāļa vērtība ar trapeces metodi: %.3f\n",trapece(a,b,precizitate));
  printf("Integrāļa vērtība ar Simpsona metodi: %.3f\n",simpson(a,b,precizitate));
  return 0;
} 
