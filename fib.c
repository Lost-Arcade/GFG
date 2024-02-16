#include <stdio.h>

void FIB(int fib[] , int n);


void FIB(int fib[] , int n)
{
    fib[0]=0;
    fib[1]=1;

    printf("%d\t%d\t", fib[0] , fib[1] );

    for(int i=2 ; i<=n ; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d\t" , fib[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("enter the number of terms (n>2) :");
    scanf("%d", &n);

    int fib[n];

    FIB(fib , n);       

    return 0;                                  
   // {
   // for(int i=2 ; i<=n ; i++)
   //     fib[i] = fib[i-1] + fib[i-2];
   //     printf("%d\t" , fib[i]);
   // }
   // printf("\n");
}
