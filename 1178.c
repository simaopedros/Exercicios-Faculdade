#include <stdio.h>

int main(){
    double arrayNumber[100];
    int cont;
    scanf("%lf", &arrayNumber[0]);

    for(cont = 1; cont < 100; cont++){
        arrayNumber[cont] = arrayNumber[cont-1]/2;
    }

    for(cont = 0; cont < 100; cont++){
        printf("N[%d] = %.4lf\n",cont, arrayNumber[cont]);
    }
}