#include<stdio.h>

int fact(int n);

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Invalid Input");
    }
    int r=fact(n);
    printf("Factorial is:%d",r);
    return 0;
}

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    int factNm1=fact(n-1);
    int factN= factNm1*n;
    return factN;
}
