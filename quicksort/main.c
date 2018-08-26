#include <stdio.h>
#include <stdlib.h>

int dividir(int vetor[], int esq, int dir)  //fun��o dividir usada dentro da fun��o quick, recebe o vetor, e os limites de ordena��o
{
    int cont=esq;        //contador
    int a;           //auxiliar da troca de posi��es
    int i;
    for(i=esq+1; i<=dir; i++)   //percorre a parte do vetor em quest�o
    {
        if(vetor[i]<vetor[esq])   // executa a troca de valores, com o objetivo de encontrar qual a posi��o correta do valor
        {                          // que ficara na posi��o de contador
            cont++;
            a=vetor[i];
            vetor[i]=vetor[cont];
            vetor[cont]=a;
        }
    }
    a=vetor[esq];                   // o valor na posi��o da esquerda troca de lugar com o valor na posi��o do contador
    vetor[esq]=vetor[cont];         // colocando o valor da posi��o contador na posi��o correta dele
    vetor[cont]=a;
    return cont;           // retorna a posi��o do contador, que quer dizer onde tem um numero na posi��o correta
}
/* em outras palavras, a fun��o dividir faz com que se divida o vetor em dois onde todos os termos
a direita de uma posicao (contador) sejam maiores que ele, e todos a esquerda sejam menores, assim, garante-se
que esta posi��o contem um valor em sua posi��o correta dentro do vetor ordenado */


void quicksort(int vetor[], int esq, int dir) //quicksor trabalha com o m�todo de dividir para conquistar,
{                                           // ele cria uma vari�vel para a posicao, chamada parede, pois diz onde o algoritmo
    int parede;                             //parou de ordenar
    if (esq<dir)
    {
        parede=dividir(vetor, esq, dir);    // encontra onde tem um valor na posi��o correta
        quicksort(vetor, esq, parede-1);    // executa recursivamente para a parte "de baixo"
        quicksort(vetor, parede+1, dir);    //executa recursivamente para a parte "de cima"
    }
}

/*O m�todo quicksort � um algoritmo que se trabalha com a divis�o e conquista. Basicamente seu funcionamento consiste
em definir um "piv�" e percorrer o vetor colocando os elementos menores que o piv� de um lado de uma parede imagin�ria,
e consequentemente, os elementos maiores que o piv� do outro lado dessa parede. Ao percorrer todo o vetor, teremos certeza
de que a "parede" est� na posi��o a qual o piv� deve estar no vetor ordenado, pois todos os n�meros a sua esquerda s�o menores,
e todos a direita, maiores. Assim, recursivamente, � feito com os dois lados da nossa parede, definindo novos piv�s, e colocando-os
em suas respectivas posi��es corretas, at� que se compare todos os piv�s com eles mesmos, o que foge � condi��o para que se
ocorra a chamada recursiva. E o vetor estar� ordenado.
O algoritmo tem complexidade O(nlogn) pois se fazem n compara��es dividindo o vetor logn vezes, para o melhor e o caso m�dio.
Para o pior caso, sua complexidade � dada por O(n�), supondo que o piv� escolhido seja sempre o primeiro ou o ultimo elemento
da lista.
*/
