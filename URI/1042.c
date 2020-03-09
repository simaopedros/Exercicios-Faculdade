#include <stdio.h>

int main(){
    int array[3], arrayOrd[3], cont, numA, numB, i, j;

    
    for(cont = 0; cont < 3; cont++){
        scanf("%d", &array[cont]);
        arrayOrd[cont] = array[cont];
    }

    for(i = 1; i < 3; i ++){
        for(j = 0; j < 3-i; j++){
            if(arrayOrd[j] > arrayOrd[j+1]){
                numA = arrayOrd[j];
                arrayOrd[j] = arrayOrd[j+1];
                arrayOrd[j+1] = numA;
            }
        }
    }

    for(cont = 0; cont < 3; cont++){
        printf("%d\n", arrayOrd[cont]);
    }
    printf("\n");
    for(cont = 0; cont < 3; cont++){
        printf("%d\n", array[cont]);
    }
    

   
}