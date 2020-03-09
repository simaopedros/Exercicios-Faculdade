#include <stdio.h>
#include <math.h>
float calculaDela(float a, float b, float c);

int main(){
    float a, b, c, delta;
    scanf("%f %f %f", &a, &b, &c);
    delta = calculaDela(a, b, c);
    printf("%.2f", delta);
}

float calculaDela(float a, float b, float c){
    float delta;
    delta = pow(b, 2)- 4*a*c;
    return delta;
}