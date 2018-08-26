#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
    int i;
    int fat=n;
    for(i=n-1; i>0; i--)
    {
        fat=fat*i;
    }
    return fat;
}

int fatorialrec(int n)
{
    if (n==0)
    {
        return 1;
    }
    return n*fatorialrec(n-1);
}

void main (){
int x;
int y;
x=fatorial(6);
y=fatorialrec(6);
printf("%d\n%d",x, y);
}
