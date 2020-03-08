#include <stdio.h>
int par[5], positionPar;
int impar[5], positionImpar;
int addPar(int numberAdd);
int addImpar(int numberAdd);

int main(){
    int number, cont;
    positionPar = positionImpar = 0;

    for(cont = 0; cont < 15; cont++){
        scanf("%d", &number);
        if(number % 2 == 0){
            addPar(number);
        }else{
            addImpar(number);
        }        
    }

    for(cont = 0; cont < positionImpar; cont++){
        printf("impar[%d] = %d\n", cont, impar[cont]);
    }
    for(cont = 0; cont < positionPar; cont++){
        printf("par[%d] = %d\n", cont, par[cont]);
    }

}

int addPar(int numberAdd){
    int cont;
    par[positionPar] = numberAdd;
    positionPar++;
    if (positionPar == 5){
        for(cont = 0; cont < 5; cont++){
            printf("par[%d] = %d\n", cont, par[cont]);
        }
        positionPar = 0;
    }
    
}

int addImpar(int numberAdd){
    int cont;
    impar[positionImpar] = numberAdd;
    positionImpar++;
    if (positionImpar == 5){
        for(cont = 0; cont < 5; cont++){
            printf("impar[%d] = %d\n", cont, impar[cont]);
        }
        positionImpar = 0;
    }
}