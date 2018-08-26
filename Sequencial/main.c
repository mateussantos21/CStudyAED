#include <stdio.h>
#include <stdlib.h>

int sequencial(int chave,int vet[],int tam) // a busca sequencia � a procra simples por
   {
    int i;                                   //teste de cada elemento do vetor comparando com a chave
    for(i=0; i<tam; i++){
        if(vet[i]==chave){
            return i+1;
        }
    }
    return -1;
}

/*No melhor caso, o elemento a ser buscado � encontrado logo na primeira tentativa da busca.
No pior caso, o elemento a ser buscado encontra-se na �ltima posi��o e s�o feitas N compara��es,
sendo N o n�mero total de elementos. No caso m�dio, o elemento � encontrado ap�s (N+1)/2 compara��es.
O algoritmo de busca linear � um algoritmo O(n). para o melhor caso, O(1)
O funcionamento do algoritmo � simples, o objetivo � porcorrer todo o vetor, desde a primeira posi��o
verificando em cada posi��o se ela contem o valor a ser buscado, seja esse valor um n�mero real, um ponto flutuante,
ou at� um caracter. Ao encontrar, retorna a posi��o de tal valor, caso n�o encontre retorna a o valor (-1).
