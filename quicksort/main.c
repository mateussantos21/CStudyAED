#include <stdio.h>
#include <stdlib.h>

int dividir(int vetor[], int esq, int dir)  //função dividir usada dentro da função quick, recebe o vetor, e os limites de ordenação
{
    int cont=esq;        //contador
    int a;           //auxiliar da troca de posições
    int i;
    for(i=esq+1; i<=dir; i++)   //percorre a parte do vetor em questão
    {
        if(vetor[i]<vetor[esq])   // executa a troca de valores, com o objetivo de encontrar qual a posição correta do valor
        {                          // que ficara na posição de contador
            cont++;
            a=vetor[i];
            vetor[i]=vetor[cont];
            vetor[cont]=a;
        }
    }
    a=vetor[esq];                   // o valor na posição da esquerda troca de lugar com o valor na posição do contador
    vetor[esq]=vetor[cont];         // colocando o valor da posição contador na posição correta dele
    vetor[cont]=a;
    return cont;           // retorna a posição do contador, que quer dizer onde tem um numero na posição correta
}
/* em outras palavras, a função dividir faz com que se divida o vetor em dois onde todos os termos
a direita de uma posicao (contador) sejam maiores que ele, e todos a esquerda sejam menores, assim, garante-se
que esta posição contem um valor em sua posição correta dentro do vetor ordenado */


void quicksort(int vetor[], int esq, int dir) //quicksor trabalha com o método de dividir para conquistar,
{                                           // ele cria uma variável para a posicao, chamada parede, pois diz onde o algoritmo
    int parede;                             //parou de ordenar
    if (esq<dir)
    {
        parede=dividir(vetor, esq, dir);    // encontra onde tem um valor na posição correta
        quicksort(vetor, esq, parede-1);    // executa recursivamente para a parte "de baixo"
        quicksort(vetor, parede+1, dir);    //executa recursivamente para a parte "de cima"
    }
}

/*O método quicksort é um algoritmo que se trabalha com a divisão e conquista. Basicamente seu funcionamento consiste
em definir um "pivô" e percorrer o vetor colocando os elementos menores que o pivô de um lado de uma parede imaginária,
e consequentemente, os elementos maiores que o pivô do outro lado dessa parede. Ao percorrer todo o vetor, teremos certeza
de que a "parede" está na posição a qual o pivô deve estar no vetor ordenado, pois todos os números a sua esquerda são menores,
e todos a direita, maiores. Assim, recursivamente, é feito com os dois lados da nossa parede, definindo novos pivôs, e colocando-os
em suas respectivas posições corretas, até que se compare todos os pivôs com eles mesmos, o que foge à condição para que se
ocorra a chamada recursiva. E o vetor estará ordenado.
O algoritmo tem complexidade O(nlogn) pois se fazem n comparações dividindo o vetor logn vezes, para o melhor e o caso médio.
Para o pior caso, sua complexidade é dada por O(n²), supondo que o pivô escolhido seja sempre o primeiro ou o ultimo elemento
da lista.
*/
