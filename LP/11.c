#include <stdio.h>

float retornaNotaMaior(float notaUm, float notaDois, float notaTres);
float retonraNotaMenor(float notaUm, float notaDois, float notaTres);
float retornaMediaNotas(float somaNotas, int qtdProvas);

int main(){
    float notaUm, notaDois, notaTres, media, notaMaior, notaMenor, somaNotas;
    scanf("%f %f %f", &notaUm, &notaDois, &notaTres);
    somaNotas = notaUm + notaDois + notaTres;

    notaMenor = retonraNotaMenor(notaUm, notaDois, notaTres);

    printf("Meida das 3 provas: %.2f\n", retornaMediaNotas(somaNotas, 3));
    printf("Meida das 2 melhores provas: %.2f\n", retornaMediaNotas(somaNotas-notaMenor, 2));
    printf("Nota maior: %.2f\n", retornaNotaMaior(notaUm, notaDois, notaTres));
    printf("Nota menor: %.2f\n", notaMenor);

}

float retornaNotaMaior(float notaUm, float notaDois, float notaTres){
    float notaMaior;
    if(notaUm >= notaDois && notaUm >= notaTres){
        notaMaior = notaUm;
    }else if(notaDois >= notaUm && notaDois >= notaTres){
        notaMaior = notaDois;
    }else{
        notaMaior = notaTres;
    }
    

    return notaMaior;
}

float  retonraNotaMenor(float notaUm, float notaDois, float notaTres){
    float notaMenor;
    if(notaUm <= notaDois && notaUm <= notaTres){
        notaMenor = notaUm;
    }else if(notaDois <= notaUm && notaDois <= notaTres){
        notaMenor = notaDois;
    }else{
        notaMenor = notaTres;
    }
    

    return notaMenor;

}

float retornaMediaNotas(float somaNotas, int qtdProvas){
    float media;
    media = somaNotas / qtdProvas;
    return media;
}