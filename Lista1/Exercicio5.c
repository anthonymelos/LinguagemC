//Escreva um programa que determine se um número digitado pelo usuário é par ou ímpar

#include <stdio.h>

int main(){
    int numero;
    printf("Informe um número: ");
    scanf("%d", &numero);

    numero = numero % 2;
    if(numero == 1){
        printf("O número é ímpar!\n");

    }
    else{
        printf("O número é par!\n");
    }
}