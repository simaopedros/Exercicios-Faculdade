#include <stdio.h>

int verificaNumero(float numero);

int main(){
    float numero;
    
    scanf("%f", &numero);
    printf("%s\n",verificaNumero(numero) == 0?"Numero negativo":"Numero Positivo");
}

int verificaNumero(float numero){
    int retorno;
    retorno = numero>=0?1:0;
    return retorno;
}