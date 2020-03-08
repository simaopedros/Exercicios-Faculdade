#include <stdio.h>
#define TAM 100 
int main() {
 
    float num[TAM];
    int i;
    for(i = 0; i < TAM ; i++){
        scanf("%f", &num[i]);
    }

    for(i = 0; i < TAM; i++){
        if(num[i] <= 10)
            printf("A[%i] = %.1f\n", i, num[i]);
    }
 
    return 0;
}