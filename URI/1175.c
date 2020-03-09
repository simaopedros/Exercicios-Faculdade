#include <stdio.h>

int main(){
    int array[20], number1, number2, cont;

    for(cont = 0;cont < 20; cont ++){
        scanf("%d", &array[cont]);
    }

    for(cont = 0; cont < 10; cont ++){
        number1 = array[cont];
        number2 = array[19-cont];
        array[cont] = number2;
        array[19-cont] = number1;
    }

    for(cont = 0; cont < 20; cont++){
        printf("N[%d] = %d\n", cont, array[cont]);
    }

}