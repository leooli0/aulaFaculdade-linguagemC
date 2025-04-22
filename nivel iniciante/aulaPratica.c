#include <stdio.h>

/*

    Nessa aula foi feito um programa para praticar o que foi aprendido em aulas anteriores

*/

int main(){

    int idade, matricula; // e possivel declarar variaveis dessa maneira sendo elas do mesmo tipo
    float altura;
    char nome[50];

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);


    printf("Nome do aluno: %s - Matricula: %d\n", nome, matricula);
    printf("Idade: %d - Altura: %f\n", idade, altura);

    return 0;
}







