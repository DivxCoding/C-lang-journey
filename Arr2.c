#include<stdio.h>

//array as function argument

void printNo1(int arr[],int n);
void printNo2(int *arr, int n);

int main()
{
    int arr[]={1,2,3,4,5,6};

    printNo1(arr,6);
    printNo2(arr,6);

    return 0;
}

void printNo1(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}

void printNo2(int *arr,int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}
