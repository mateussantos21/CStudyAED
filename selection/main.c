#include <stdio.h>
#include <stdlib.h>

int* selection(int* vetor, int tam)
{
  int i;
  int j;
  int min;
  int aux;
  for (i=0; i<(tam-1); i++) //percorre o vetor do primeiro ao penultimo valor
   {
    min=i;                  //atribui a posi��o onde est� o menor valor do vetor como sendo a primeira
    for (j=(i+1); j<tam; j++)  //percorre o vetor do segundo ao �ltimo valor
    {
      if(vetor[j]<vetor[min])    //acha um n�mero menor que o n�merom da primeira posi��o
       {
        min=j;                   //atribui a posi��o do numero achado � posi��o do menor numero
       }
    }
    if (i!=min)   //se tver achado um n�mero menor
    {
      aux=vetor[i];    //auxiliar guarda o valor da primeira posi��o
      vetor[i]=vetor[min];  // insere o menor valor na primeira posi��o
      vetor[min]=aux;        // insere o valor que estava na primeira posi��o na posi��o do menor valor
    }
  }
  return (vetor);
}

/*o algoritmo possui complexidade O(n�) para qualquer caso, visto que � necess�rio que se percorra o vetor inteiramente n� vezes,
para tomar cada elemento do vetor como parametro de compara��o, e para cada parametro tomado, fazer a compara��o com
todos os outro elementos.
� o algoritmo de ordena��o com entendimento mais simples, seu funcionamento se baseia somente em procurar o menor valor do
vetor, com parametro de compara��o na primeira posi��o, e semque que se acha um valor menor do que o valor que est� previamente
na primeira posi��o, ele � trocado com o valor desta posi��o. ao percorrer todos os valores o parametro avan�a para a segunda,
assim por adiante at� que se use como parametro todas as posi��es do vetor, e insira ali seu devido valor.
