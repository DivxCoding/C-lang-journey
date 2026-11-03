#include<stdio.h>
//2D Arrays

int main()
{
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    int arr2[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter[%d],[%d]:",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("[%d],[%d]:%d\n",i,j,arr2[i][j]);
            
        }
    }

    return 0;
}
