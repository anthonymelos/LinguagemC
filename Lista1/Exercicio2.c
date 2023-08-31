/*Crie um programa que converta uma temperatura em graus Celsius para Fahrenheit.
Peça ao usuário para inserir a temperatura em Celsius e imprima a temperatura
equivalente em Fahrenheit.*/

#include <stdio.h>

int main(){
    float tempCelcius, tempFar;
    printf("Informe a temperatura em Celcius: ");
    scanf("%f", &tempCelcius);

    tempFar = (tempCelcius * 1.8) + 32;

    printf("A temperatura em Fahrenheit é: %.1f°F \n", tempFar);


}