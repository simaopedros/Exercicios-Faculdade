#include <stdio.h>

int main(){
    int linha, coluna, numero, controle, valor;
    while (1){

        scanf("%d", &numero);        

        if(numero == 0)break;

        controle = 1;
        

        for(linha = 1; linha <= numero; linha++){
            valor = linha;
            controle = linha==1?1:0;
            for(coluna = 1; coluna <=numero; coluna++){
                printf("%3d", valor);
                if(controle == 1)
                    valor++;
                if(controle == 0)
                    valor--;  

                if(valor == numero){
                    controle = 0;
                }
                if(valor == 1){
                    controle = 1;
                }
                if(coluna == numero)
                    printf("\n");
                else printf(" ");
            }
            
        }
        printf("\n");
    }
    

}