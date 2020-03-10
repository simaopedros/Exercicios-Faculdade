#include <stdio.h>

int retornaMenor(float num1, float num2, float num3);
int main(){
    float num[3];
    int maior;
    scanf("%f %f %f", &num[0], &num[1], &num[2]);
    maior = retornaMenor(num[0], num[1], num[2]);

    printf("o maior valor e: %.2f", num[maior]);
}

int retornaMenor(float num1, float num2, float num3){
    int maior;
    if(num1 <= num2 && num1 <= num3){
        maior = 0;
    }else if(num2 <= num1 && num2 <= num3){
        maior = 1;
    }else if(num3 <= num1 && num3 <= num2){
        maior = 2;
    }

    return maior;
}

