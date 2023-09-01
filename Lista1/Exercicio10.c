#include <stdio.h>

//Escreva um programa que calcule e imprima o fatorial de um número inteiro positivo dado pelo usuário.

int main(){
    int fatorial = 1, numero;
    printf("Insira um número para ser calculado o fatorial dele: ");
    scanf("%d", &numero);
    while(numero > 1){
        fatorial = fatorial * numero;
        numero--;
    }
    printf("O fatorial é: %d\n", fatorial);
}
