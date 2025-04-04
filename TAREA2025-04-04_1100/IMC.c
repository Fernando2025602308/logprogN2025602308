#include <stdio.h>

int main()
{
    float peso,altura,imc;
    printf("INGRESE SU ALTURA EN M\n");
    scanf("%f",&altura);
    printf("INGRES SU PESO EN KG\n");
    scanf("%f",&peso);
    imc=peso/(altura*altura);
    if (imc>=40){
        printf("TIENE OBESIDAD CLASE 3");
    }
    else{ if (imc>=35 && imc <=39.9){
        printf("TIENE OBESIDAD CLASE 2");
    }
    else{ if(imc>=30 && imc<=34.9){
        printf("TIENE OBESIDAD CLASE 1");
    }
    else{ if(imc>=25 && imc <=29.9){
        printf("TIENE SOBREPESO");
        }
    else { if(imc>=18.5 && imc <=24.9){
        printf("TIENE UN PESO NORMAL");
        }
    else { if(imc<=18){
        printf("TIENE UN BAJO PESO");
        }
        }
        }
        }
    }
    }
    return  0;
}
