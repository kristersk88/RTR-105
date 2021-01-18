#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define N 100

int main()
{
   double xx[N],y[N],y1[N],y2[N], y_prim_a[N], y_prim_f[N],y_primprim_a[N], y_primprim_f[N];   
   double a, b, x, delta_x;
   int c=0;
   double *yy;
  printf("Cien. lietotāj! Ievadied a vērtību\n");
  scanf("%lf",&a);
  printf("Ievadied b vērtību\n");
  scanf("%lf",&b);
  printf("Ievadied delta_x vērtību\n");
  scanf("%lf",&delta_x);
  x=a;
     for(int i=0;i<N;i++)
     {
       c++;
       xx[i]=x;
       y[i]= j1(x);
       y1[i]=j0(x);
       x += delta_x;
     }
  for(int i=0;i<c-1;i++) 
   {
     y_prim_a[i]=(y1[i]-y[i]/xx[i]);
     y_prim_f[i]=(y[i+1]-y[i])/delta_x;
     y_primprim_a[i]=-(xx[i]*y1[i]+(-2+xx[i]*xx[i])*y[i])/xx[i]*xx[i];
     y_primprim_f[i]= (y[i+1]-y[i]/delta_x-y_prim_f[i])/delta_x;
   }
      printf("\tx\t\tj1(x)\t\tj1\'(x)(A)\t\tj1 '(x)(F)\t\tj1\''(x)(A)\t\tj1\''(x)(F)\n");
      for(int i=0;i<c;i++)
   {
     printf("%.2lf\t\t%.2lf\t\t%.2lf\t\t\t\t%.2lf\t\t\t%.2lf\t\t\t%.2lf\n",xx[i], y[i], y_prim_a[i],y_prim_f[i], y_primprim_a[i], y_primprim_f[i]);
      x += delta_x;
   }
  return 0;
} 
