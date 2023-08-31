#include <stdio.h>

//Faça um programa que peça a nota de um aluno em uma prova e verifique se ele foi
//aprovado (nota maior ou igual a 6) ou reprovado (nota menor que 6).

int main(){
    float nota;
    printf("Digite a sua nota (de 6 a 10): ");
    scanf("%f", &nota);

    if(nota >= 6){
        printf("Você está aprovado!\n");

    }
    else{
        printf("Você está reprovado!\n");
    }

}
