#include <stdio.h>
#include <stdlib.h>

typedef struct fila1{
    int info;
    int prox;
}Fila1;

Fila1 vet1[50];
int vazia;
int num;
int inicio;

void inclui1(num){
    if (vazia<50){
    vet1[vazia].info=num;
    if (vazia==0){
    vet1[vazia].prox=-1;
    inicio=0;
    vazia++;
    }
    else {
        vet1[vazia-1].prox=vazia;
        vet1[vazia].prox=-1;
        vazia++;
    }
    }
    else{
        printf("fila esgotada \n\n");
    }
}

void tiraelemento(){
inicio++;
}

void imprimefila1(){
    int aux;
    aux=inicio;
    while (aux!=-1){
        printf(" %d - ", vet1[aux].info);
        aux=vet1[aux].prox;
    }
}

typedef struct fila2{
    int info;
    int prox;
}Fila2;

Fila2 vet2[50];
int vazia1;
int num1;
int inicio1;

void inclui2(num1){
    if (vazia1<50){
    vet2[vazia1].info=num1;
    if (vazia1==0){
    vet2[vazia1].prox=-1;
    inicio1=0;
    vazia1++;
    }
    else {
        vet2[vazia1-1].prox=vazia1;
        vet2[vazia1].prox=-1;
        vazia1++;
    }
    }
    else{
        printf("fila esgotada \n\n");
    }
}

void tiraelemento1(){
inicio1++;
}

void imprimefila2(){
    int aux1;
    aux1=inicio1;
    while (aux1!=-1){
        printf(" %d - ", vet2[aux1].info);
        aux1=vet2[aux1].prox;
    }
}

int main ()
{
    printf("FILA ESTATICA\n\n");
    vazia=0;
    inicio=-1;
    vazia=0;
    int sair;
    int auxiliar;
    int num;
    sair=0;
    while (sair==0){
        printf("\n\n[1] para inserir numero [0] para sair e imprimir as duas filas, de pares e de impares: ");
        scanf("%d", &auxiliar);
        if (auxiliar==1){
            printf("\ndigite o numero que deseja inserir: ");
            scanf("%d", &num);
            if (num%2==0){
                inclui1(num);
            }
            else{
                inclui2(num);
            }
        }
        else{
            sair=1;
        }
    }
     printf("\nFila dos pares: ");
     imprimefila1();
     printf("\nFila dos impares: ");
     imprimefila2();
     return 0;
}



