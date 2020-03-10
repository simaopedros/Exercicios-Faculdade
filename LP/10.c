#include <stdio.h>
float celsiusToFarenh(float temp);
float farenhToCelsius(float temp);

int main(){
    float temp, temConvert;
    int tipoTemp;

    printf("Qual a temperatura [1] Celsius - [2] Farenheit\n ");
    scanf("%d", &tipoTemp);
    scanf("%f", &temp);
    switch (tipoTemp)
    {
    case 1:
        temConvert = celsiusToFarenh(temp);
        break;
    case 2:
        temConvert = farenhToCelsius(temp);
        break;
    default:
        break;
    }

}

float celsiusToFarenh(float temp){
    float tempConvert;
    tempConvert = ((9*temp)/5)+32;
    return tempConvert;
}
float farenhToCelsius(float temp){
    float tempConvert;
    tempConvert = (5*(temp-32))/9;
    return tempConvert;
}
