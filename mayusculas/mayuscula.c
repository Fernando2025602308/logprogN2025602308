#include <stdio.h>
#include <string.h>
int main(){
char cad[65536];
int tam,i;
printf("dame una cadena: ");
scanf("%s",&cad);
tam=strlen(cad);
for(i=0;i<tam;i++){
cad[i]=cad[i]-' ';
}
printf("nueva cadena: %s",cad);
return 0;
}
