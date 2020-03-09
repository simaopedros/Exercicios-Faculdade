#include <stdio.h>

int main(){
    int linha, coluna, numero, controle;
    while (1){
        scanf("%d", &numero);
        
        if(numero == 0)break;

        for(linha = 1; linha <= numero; linha++){
            for(coluna = 1; coluna <=numero; coluna++){
                controle = linha;
                if(coluna < controle) 
                    controle = coluna;

                if(numero-linha+1 < controle) 
                    controle = numero-linha+1;

                if(numero-coluna+1<controle) 
                    controle = numero-coluna+1;
                    
                printf("%3d", controle);
                
                if(coluna < numero) 
                    printf(" ");
                else 
                    printf("\n");                
            }
        }
        printf("\n");
    }
    

}