#include<stdio.h>
//demonstrate how to return pointer from function
int * sum(int*a, int *b, int *result);

int main()
{
    int a=5, b=10, result, *s;
    s=sum(&a,&b,&result); //receive pointer
    printf("sum is %d",*s);
    return 0;
}

int * sum(int *a, int *b, int *result)
{
    //return pointer
    *result= (*a)+(*b);
    
    return result;
}
