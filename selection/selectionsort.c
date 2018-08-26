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
    min=i;                  //atribui a posição onde está o menor valor do vetor como sendo a primeira
    for (j=(i+1); j<tam; j++)  //percorre o vetor do segundo ao último valor
    {
      if(vetor[j]<vetor[min])    //acha um número menor que o númerom da primeira posição
       {
        min=j;                   // atribui a posição do numero achado à posição do menor numero
       }
    }
    if (i!=min)   //se tver achado um número menor
    {
      aux=vetor[i];    // auxiliar guarda o valor da primeira posição
      vetor[i]=vetor[min];  // insere o menor valor na primeira posição
      vetor[min]=aux;        // insere o valor que estava na primeira posição na posição do menor valor
    }
  }
  return (vetor);
}

/*o algoritmo possui complexidade O(n²) para qualquer caso,
pois ele executa as comparações idependente de já estar ordenado,
e executa comparações percorrendo o vetor com j dentro de i, por issotem complexidade n²
*/
