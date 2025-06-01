#include <stdio.h>
#include <string.h>
int main(){
char cad[100];
int cont,i;
printf("DEME UNA CADENA: ");
scanf("%s",cad); //s es para una palabra completa
cont=strlen(cad);
for(i=0;i<cont;i++){
printf("\n %c",cad[i]); //c es para 1 caracter
}
return 0;
}
