#include <stdio.h>
 
int main(){
    float combustivel, conMedio;
    int distancia;
    scanf("%d%f", &distancia, &combustivel);

    conMedio = distancia/combustivel;
    printf("%.3f km/l\n", conMedio);
}