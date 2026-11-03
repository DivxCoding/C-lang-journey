#include<stdio.h>
#include<math.h>
//menu-driven program
//using functions

void printTable(int n);
void powering(int n);

int main()
{
    int n,ch;
    printf("Enter n:");
    scanf("%d",&n);
    printf("1. Print Table \n2. Square of a number \nEnter your choice:");
    scanf("%d",&ch);
    if(ch==1)    //Menu-Driven-Program
    {
        printTable(n);
    }
    else if(ch==2)
    {
        powering(n);
    }
    else{
        printf("Wrong input");
    }
    return 0;
}

void printTable(int n)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d x %d = %d \n", n, i, n*i);
    }
}

void powering(int n)
{
    printf("%f", pow(n,2));
}
