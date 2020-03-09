#include <stdio.h>

int main(){
    int maior, number, cont;

    for (cont = 0; cont < 3; cont++){
        scanf("%d", &number) ;
        if(cont == 0){
            maior =number;
        }else if(number > maior){
                maior = number;
            }  
        
        
    }
    printf("%d eh o maior\n", maior);

}