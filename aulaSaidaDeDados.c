#include <stdio.h>

/*

    Aula de Entrada de Saida de Dados, nessa aula vamos aprender sobre como obter iformacoes de usuarios e mostrar esses resultados.

*/


int main(){

    /*
    
            Saida de dados
    
        Existem varias maneiras de obter essas saidas de dados como printf e scanf.    
    
    
    */
    
        int Idade = 19;
        int _quantidade = 3;
        float altura = 1.5;
        double pEso = 56;
        char Letra = 'L';
        char Nome[20] = "Leonardo"; // essa variavel seria uma cadeia de caracteres ou uma string
        char opcao[20] = "L";
    
        //sintaxe padra printf
        printf("Hello World!");
    
        //printf("texto com formatacao", variavel1, variavel2, ...);
        printf("A idade do:%s e: %d\n", Nome, Idade);
        printf("A idade e: \n", Idade); // dessa maneira nao sera imprimido na tela a idade pois nao foi colocado a especificacao de formato
        printf("A altura e: %.2f\n", altura); // dessa forma %.2f e possivel limitar a quantidade de casas decimais a somente duas.
        printf("A opcao e: %d\n", opcao);
        
        //printf("Hello World!\n");
        // o "\n" serve para quebra de linha deixando a visualizacao mais fluida
    
    
    /*
    
        printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3);
    
        %d: imprime um inteiro no formato decimal
        %i: equivale a %d.
        %f: imprime um numero de ponto flutuante no formato padrao.
        %e: imprime um numero de ponto flutuante na notacao cientifica.
        %c: imprime um unico caractere.
        %s: imprime uma string (cadeia) de caracteres.
    
    */   
    
    
    }