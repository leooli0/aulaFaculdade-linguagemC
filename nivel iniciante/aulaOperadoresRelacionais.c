#include <stdio.h>

/*
    Este programa demonstra o uso de Operadores Relacionais em C:
        - >  maior que
        - <  menor que 
        - >= maior ou igual a
        - <= menor ou igual a
        - == igual a
        - != diferente de
*/

int main() {

    int a = 20;
    int b = 20;

    /*
        Cada expressao abaixo retorna 1 se for verdadeira (true)
        ou 0 se for falsa (false)
    */

    printf("a > b: %d\n", a > b);     // Verifica se a eh maior que b
    printf("a < b: %d\n", a < b);     // Verifica se a eh menor que b
    printf("a >= b: %d\n", a >= b);   // Verifica se a eh maior ou igual a b
    printf("a <= b: %d\n", a <= b);   // Verifica se a eh menor ou igual a b
    printf("a == b: %d\n", a == b);   // Verifica se a eh igual a b
    printf("a != b: %d\n", a != b);   // Verifica se a eh diferente de b

    printf("________________________\n");

    printf("*** Conversao Implicita ***\n");

    int x = 5;
    float y = 5.0;
    char c = 'a'; // caractere 'a' tem valor ASCII 97

    /*
        Aqui o compilador faz a conversao automaticamente (implicita).
        Tipos diferentes (int, float, char) sao comparados.
    */

    printf("x <= y: %d\n", x <= y);   // Comparando int com float
    printf("x == y: %d\n", x == y);   // Verifica se 5 eh igual a 5.0
    printf("x != y: %d\n", x != y);   // Verifica se 5 eh diferente de 5.0

    printf("x >= c: %d\n", x >= c);   // Compara 5 com valor ASCII de 'a' (97)
    printf("O valor ASCII de %c e: %d\n", c, c); // Mostra o valor inteiro do caractere 'a'

    printf("________________________\n");

    printf("*** Conversao Explicita ***\n");

    float numero1 = 10.2;
    int numero2 = 10;

    /*
        Aqui usamos conversao explicita (cast) para garantir que o tipo
        de dados esteja correto na comparacao.
    */

    printf("numero1 > numero2: %d\n", (float)numero1 > numero2);      // Compara 10.2 com 10
    printf("numero1 == numero2: %d\n", (float)numero1 == numero2);    // Verifica se 10.2 eh igual a 10

    return 0;
}
