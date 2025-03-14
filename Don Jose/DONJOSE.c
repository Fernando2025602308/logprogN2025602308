#include <stdio.h>
#include <math.h>
int main()
{
int l1,l2,l3,l4;
 const int l=12;
 float triangulo,romboide,pagiva,L1,L2,AT;
 const float pre=9256.00,iva=0.16;
 printf("INGRESE LA BASE DEL TRIANGULO\n");
 scanf("%d",&l1);
 printf("INGRESE EL LADO DEL TRIANGULO\n");
 scanf("%d",&l2);
 L1=pow(l1,2);
 L2=pow(l2,2);
triangulo=(sqrt(L2-L1)*l1)/2.0;
printf("INGRESE LA BASE DEL ROMBOIDE\n");
 scanf("%d",&l3);
 printf("INGRESE EL LADO DEL ROMBOIDE\n");
 scanf("%d",&l4);
 romboide=((sqrt(L2-L1))/2.0)*l3;
 AT=triangulo+romboide;
 printf("EL AT ES:%f\n",AT);
 pagiva=((AT*pre)*iva)+(AT*pre);
 printf("EL TOTAL CON IVA ES:%f\n",pagiva);
 return 0;


}
