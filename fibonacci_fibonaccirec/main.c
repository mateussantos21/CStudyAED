#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
    int fib;
    int fib1=1;
    int fib2=1;
    int i;
    for(i=3; i<=n; i++){
       fib=fib1+fib2;
       fib1=fib2;
       fib2=fib;
}
return fib;
}

int fibonaccirec(int n)
{
    if (n==1 || n==2){
        return 1;
    }
    return fibonaccirec(n-1)+fibonaccirec(n-2);
}

void main()
{
    int x;
    int y;
    x=fibonacci(7);
    y=fibonaccirec(7);
    printf("%d\n%d", x, y);
}
