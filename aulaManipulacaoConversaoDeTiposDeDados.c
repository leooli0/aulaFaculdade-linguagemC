#include <stdio.h>

int main()
{

    /*

        Variaveis Inteira

    */

    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; // Note que a divisao de inteiros resulta em um numero inteiro

    printf("Soma: %d\n", soma);
    printf("Diferenca: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);


    /*

        Variaveis Ponto Flutuante *PARA TESTE COMENTE O CODIGO ACIMA*

    */

    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y; // Divisao de ponto flutuante

    printf("Soma: %.2f\n", soma);
    printf("Diferenca: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quociente: %.2f\n", quociente);

    /*
    
        Conversao de Tipos de Dados de Maneira Implicida *PARA TESTE COMENTE O CODIGO ACIMA*

        'Esse tipo de conversao pode causar problemas pois se feita de maneira errada e feita a perda de dados,
        dessa forma o recomendado e realizar a conversao explicida.'
    
    */

    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' e convertido implicitamente para float

    printf("Resultado: %.2f\n", resultado);


    /*
    
        Conversao de Tipos de Dados de Maneira Explicida *PARA TESTE COMENTE O CODIGO ACIMA*
    
    */


    int a = 10;
    float b = 3;
    float quociente = (float) a / b; // 'a' e explicitamente convertido para float
    // (float) armazena o valor da variavel convertendo o resutado automaticamente para ponto flutuante -> mais conhecido como 'casting'

    printf("Resultado: %.2f\n", quociente);


}