#include <stdio.h>

void verificaNumero(float numero);

int main(){
    float numero;

    scanf("%f", &numero);
    verificaNumero(numero);
}

void verificaNumero(float numero)
{
    if (numero > 0)
    {
        printf("Positivo\n");
    }
    else if (numero < 0)
    {
        printf("Negativo\n");
    }
}