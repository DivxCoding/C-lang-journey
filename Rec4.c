#include<stdio.h>

int fibb(int n);

int main()
{
    int n,r;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Nth Fibonacci number is:%d\n", fibb(n));
    return 0;
    
}

int fibb(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 0+1;
    }
    int fibbNm1= fibb(n-1);
    int fibbNm2= fibb(n-2);
    int fibbN= fibbNm1 + fibbNm2;
    printf("%d\n",fibbN);
    return fibbN;
}
