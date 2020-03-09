#include <stdio.h>
 
int main() {
 
    float NumFunc, NumHoras, ValHoras, SalFin;
    scanf("%f %f %f", &NumFunc, &NumHoras, &ValHoras);
    SalFin = NumHoras * ValHoras;
    printf("NUMBER = %.0f\nSALARY = U$ %.2f\n", NumFunc, SalFin);
 
    return 0;
}