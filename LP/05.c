#include <stdio.h>

float retornaMenor(float numero1, float numero2);

int main(){
    float menor, numero1, numero2;
    scanf("%f %f", &numero1, &numero2);

    menor = retornaMenor(numero1, numero2);
    printf("O menor é: %.2f", menor);

}

float retornaMenor(float numero1, float numero2){
    if(numero1 <= numero2){
        return numero1;
    }else{
        return numero2;
    }
    
}


