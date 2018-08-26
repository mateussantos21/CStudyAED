#include<stdlib.h>
#include<stdio.h>

int menu()
{
    int escolha;
    printf("\n\nPilha Dinamica ");
    printf("\n\n(1) Exibir Pilha ");
    printf("\n(2) Insere elemento ");
    printf("\n(3) Inverter Pilha ");
    printf("\n(0) Sair ");
    printf("\nDe a opcao: ");
    scanf("%d", &escolha);
    return(escolha);
}

typedef struct pilha
{
    int num;
    struct pilha* prox;
}Pilha;

int printL(Pilha *P)
{
    if(P->prox==NULL)
    {
        printf("A Pilha esta vazia!!\n");
    }
    else
    {
        Pilha *aux,*dep;
        aux=P->prox;
        dep=P;
        int num=aux->num;
        while(dep->prox!=NULL)
        {
            int num=aux->num;
            dep=dep->prox;
            printf("%d - ",num);
            aux=aux->prox;
        }
    }
}

int incluir(Pilha *P)
{
    Pilha *aux,*dep;
    int num;
    aux=(Pilha *)malloc(sizeof(aux));
    printf("Digite o numero a ser incluido: \n");
    scanf("%d",&num);
    aux->num=num;
    aux->prox=NULL;
    if(P->prox==NULL)
    {
        P->prox=aux;
    }
    else
    {
        dep=P->prox;
        while(dep->prox!=NULL)
        {
            dep=dep->prox;
        }
        dep->prox=aux;
    }
}

int incluir_p(Pilha *P, int num)
{
    Pilha *aux,*dep;
    aux=(Pilha *)malloc(sizeof(aux));
    aux->num=num;
    aux->prox=NULL;
    if(P->prox==NULL)
    {
        P->prox=aux;
    }
    else
    {
        dep=P->prox;
        while(dep->prox!=NULL)
        {
            dep=dep->prox;
        }
        dep->prox=aux;
    }
}


int topo(Pilha *P,int tam)
{
    if(P->prox==NULL)
    {
    }
    else
    {
        int n,c=1;
        Pilha *aux,*dep;
        aux=P->prox;
        for(c;c<tam;c++)
        {
            aux=aux->prox;
        }
        n=aux->num;
        return(n);
    }
}


Pilha* inverter(Pilha * P, int tam)
{
    Pilha *I, *aux;
    I=malloc(sizeof(P));
    I->prox=NULL;
    int n;
    aux=P->prox;
    while(aux!=NULL)
    {
        n=topo(P,tam);
        tam--;
        incluir_p(I,n);
        aux=aux->prox;
    }
    P=I;
    printf("\nPilha invertida!");
    return(P);
}

int main()
{
    Pilha *P;
    P=malloc(sizeof(P));
    P->prox=NULL;
    int op=-1,tam=0;
    while(op!=0)
    {
        op=menu();
        switch(op)
            {
                case 1:
                    printL(P);
                    break;

                case 2:
                    incluir(P);
                    tam++;
                    break;

                case 3:
                    P=inverter(P,tam);
                    break;
            }
    }
    return 0;
}
