#include <stdio.h>
int main()
{
    int piz,veg,car;
    printf ("INDIQUE LA PIZZA DESEADA\n");
    printf ("PIZZA VEGETARIANA 1\n");
    printf ("PIZZA TRADICIONAL 2\n");
    scanf("%d",&piz);
    if (piz==1){
    printf ("INDIQUE EL INGREDIENTE\n");
    printf ("PIMIENTO 1\n");
    printf ("TOFU 2\n");
    scanf("%d",&veg);
    if(veg==1){
    printf ("SU PIZZA ES VEGETARIANA Y LOS INGREDIENTES SON MOZZARELLA, TOAMTE Y PIMIENTO");
    }
    else {
    printf ("SU PIZZA ES VEGETARIANA Y LOS INGREDIENTES SON MOZZARELLA, TOAMTE Y TOFU");
    }
    }
    if (piz==2){
    printf ("INDIQUE EL INGREDIENTE\n");
    printf ("PEPERONI 1\n");
    printf ("JAMON 2\n");
    printf ("SALOM 3\n");
    scanf("%d",&car);
    if (car==1){
    printf ("SU PIZZA ES TRADICIONAL Y LOS INGREDIENTES SON MOZZARELLA, TOMATE Y PEPERONI");
    }
    else if (car==2){
    printf ("SU PIZZA ES TRADICIONAL Y LOS INGREDIENTES SON MOZZARELLA, TOMATE Y JAMON");
    }
    else{
    printf ("SU PIZZA ES TRADICIONAL Y LOS INGREDIENTES SON MOZZARELLA, TOMATE Y SALMON");
    }
    }
   return 0;
}
