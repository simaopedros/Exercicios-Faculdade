#include <stdio.h>
#include <math.h>

int verificaNumPosNeg(float delta);
float calculaDelta(float a, float b, float c);
float calculaRaiz(float delta, float a, float b, int raiz);

int main(){
    float a, b, c, delta, X1, X2;
    int cont;
    scanf("%f %f %f", &a, &b, &c);
    if(a != 0){

        delta = calculaDelta(a, b, c);
        if(delta < 0){
            printf("Nao Existe Raiz");
        }else if(delta >= 0){
            X1 = calculaRaiz(delta, a, b, 0);
            X2 = calculaRaiz(delta, a, b, 1);
            printf("\nDelta = %.2f \nX1 = %.2f \nX2 = %.2f",delta , X1, X2);  
        }else{
            
        }
        
        

    }else{
        printf("O Valor de a não pode ser '0' ");
    }

    return 0;
    
}

int verificaNumPosNeg(float delta){
    int tipo;
    if(delta >= 0){
        return 1;
    }else {
        return 0;
    }
    
}

float calculaDelta(float a, float b, float c){
    float delta;
    delta = pow(b, 2) - (4 * a * c);
    printf("%f", delta);
    return delta;
}

float calculaRaiz(float delta, float a, float b, int raiz){
    float retornoRaiz;

    switch (raiz){
    case 0:
        retornoRaiz = (-b + sqrt(delta))/(2*a);
        printf("%f\n", retornoRaiz);
        break;
    case 1:
        retornoRaiz = (-b-sqrt(delta))/(2*a);
        printf("%f\n", retornoRaiz);
        break;
    default:
        break;
    }

    return retornoRaiz;   
    
}

