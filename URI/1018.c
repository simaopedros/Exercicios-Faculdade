#include <stdio.h>

int main(){
    int valor, cem, cinquenta, vinte, dez, cinco, dois, um;
    valor = cem = cinquenta = vinte = dez = cinco = dois = um = 0;
    scanf("%d", &valor);

    while (valor > 0){
        if(valor >= 100){
            cem = valor/100;
            valor = valor - cem * 100;
        }else if(valor >= 50){
            cinquenta = valor/50;
            valor = valor - cinquenta * 50;
        }else if (valor >= 20){
            vinte = valor/20;
            valor = valor - vinte * 20;
        }else if (valor >= 10){
            dez = valor/10;
            valor = valor - dez * 10;
        }else if (valor >= 5){
            cinco = valor/5;
            valor = valor - cinco * 5;
        }else if (valor >= 2){
            dois = valor/2;
            valor = valor - dois * 2;
        }else{
            um = valor;
            valor = 0;
            break;
        }

        
        
    }
        valor = cem*100+cinquenta*50+vinte*20+dez*10+cinco*5+dois*2+um;
        printf("%d\n", valor);
        printf("%d nota(s) de R$ 100,00\n", cem);
        printf("%d nota(s) de R$ 50,00\n", cinquenta);
        printf("%d nota(s) de R$ 20,00\n", vinte);
        printf("%d nota(s) de R$ 10,00\n", dez);
        printf("%d nota(s) de R$ 5,00\n", cinco);
        printf("%d nota(s) de R$ 2,00\n", dois);
        printf("%d nota(s) de R$ 1,00\n", um);
}
    