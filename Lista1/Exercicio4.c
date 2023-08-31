#include <stdio.h>
#include <math.h>

//Crie um programa que leia um número inteiro e imprima seu quadrado e cubo

int main(){
    int numero, quadrado, cubo;
    printf("Informe um número inteiro: ");
    scanf("%d", &numero);
    quadrado = numero * numero;
    cubo = numero * numero * numero;
    printf("Seu quadrado é: %d\n", quadrado);
    printf("Seu cubo é: %d\n", cubo);
}