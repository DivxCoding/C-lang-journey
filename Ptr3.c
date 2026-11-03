#include<stdio.h>
//return multiple values 
//using Call by Reference

void calc(int *sum, int *prod, float *avg, int *a, int *b);

int main()
{
    int a,b,sum, prod;
    float avg;

    printf("Enter a,b:\n");
    scanf("%d %d",&a,&b);

    calc(&sum, &prod, &avg, &a, &b);
    printf("sum = %d\n", sum);
    printf("prod = %d\n", prod);
    printf("avg = %f\n", avg);
    return 0;
}

void calc(int *sum,int *prod,float *avg, int *a , int *b)
{
    
    *sum=(*a)+(*b);
    *prod=(*a)*(*b);
    *avg=(*sum)/2.0;
}
