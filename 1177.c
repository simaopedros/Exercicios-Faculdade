#include <stdio.h>

int main(){
    int contador, entrada, cont2;
    contador = 0;
    scanf("%d", &entrada);
    
    while (contador < 1000){
        for(cont2 = 0; cont2 < entrada; cont2++){
            //value[contador] = cont2;            
            printf("N[%d] = %d\n",contador, cont2 );
            contador++;
            if(contador >= 1000){
                break;
            }
        }
    }  
    
}