#include <stdio.h>
#include <string.h>
#define TAM 12
float array[TAM][TAM];
float sumLine(int line);

int main(){
    
    int lineOp, line, column, returnOpt;
    char opt[2];

    scanf("%d", &lineOp);
    scanf(" %c", &opt);

    for(line = 0; line < TAM; line++){
        for(column = 0; column < TAM; column++){
            scanf("%f", &array[line][column]);
        }
    }
    returnOpt = strcmp(opt, "S")?1:0;

    switch (returnOpt){
    case 0:
        printf("%.1f\n", sumLine(lineOp));
        break;    
    case 1:
        printf("%.1f\n", sumLine(lineOp)/12);
        break;
    default:
        break;
    }

    return 0;
}

float sumLine(int line){
    float sum;
    int contSum;
    for(contSum = 0; contSum < 12; contSum++){
        sum = sum + array[line][contSum]; 
    }
    return sum;
}