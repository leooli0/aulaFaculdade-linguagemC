#include <stdio.h>


/*

    Aula de Variaveis e Tipos de Dados, nessa aula e explicado quais os tipos de variaveis e tipos dados.  

*/


int main(){

    /*

                VARIAVEIS
    
        Existem varias maneiras de declarar uma variavel, sendo ela somente com nomes como int numero; indicando
        que a variavel se trata de um numero. Porem existem algumas regras para criar essas vareiaveis:

            - O nome da variavel deve ser de facil entendimento, significativo que facilita a leitura do codigo.
            - Nao pode comecar com numero( como exemplo int = 2teste; ).
            - Pode ser iniciada com underlines( como exemplo int = _teste; ).
            - A linguagem C e case sensitive, sendo assim a propria linguagem entente se houver letras maiusculas e 
                munisculas( como exemplo int = Teste; e int = teste; ), dessa forma a linguagem entende que sao duas variaveis diferentes.
            - Nao pode ser palavras reservadas pela propria linguagem( como exemplo int = int; e int = return;).
        
        Para o codigo fluir corretamente e necessario inicializar a variavel, para isso existe varias formas comno no exemplo abaixo

    */

    int Idade = 19;
    int idade;
    int _quantidade = 3;
    float altura = 1.5;
    double pEso = 56;
    char Letra = 'L';
    char Nome[20] = "Leonardo";

    idade = 19; // esta seria outra forma de se inicializar uma variavel.

    _quantidade = 1; // esta forma e possivel sobrescrever uma variavel. Sendo assim e subistituido o valo de 3 para 1.

    /*
    
        Note que no exemplo foi inicializada as variaveis, e seguindo as regras de nomeclatura de variaveis.

    */

    /*
    
                TIPOS DE DADOS

            Cada variavel precisa ter um tipo de dado, sendo assim, existem varios tipos de dados que podem ser utilizados:

                - int: Utilizado para armazenar valores inteiros.
                - float: Utilizado para armazenar valores reais.
                - double: Utilizado para armazenar valores reais maiores.
                - char: Utilizado para armazenar caracteres. 
    
    */

    int quantidade;
    double peso;
    char letra;
    char nome[20]; // a variavel char pode armazenar 1 caracter, sendo assim o numero colocado dentro dos colchetes sera o limete de caracteres que podem ser amazenadas
    int _teste; 

}