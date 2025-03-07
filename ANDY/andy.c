#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    a=7; //L
    float b=1.0/5.0*a; //1/5 L
    float c=3.0/5.0*a; //3/5 L
    float d=1.0/2.0*a; //radio
    float e=(b*c)*2; //brazos correcto
    float f=(b*b)*2; //piernas correcto
    float g=((1.0/2.0)*3.1416)*pow(d,2); //cabeza correcto
    float h=a*a; //torso correcto
    float i=e+f+g+h;
    printf("EL AT ES:%f\n",i);
    float p=(b*17)+(c*2)+(3.141*d);
    printf("EL PT ES:%f",p);


}
