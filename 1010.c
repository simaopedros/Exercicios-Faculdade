#include <stdio.h>

int main(){
    int CodPec, QtdPec;
    float PrecPec, Prec;
    scanf("%i %i %f", &CodPec, &QtdPec, &PrecPec);
    Prec = QtdPec*PrecPec;
    scanf("%i %i %f", &CodPec, &QtdPec, &PrecPec);
    Prec = Prec + QtdPec*PrecPec;
    printf("VALOR A PAGAR: R$ %.2f\n", Prec);
    return 0;
}