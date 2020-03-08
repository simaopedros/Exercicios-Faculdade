#include <stdio.h>

int main(){
    int dias, ano, mes, dia;
    scanf("%d", &dias);

    ano = dias/365;   
    dias = dias - ano*365;   
    mes = dias/30;   
    dias = dias - mes*30;    
    dia = dias;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
}