#include <stdio.h>

//Escreva um programa que calcule e imprima a área de um triângulo. Peça ao usuário
//para inserir a base e a altura do triângulo.

int main(){
    float base, altura, area;
    printf("Informe o tamanho da base de um triângulo: ");
    scanf("%f", &base);
    printf("Informe a altura desse triângulo: ");
    scanf("%f", &altura);
    area = (base*altura)/2;
    printf("A área desse triângulo é: %.1f\n", area);

}