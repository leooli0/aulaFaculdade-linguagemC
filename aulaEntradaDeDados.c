#include <stdio.h>

/*

    Aula de Entrada de Saida de Dados, nessa aula vamos aprender sobre como obter iformacoes de usuarios e mostrar esses resultados.

*/


int mais(){

    /*
    
            Entrada de dados
    
        Existem varias maneiras de obtiver essas entradas de dados como scanf e getchar.
    
    */
    
        int idade;
        float altura;
        double opcao;
        char nome[10];
    
        //sintaxe scanf
        //scanf("formato1" "formato2", &variavel1, &variavel2, ...);
    
    
        printf("Digite sua idade:"); 
        scanf("%d", &idade); // dessa forma nao sera mostrado nada na tela pois o scanf serve somente para capturar os dados, para 
        //que se torne visivel e recomendado usar como exemplo printf("Digite sua idade:"); antes do scanf para que assim seja visivel
        printf("A idade e: %d\n", idade); // dessa maneira assim que for digitado sera impresso na tela automaticamente
    
        printf("Digite sua altura: ");
        scanf("%f", &altura); 
        printf("A altura e: %.2f\n", altura);
    
        //dessa forma nao sera imprimido na tela nome composto, isso se da uma limitacao do proprio scanf().
        printf("Digite seu nome: ");
        scanf("%s", nome);  
        printf("A altura e: %s\n", nome);
    
        //dessa forma nao sera imprimido na tela opcao, pois o scanf() le a tecla enter como um caracter sendo assim nao e imprimido nada na tela.
        printf("Digite a opcao: ");
        scanf("%c", &opcao);  // esse erro pode ser resolvdo adicionando um espaco antes do especificador de formato como por exemplo: scanf(" %c", opcao);
        printf("A opcao e: %c\n", opcao);
    
    }