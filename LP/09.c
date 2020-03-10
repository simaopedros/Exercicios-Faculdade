#include <stdio.h>
#include <time.h>
int dado();
float probNum();

int main(){
    probNum();
}


float probNum(){
    int arrayNum[7], cont, numero;
    float porentagem;
    arrayNum[0] = arrayNum[1] = arrayNum[2] = arrayNum[3] = arrayNum[4] = arrayNum[5] = arrayNum[6] = 0;
    for(cont = 0; cont < 1000000; cont++){
        
        numero = dado();
        arrayNum[numero] ++;
    }

    for(cont = 0; cont < 7; cont++){
        porentagem = ((arrayNum[cont])*100.0)/1000000;
        printf("O Numero %d saiu %.2f por cento das veses \n",cont+1, porentagem);
    }
    
    
}

int dado(){
    srand(time(NULL));
    int valor = rand()%7;    
    return valor;
}