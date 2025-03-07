#include <stdio.h>
#include <math.h>

int main()
{
    int x=7;
    float a,b,c,d,r,l,e,f,g,h,i;
    l=x*3;
    r=(3*x)/2.0;//radio
    a=x*(3*x); //rectangulo
    b=(x*(3*x))/2.0;//triangulo
    c=(1.0/2.0)*3.1416*pow(r,2);//medio circulo
    d=(a*2)+(b*2)+c;//AT
    printf("EL VALOR DE AT:%f\n",d);
    h=pow(x,2)+pow(l,2);
    i=sqrt(h);//hipotenusa
    e=(4*x)+l+(i*2)+(3.1416*r);//PT
    printf("EL VALOR DE PT:%f",e);

}
