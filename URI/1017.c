#include <stdio.h>

int main(){
    int tempo, velocidade;
    float qtdLitros;

    scanf("%d %d", &tempo, &velocidade);
    qtdLitros = (tempo*velocidade)/12.0;
    printf("%.3f\n", qtdLitros);
}