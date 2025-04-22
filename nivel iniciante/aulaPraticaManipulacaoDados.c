#include <stdio.h>

/*

    Nessa aula foi feito um programa para praticar o que foi aprendido em aulas anteriores

*/

int main() {

    int nota1, nota2, nota3; // para a nota o certo seria colocar a nota em float pois a nota nao seria um numero interio podendo ser decimal.
    float media;             // porem foi usado a criacao da variavel usando int para realizar a conversao explicita.


    printf("*** Programa de Calculo de Media ***\n");

    printf("Digite a sua primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite a sua segunda nota: \n");
    scanf("%d", &nota2);

    printf("Digite a sua terceira nota: \n");
    scanf("%d", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3;

    printf("A media e: %.1f", media);

}