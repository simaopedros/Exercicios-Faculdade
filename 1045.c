#include <stdio.h>
 
int main() {
 
double A, B, C, N1, N2;
    int i = 0;

    scanf("%lf %lf %lf", &A, &B, &C);
    if(A > 0 && B > 0 && C > 0){
    if(A < B){
        N1 = A;
        N2 = B;
        A = N2;
        B = N1;
    }
    if(A < C){
        N1 = A;
        N2 = C;
        A = N2;
        C = N1;
    }
    if(B < C){
        N1 = B;
        N2 = C;
        B = N2;
        C = N1;
    }

    if(A >= B + C){
        printf("NAO FORMA TRIANGULO\n");
    }else
    {
        if(A*A == (B*B) + (C*C))
            printf("TRIANGULO RETANGULO\n");
        if(A*A > B*B + C*C)
            printf("TRIANGULO OBTUSANGULO\n");
        if(A*A < B*B + C*C)
            printf("TRIANGULO ACUTANGULO\n");
        if(A == B && A == C && C == B){
            printf("TRIANGULO EQUILATERO\n");
        }else {if(A == B || A == C || C == B){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    }
    
}

    

    return 0;
}