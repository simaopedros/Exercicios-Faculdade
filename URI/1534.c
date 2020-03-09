#include <stdio.h>

int main(){
    int linha, coluna, numero, controle, valor;

    while (scanf("%d", &numero) != EOF){
        controle = numero%2;
        valor = numero;
        for(linha = 0; linha < numero; linha++){
            for(coluna = 0; coluna < numero; coluna++){
                if(coluna == numero - linha-1){
                    printf("2");
                 }else{
                     if(linha == coluna){
                         printf("1");
                     }else{
                         printf("3");
                     }
                     
                     
                 }
                 
            }
        printf("\n");

      }
    

    }
}
