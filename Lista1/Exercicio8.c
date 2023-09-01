#include <stdio.h>

//Escreva um programa que classifique um dado número inteiro como positivo, negativo ou zero.

int main(){
    int numero;
    printf("Informe um número: ");
    scanf("%d", &numero);

    if (numero > 0){
        printf("O número é positivo!\n");

    }
    else if (numero < 0){
        printf("O número é negativo!\n");

    }
    else{
        printf("o número é 0!\n");
    }
}