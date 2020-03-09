#include <stdio.h>

int main(){
    int num, cont;

    scanf("%d", &num);

    for(cont = 0; cont < 10; cont ++){
        printf("N[%d] = %d\n", cont, num);
        num = num * 2;
    }
}