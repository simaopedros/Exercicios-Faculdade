#include <stdio.h>
 
int main() {
 
    char Nome[25];
    double SalarioFixo;
    double TotVendas;
    double SalFim;


    scanf("%s", Nome);
    scanf("%lf", &SalarioFixo);
    scanf("%lf", &TotVendas);

    SalFim = SalarioFixo + (TotVendas*0.15);

    printf("TOTAL = R$ %.2lf\n", (SalarioFixo + TotVendas*0.15));
 
    return 0;
}