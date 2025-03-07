#include <stdio.h>
#include <math.h>

int main()
{
  int x;
  x=2; //L
  float a,b,c,d,e,f,g,h,i,j,k;
  a=(3.0/2.0)*x; //3/2 L
  b=(a*x)/2.0; //1 AREA
  c=(x*x)/2.0; //2 y 4 AREA
  d=(x*x);//3 AREA
  e=((1.0/4.0)*x)*(2*x);//5 AREA
  f=b+(c*c)+d+e;
  printf("EL AT ES: %f\n",f);
  g=pow(a,2)+pow(x,2);
  h=sqrt(g);//HIPO 1
  j=pow(x,2)+pow(x,2);
  k=sqrt(j);//HIPO 2 Y 4
  i=h+a+(2*k)+(3*x)+(2*((1.0/4.0)*x));
   printf("EL PT ES: %f\n",i);
}
