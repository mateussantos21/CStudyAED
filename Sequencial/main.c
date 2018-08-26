#include <stdio.h>
#include <stdlib.h>

int sequencial(int chave,int vet[],int tam) // a busca sequencia é a procra simples por
   {
    int i;                                   //teste de cada elemento do vetor comparando com a chave
    for(i=0; i<tam; i++){
        if(vet[i]==chave){
            return i+1;
        }
    }
    return -1;
}

/*No melhor caso, o elemento a ser buscado é encontrado logo na primeira tentativa da busca.
No pior caso, o elemento a ser buscado encontra-se na última posição e são feitas N comparações,
sendo N o número total de elementos. No caso médio, o elemento é encontrado após (N+1)/2 comparações.
O algoritmo de busca linear é um algoritmo O(n). para o melhor caso, O(1)
O funcionamento do algoritmo é simples, o objetivo é porcorrer todo o vetor, desde a primeira posição
verificando em cada posição se ela contem o valor a ser buscado, seja esse valor um número real, um ponto flutuante,
ou até um caracter. Ao encontrar, retorna a posição de tal valor, caso não encontre retorna a o valor (-1).
