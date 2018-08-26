#include <stdio.h>
#include <stdlib.h>

void mergesort(int *V, int inicio, int fim)  //fun��o margesort, recursiva.
{
   int meio;                            // a fun��o trabalha dividindo o vetor at� que ele
   if(inicio<fim)                       //se torne v�rios vetores de apenas um elemento
   {
       meio=(inicio+fim)/2;              // declara o meio do vetor
       mergesort(V, inicio, meio);       // divide  vetor, j� utilizando a mesma fun��o para dividir cada parte separadamente
       mergesort(V, meio+1, fim);
       merge(V, inicio, meio, fim);      // ultiliza a fun��o merge abaixo para juntar o vetor novamente,
   }                                // porem ordenando-o a medida que se junta
}

void merge(int *V, int inicio, int meio, int fim)  // fun��o que ordena
{
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1=0, fim2=0;
    tamanho=fim-inicio+1;
    p1=inicio;             // indices dos vetores que ser�o combinados ordenadamente
    p2=meio+1;
    temp=(int*)malloc(tamanho*sizeof(int));
/* temp � um ponteiro que aloca mem�ria, guardando temporariamente os valores
    ordenados, para depos retornar ao vetor V. tem tamanho igual ao tamanho do vetor
    */
    if(temp!=NULL)
    {
        for(i=0; i<tamanho; i++)
        {
            if(!fim1 && !fim2)  // condi��o para comparar os dois vetores..
            {                   // fim1 e fim2 s�o os parametros que definem se os vetores ja acabaram de ser inseridos ou n�o
                if(V[p1]<V[p2])    // compara os valores pra executar a inser��o no nvetor tempor�rio
                    temp[i]=V[p1++];
                else
                    temp[i]=V[p2++];

                if(p1>meio)  // da a condi��o para sair da compara��o caso um dos vetores acabe
                    fim1=1;
                if(p2>fim)
                    fim2=1;

            }
            else            // insere o resto do vetor que n�o acabou ainda na condi��o anterior
            {
                if(!fim1)
                    temp[i]=V[p1++];
                else
                    temp[i]=V[p2++];
            }
        }
        for(j=0, k=inicio; j<tamanho; j++, k++)   // retorna os valores do vetor temporario para o vetor original
        {
            V[k]=temp[j];
        }
    }
    free(temp);   // libera o tempor�rio
}

void main() // teste
{
    int v[10]={5, 9, 3, 0, 7, 1, 2, 8, 6, 4};
    int i=0;
    mergesort(v, 0, 9);
    for(i; i<10; i++)
    {
        printf("%d, ", v[i]);
    }
    system("pause");
    return 0;
}

/* O m�todo tem complexidade O(nlogn) para qualquer caso, pois divide o problema em problemas menores e une as solu��es.
� um algoritmo est�vel, ou seja, n�o altera a ordem de dados iguais
tem a desvantagem de ser recursivo, e usar um vetor auxiliar durante a ordena��o, gastanto mais memoria livre
O algoritmo de ordena��o Mergesort trabalha sobre o m�todo de divis�o e conquista, funcionando da seguinte maneira:
recursivamente, o vetor se divide em vetores menores, at� que se tenha um n�mero n de "vetores" (entre aspas pois
se cria novos vetores, apenas trabalha com cada posi��o separadamente) cada um contendo um elemento.
A ordena��o acontece conforme o vetor � reunido, o programa compara de dois a dois os vetores divididos formando com eles
vetores ordenados. A principio, os "vetores" unitarios s�o comparados para se formar um vetor de duas posi��es, com o menor
valor na primeira posi��o, em seguida, continua a compara��o de dois a dois, sempre comparando os valores nos dois vetores
a serem reunidos para que se forme com 2, um que contenha o npumero de elementos da soma dos dois comparados, e seus elementos
estejam de forma ordenada. Ao final teremos reunido todas as partes que foram divididas no primeiro passo do algoritmo, contudo,
de forma ordenada, pelas opera��es executadas durante o processo de uni�o das partes divididas*/
