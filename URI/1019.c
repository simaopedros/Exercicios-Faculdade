#include <stdio.h>

int main(){
    int tempo, hora, minuto, segundo, controle;
    tempo = hora = minuto = segundo = controle = 0;
    controle = 0;
    scanf("%d", &tempo);

    while (tempo > 0){
        controle++;
        if(controle < 60){
            segundo++;
            tempo--;
            if(segundo == 60){
                minuto++;
                segundo = 0;
            }
            if(minuto == 60){
                hora++;
                minuto = 0;
            }
        }
    }

    printf("%d:%d:%d\n", hora, minuto, segundo);
    
}