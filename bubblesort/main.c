#include <stdio.h>
#include <stdlib.h>

int* bubblesort(int* vetor[], int tam)
{
    int i;
    int j;
    int aux;
    for(i=tam-1; i>0; i--) //percorre o vetor de tras pra frente o número de vezes igual seu tamanho
    {
        for(j=0; j<i; j++) //percorre o vetor até o i, pois os valores acima quando se estiver no meio da ordenação já estarao ordenados
        {
            if(vetor[j]>vetor[j+1]) //compara para fazer as trocas de posição
            {
                aux=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=aux;
            }
        }
    }
    return (vetor);
}


/*No melhor caso, o algoritmo executa n operações relevantes,
onde n representa o número de elementos do vetor.
No pior caso, são feitas n^2 operações. A complexidade desse algoritmo é de Ordem quadrática.
Por isso, ele não é recomendado para programas que precisem de velocidade e operem com quantidade elevada de dados.
O método de ordenação do bolha, em termos gerais, consiste no pensamento de que as bolhas maiores sobem em um liquido,
isso quer dizer que os valores maiores serão "jogados" para o final do vetor. Isso, implementado na programação,
funciona através de comparações de 2 a 2 no vetor. o primeiro valor é comparado ao segundo, caso seja maior, as posições
são trocadas, dai então, o segundo é comparado ao terceiro, obedecendo ainda a condição, a posição é trocada. Dessa forma,
a cada vez que se percorre o vetor, pode-se garantir que o maior valor do vetor "subirá" para a ultima posição, analogo à maior bolha.
uma estrutura de repetição faz com que se percorra o vetor novamente, agora indo até a penútima posição,
 para carregar a segunda maior bolha. Assim, obtem-se o vetor ordenado "de trás pra frente", sempre levando o maior valor à ultima posição,
 até que todos estejam nas devidas posições, as olhas estejam em ordem crescente */
