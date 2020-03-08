#include <stdio.h>
#include <string.h>
#define TAM 12
float array[TAM][TAM];
float sumCol(int col);

int main(){
    
    int colOp, line, column, returnOpt;
    char opt[2];

    scanf("%d", &colOp);
    scanf(" %c", &opt);

    for(line = 0; line < TAM; line++){
        for(column = 0; column < TAM; column++){
            scanf("%f", &array[line][column]);
        }
    }
    returnOpt = strcmp(opt, "S")?1:0;

    switch (returnOpt){
    case 0:
        printf("%.1f\n", sumCol(colOp));
        break;    
    case 1:
        printf("%.1f\n", sumCol(colOp)/12);
        break;
    default:
        break;
    }

    return 0;
}

float sumCol(int col){
    float sum;
    int contSum;
    for(contSum = 0; contSum < 12; contSum++){
        sum = sum + array[contSum][col]; 
    }
    return sum;
}