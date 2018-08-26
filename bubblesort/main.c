#include <stdio.h>
#include <stdlib.h>

int* bubblesort(int* vetor[], int tam)
{
    int i;
    int j;
    int aux;
    for(i=tam-1; i>0; i--) //percorre o vetor de tras pra frente o n�mero de vezes igual seu tamanho
    {
        for(j=0; j<i; j++) //percorre o vetor at� o i, pois os valores acima quando se estiver no meio da ordena��o j� estarao ordenados
        {
            if(vetor[j]>vetor[j+1]) //compara para fazer as trocas de posi��o
            {
                aux=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=aux;
            }
        }
    }
    return (vetor);
}


/*No melhor caso, o algoritmo executa n opera��es relevantes,
onde n representa o n�mero de elementos do vetor.
No pior caso, s�o feitas n^2 opera��es. A complexidade desse algoritmo � de Ordem quadr�tica.
Por isso, ele n�o � recomendado para programas que precisem de velocidade e operem com quantidade elevada de dados.
O m�todo de ordena��o do bolha, em termos gerais, consiste no pensamento de que as bolhas maiores sobem em um liquido,
isso quer dizer que os valores maiores ser�o "jogados" para o final do vetor. Isso, implementado na programa��o,
funciona atrav�s de compara��es de 2 a 2 no vetor. o primeiro valor � comparado ao segundo, caso seja maior, as posi��es
s�o trocadas, dai ent�o, o segundo � comparado ao terceiro, obedecendo ainda a condi��o, a posi��o � trocada. Dessa forma,
a cada vez que se percorre o vetor, pode-se garantir que o maior valor do vetor "subir�" para a ultima posi��o, analogo � maior bolha.
uma estrutura de repeti��o faz com que se percorra o vetor novamente, agora indo at� a pen�tima posi��o,
 para carregar a segunda maior bolha. Assim, obtem-se o vetor ordenado "de tr�s pra frente", sempre levando o maior valor � ultima posi��o,
 at� que todos estejam nas devidas posi��es, as olhas estejam em ordem crescente */
