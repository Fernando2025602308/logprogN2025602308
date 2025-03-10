#include <stdio.h>
int main()
{
    int numMuj,numHom;
    const float cover=500,desc=0.25;
    float total;
    printf("NUMERO DE MUJERES\n");
    scanf("%d",&numMuj);
    printf("NUMERO DE HOMBRES\n");
    scanf("%d",&numHom);
    total=numHom*cover+numMuj*cover-numMuj*cover*desc;
    printf("EL TOTAL ES: %f",total);
    return 0;


}
