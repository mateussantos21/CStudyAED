#include <stdio.h>
#include <stdlib.h>

typedef struct listacircular{
    int info;
    int prox;
}Listacircular;

Listacircular vet[50];
int vazia;
int L;
int num;

void insere(num){
    if (vazia<50){
    vet[vazia].info=num;
    if (vazia==0){
    vet[vazia].prox=vazia;
    L=vazia;
    vazia++;
    }
    else {
        vet[L].prox=vazia;
        vet[vazia].prox=0;
        L=vazia;
        vazia++;
    }
    }
    else{
        printf("fila esgotada \n\n");
    }
}


void imprime (){
    int i;
    i=0;
    for (i; i<=L; i++){
            printf ("%d - ", vet[i].info);
    }
    }


int main () {
    printf("LISTA CIRCULAR\n\n");
    vazia=0;
    L=-1; 
    int sair;
    int auxiliar;
    int num;
    sair=0;
    while (sair==0){
        printf("\n\n(1) Insere elemento\n");
        printf("(2) Imprime a lista com o valor 7 apos os valores par \n");
        printf("(0) Sair\n");
        printf("de a opcao: ");
        scanf("%d", &auxiliar);
        if (auxiliar==1){
            printf("\nQual numero deseja empilhar: ");
            scanf("%d", &num);
            if(num%2==0){
            	insere(num);
            	insere(7);
			}
			else{
				insere(num);
			}
        }
        else if (auxiliar==2){
        	printf("\n\nLista Circular com o valor 7 inserido apos os numeros pares : \n\n ");
            imprime();
            sair=1;
        }
        else{
            sair=1;
        }
    }
        return 0;
}
