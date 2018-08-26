#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int j;
    int i;
    int codaux;
    float preaux;
    char proaux[30];
        /* a struct cria um tipo de variável que você define. é uma variável composta, que pode conter dados
        inteiros, prontos flutuantes, caracteres, strings, ou seja, contem outras variáveis, que serão armazenadas
        em uma vriável só, tipo registro. O registro de um produto é uma váriável que contem uma string do nome
        do produto, um inteiro do código do produto, e um ponto flutuante do preço do produto.
        se faz a seguinte estrutura para a criação do registro:          */
    typedef struct
    {
        char prod[30];
        int codigo;
        float preco;
    }produto;            // registro produto criado
    produto lista[5];     // aqui se cria um vetor chamado lista, com 5 espaços para se armazenar 5 variaveis do tipo produto
    for(i=0; i<5; i++)
   {
       printf("\nProduto: ");
       gets(proaux);  // gets(vetor de char) serve para coletar um vetor de caracteres. usa-se no lugar de scanf para esse tipo
       setbuf(stdin, NULL);  // limpa o buffer do teclado (tira o bug da tecla enter)
       printf("\nCodigo: ");
       scanf("%d", &codaux);
       setbuf(stdin, NULL);
       printf("\nPreco: ");
       scanf("%f", &preaux);
       setbuf(stdin, NULL);
       strcpy(lista[i].prod, proaux); // essa estrutura atribui de forma correta uma string para um vetor de caracteres(necessita da biblioteca string.h)
       lista[i].codigo=codaux;
       lista[i].preco=preaux;
   }
   for(j=0; j<5; j++)
   {
       printf("\nProduto%d: %s\nCodigo: %d\nPreço: R$%5.2f\n", j, lista[j].prod, lista[j].codigo, lista[j].preco);
   }
}
