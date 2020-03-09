#include <stdio.h>

int main(){
    int menor, posicao, cont, numero, numeroComp;
    scanf("%d", &numero);
    for(cont = 0; cont < numero; cont ++){
        scanf("%d", &numeroComp);
        if (cont == 0){
            menor = numeroComp;
            posicao = cont;
        }else{
            if(numeroComp < menor){
                menor = numeroComp;
                posicao = cont;
            }
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
}

