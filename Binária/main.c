#include <stdio.h>
#include <stdlib.h>

int binaria(int vet[], int chave, int tam)//função que faz busca no vetor usando o método de divisão e conquista
{                               // e retorna a posição em que está o elemento buscado, ou retorna -1 caso não exista o elemento
    int inferior=0;
    int superior=tam-1;
    int meio;
    while(superior>inferior)
    {
        meio=(superior+inferior)/2;  //vai dar só a parte inteira porque meio foi declarado como inteiro
        if(chave==vet[meio])
        {
            return meio+1;
        }
        else if(chave<vet[meio])
        {
            superior=meio;
        }
        else
        {
            inferior=meio;
        }
    }
    return -1;
}
/*A complexidade desse algoritmo é da ordem de Θ(log n),
em que n é o tamanho do vetor de busca.
Apresenta-se mais eficiente que a Busca linear cuja ordem é O(n).
Contudo, sua desvantegem é o fato de que o vetor precisa estar previamente ordenado para o uso do método
que se basea em dividir o vetor para procurar o valor desejado onde há mais chance dele estar. Para isso o algoritmo
busca sempre o valor do meio do vetor, caso o valor não esteja no meio o vetor é repartido, e sobram todos os valores menores
que o valor do meio no caso da chave de busca ser menor que o valor do meio, ou todos os valores maiores no caso contrário.
com o vetor repartido, a mesma operação se repete, sempre analisando o elemento do meio do vetor que sobrar, e "jogando fora"
o conjunto de valores onde não há possibilidade de se encontrar a chave de busca. */
