#include <stdio.h>

int main() {

    /*
        Incremento (++)
        Pre-Incremento ++a
        Pos-Incremento a++
        Decremento (--)
        Pre-Decremento --a
        Pos-Decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes do  Incremento/Decremento: %d\n", numero1);

    //numero1 = numero1 + 1;
    //numero1 += 1; -> Utilizando os operadores aritimeticos
    numero1++;
    printf("Apos o Incremento: %d\n", numero1);

    //numero1 = numero1 - 1;
    //numero1 -= 1; -> Utilizando os operadores aritimeticos
    numero1--;
    printf("Apos o Decremento: %d\n", numero1);

    /*
    
        Pos-Incremento e o Pre-Incremento.
    
    */

    //Pos-Incremento: resultado = numero1; numero1++;
    resultado = numero1++;
    printf("Apos Pos-Incremento - Numero1: %d - Resultado: %d\n", numero1, resultado);


    //Pre-Incremento: resultado = numero1; ++numero1;
    resultado = ++numero1;
    printf("Apos Pre-Incremento - Numero1: %d - Resultado: %d\n", numero1, resultado);

    /*
    
        Pos-Decremento e o Pre-Decremento.
    
    */

     //Pos-Decremento: resultado = numero1; numero1--;
     resultado = numero1--;
     printf("Apos Pos-Decremento - Numero1: %d - Resultado: %d\n", numero1, resultado);
 
 
     //Pre-Incremento: resultado = numero1; ++numero1;
     resultado = --numero1;
     printf("Apos Pre-Decremento - Numero1: %d - Resultado: %d\n", numero1, resultado);

}
