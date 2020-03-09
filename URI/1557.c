#include <stdio.h>

int criaMatriz(int numero);
int contaCasas(int numero);

int main(){
    int numero, controle;
    controle = 1;
    while (1){
        scanf("%d", &numero);        
        if(numero == 0){
            break;
        }
        criaMatriz(numero);
    }
    
}

int contaCasas(int numero){
    int qtdCasas;
    qtdCasas = 1;
    while (numero >= 10){
        numero = numero/10;
        qtdCasas++;
    }
    return qtdCasas;
}

int criaMatriz(int numero){
    int matriz[numero*numero], linha, coluna, valor, numMax, position, inicialValor;

    position = 0;

    //!Cria matriz
    inicialValor = 1;   

    for(linha = 0; linha < numero; linha++){       
        valor = inicialValor; 
        for(coluna = 0; coluna < numero; coluna++){
            matriz[position] = valor;
            position++; 
            if(linha == numero-1 && coluna == numero-1){
                numMax = valor;
            }
            valor = valor * 2;
        }
        inicialValor = inicialValor * 2;
    }
    //!Exibe Matriz
    position = 0;
    for(linha = 0; linha < numero; linha++){
        for(coluna = 0; coluna < numero; coluna++){
            printf("%*d", coluna==0?
                                contaCasas(numMax):
                                contaCasas(numMax)+1, 
                            matriz[position]);
            position++;
            
        }
        printf("\n");
    }    
    printf("\n");
    return 0;

}
