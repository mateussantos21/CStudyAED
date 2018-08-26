#include<stdio.h>
#include<stdlib.h>


int* insertionsort(int* vetor[], int tam) //função inserção
{
    int aux[tam];   //aux é o vetor que sera preenchido com os elementos ordenados
    int i;
    int j;
    int ultimo=0;
    aux[0]=vetor[0];
    for(i=0; i<tam; i++)    // o for garante que se percorra o vetor a ser ordenado inteiramente, uma vez
    {
        j=ultimo;       // a cada vez que se insere um elemento e vai pro próximo, o j é reiniciado com o valor da posição em que está o ordenamento
        while(aux[j]>vetor[i] && j>=0)  // essa estrutura insere o elemento do vetor a ser ordenado em sua posição correta
        {
            aux[j+1]=aux[j];
            j--;
        }
        ultimo++;
        aux[j+1]=vetor[i];       //insere o valor após o while ter achado a posição correta ao qual ele deve ser inserido
    }
    return (aux);
}

void insertionSort(int numeros[], int tam) {  // algoritmo wikipédia
   int i, j, eleito;
   for (i = 1; i < tam; i++){
      eleito = numeros[i];
      j = i - 1;
      while ((j>=0) && (eleito < numeros[j])) {
         numeros[j+1] = numeros[j];
         j--;
      }
      numeros[j+1] = eleito;
   }
}

/*complexidade desse método é O(n²) para o caso médio e o pior caso,
e O(n) para o melhor caso, que é o caso do vetor ja estar ordenado,
 pois este seria percorrido da mesma forma, sem executar as operações.

 O algoritmo de ordenação inserção usa um método relativamente simples para executar a ordenação do vetor,
 operando da seguinte maneira: o algoritmo cria um vetor auxiliar, vazio e de mesmo tamanho do vetor a ser ordenado,
 e procede coletando sempre o menor valor do vetor, e o inserindo na primeira posição livre do vetor auxiliar,
 assim consecutivamente, até ter inserido um a um, do menor para o maior valor. Obetendo-se no final um vetor
 auxiliar ordenado, com os mesmos valores do vetor em questão.
 */
