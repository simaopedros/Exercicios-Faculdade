#include <stdio.h>

int dado();
int main(){
    int valor;

    valor = dado();
}

int dado(){
    int valor;
    valor = srand()%7;
    printf("%d", valor);
}