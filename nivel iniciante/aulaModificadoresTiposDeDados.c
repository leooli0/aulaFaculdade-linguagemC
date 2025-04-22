#include <stdio.h> // Biblioteca padrao para entrada e saida (printf, scanf, etc.)

int main() {

    // -------------------------------------------------------------
    // Exemplo 1: Comparando numeros com sinal e sem sinal
    // -------------------------------------------------------------

    int numeroSinal = 3000000000; // Este valor excede o limite de um int normal (max: 2.147.483.647)
    // Resultado: Vai causar overflow e imprimir um valor errado

    unsigned int numeroSemSinal = 3000000000; // unsigned int permite valores de 0 a 4.294.967.295
    // Resultado: Sera impresso corretamente, pois esta dentro do limite de unsigned int

    printf("Numero com sinal: %d\n", numeroSinal); // %d para int com sinal
    printf("Numero sem sinal: %u\n", numeroSemSinal); // %u para unsigned int

    printf("\n__________________________\n");

    // -------------------------------------------------------------
    // Exemplo 2: Limite do tipo int e uso de long long int
    // -------------------------------------------------------------

    int numeroNormal = 2147483647; // Valor maximo que um int suporta
    long long int numeroGrande = 2147483647; // long long tambem suporta esse valor (e muito mais)

    printf("Numero regular (int): %d\n", numeroNormal); // %d para int
    printf("Numero grande (long int): %lld\n", numeroGrande); // %lld para long long int

    printf("\n__________________________\n");

    // -------------------------------------------------------------
    // Exemplo 3: Precisao com numeros decimais
    // -------------------------------------------------------------

    double numeroPreciso = 3.141592653589793; // double: ate cerca de 15 casas decimais de precisao
    long double numeroMuitoPreciso = 3.141592653589793238463; // long double: mais precisao (pode variar por sistema)

    printf("Numero preciso (double): %.15f\n", numeroPreciso); // Imprime com 15 casas decimais
    printf("Numero muito preciso (long double): %.21Lf\n", numeroMuitoPreciso); // %.21Lf para mais precisao (long double)

    printf("\n__________________________\n");

    // -------------------------------------------------------------
    // Exemplo 4: Trabalhando com valores inteiros grandes
    // -------------------------------------------------------------

    unsigned long int numeroGrandePositivo = 4000000000; // OK para unsigned long int
    unsigned int  numeroPositivo = 4000000000; // OK para unsigned int
    long int NumeroGrande = 4000000000; // Pode ou nao suportar, depende da arquitetura do sistema (32 ou 64 bits)
    int numero = 4000000000; // Excede o limite do tipo int e causara overflow

    printf("Numero positivo grande: %lu\n", numeroGrandePositivo); // %lu para unsigned long int
    printf("Numero positivo: %u\n", numeroPositivo); // %u para unsigned int
    printf("Numero grande: %ld\n", NumeroGrande); // %ld para long int
    printf("Numero: %d\n", numero); // %d para int com sinal (valor sera incorreto por overflow)

    printf("\n__________________________\n");

    // -------------------------------------------------------------
    // Exemplo 5: Short int e estouro de valor
    // -------------------------------------------------------------

    short int numeroPequeno = 32767; // Valor maximo que um short int pode armazenar (2 bytes)
    printf("Numero pequeno (short int): %d\n", numeroPequeno);

    numeroPequeno = 32768; // Este valor excede o limite de short int e causara overflow
    printf("Numero pequeno atualizado (short int): %d\n", numeroPequeno); // Valor incorreto (overflow)

    return 0; // Finaliza o programa
}
