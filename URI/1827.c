#include <stdio.h>

int main(){
    int numero, linha, coluna;
    while (scanf("%d", &numero)!=EOF){
       
        for(linha = 0; linha < numero; linha++){
            for(coluna = 0; coluna < numero; coluna++){
                if(linha == (numero)/2 && coluna == (numero)/2){
                    printf("4");
                }else if((linha >= numero/3 && linha < numero - numero/3) && (coluna >= numero/3 && coluna < numero - numero/3)){
                    printf("1");
                }else if(linha == coluna ){
                    printf("2");
                }else if(coluna == numero-linha-1){
                    printf("3");
                }else{
                    printf("0");
                }
            }
            printf("\n");
        }
        printf("\n");
        
    }
    
}