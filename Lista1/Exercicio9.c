#include <stdio.h>

//Crie um programa que imprima a tabuada de multiplicação de um número fornecido pelo usuário.

int main(){
    float numero, resultado;
    int contador = 0;
    printf("Informe um número: ");
    scanf("%f", &numero);

    while(contador <= 10){
        resultado = numero * contador;
        printf("%.1f x %d = %.1f \n", numero, contador, resultado);
        contador++;

    }

}
