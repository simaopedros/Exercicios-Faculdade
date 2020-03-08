#include <stdio.h>
#include <string.h>
#define TAM 12
double array[TAM][TAM];
double sumDiagonal();
int control;
int main(){
    
    int colOp, line, column, returnOpt;
    char opt[2];

    scanf("%s", &opt);

    for(line = 0; line < TAM; line++){
        for(column = 0; column < TAM; column++){
            scanf("%lf", &array[line][column]);
        }
    }

    if (strcmp(opt, "S") == 0){
        printf("%.1lf\n", sumDiagonal());        
    }else if(strcmp(opt, "M") == 0){
        printf("%.1lf\n", sumDiagonal()/control);       
    }

    return 0;
}

double sumDiagonal(){    
    double sumItems;
    int contSumLine, contSumCol;
    sumItems = 0;
    control = 0;
   
    for(contSumLine = 0; contSumLine < (TAM/2) ; contSumLine++){
        for(contSumCol = contSumLine + 1; contSumCol < TAM - contSumLine -1 ; contSumCol ++){
            sumItems = sumItems + array[contSumLine][contSumCol];
            control++;
        }
    }

    return sumItems;    
    }
    
