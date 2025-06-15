#include <stdio.h>
int Moda(int arr[], int n){
int mod=0, cont=0, maxcont=0;
int i,j;
for(i=0;i<n;i++){
    cont=0;
    for(j=0;j<n;j++){
        if(arr[j]==arr[i]){
            cont++;
        }
    }
if(cont>maxcont){
        mod=arr[i];
        maxcont=cont;
    }
}
return mod;
}
int main(){
int arr []={2,7,8,7,9,7,7,7,7,7,10,7,7,7,7,8,7,9,7,2,7,7,7,8,7,7,9,6,7,9,
7,7,9,6,7,8,7,8,9,6,8,8,7,9,9,7,8,9,6,7,8,7,8,8,10,9,9,7,8,9,7,8,7,9};
float prom,apro,repro;
int suma,i,mej,peo,rep=0,ap=0;
int n=sizeof(arr)/sizeof(arr[0]);
int moda=Moda(arr,n);
for(i=0;i<64;i++){
suma+= arr[i];
if(arr[i]>mej){
   mej=arr[i];
}else if(arr[i]<peo){
peo=arr[i];
}
if(arr[i]<6){
    rep++;
}else{
ap++;
}
}
apro=ap*100/64.0;
repro=rep*100/64.0;
prom=suma/64.0;
printf("El promedio del salon es: %f\n",prom);
printf("El porsentaje de aprobados: %.3f y de reprobados:%.3f\n",apro,repro);
printf("La mejor calificaion es: %d\n",mej);
printf("La peor calificacion es: %d\n",peo);
printf("La moda es:%d\n",moda);
return 0;
}
