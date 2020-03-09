#include <stdio.h>

float retornaMaior(float numero1, float numero2);

int main(){
    float maior, numero1, numero2;
    scanf("%f %f", &numero1, &numero2);

    maior = retornaMaior(numero1, numero2);
    printf("O Maior é: %.2f", maior);

}

float retornaMaior(float numero1, float numero2){
    if(numero1 >= numero2){
        return numero1;
    }else{
        return numero2;
    }
    
}


