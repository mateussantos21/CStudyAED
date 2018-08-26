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
        min=j;                   // atribui a posi��o do numero achado � posi��o do menor numero
       }
    }
    if (i!=min)   //se tver achado um n�mero menor
    {
      aux=vetor[i];    // auxiliar guarda o valor da primeira posi��o
      vetor[i]=vetor[min];  // insere o menor valor na primeira posi��o
      vetor[min]=aux;        // insere o valor que estava na primeira posi��o na posi��o do menor valor
    }
  }
  return (vetor);
}

/*o algoritmo possui complexidade O(n�) para qualquer caso,
pois ele executa as compara��es idependente de j� estar ordenado,
e executa compara��es percorrendo o vetor com j dentro de i, por issotem complexidade n�
*/
