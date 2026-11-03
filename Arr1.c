#include<stdio.h>
int main()
{
    //various methods of input in arrays
    //traversing an array

    //__________
    //one by one

    int mks1[3];
    printf("enter phy:");
    scanf("%d",&mks1[0]);

    printf("enter chem:");
    scanf("%d",&mks1[1]);

    printf("enter phy:");
    scanf("%d",&mks1[2]);

    printf("phy:%d,chem=%d,maths=%d\n", mks1[0], mks1[1], mks1[2]);

    //___________
    //using index


    int mks2[3];

    //input loop
    printf("Enter mks in PCM:\n");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&mks2[i]);
    }

    //output loop
    printf("Marks in PCM are:\n");
    for(int i=0; i<3; i++)
    {
        printf("%d\n",mks2[i]);
    }

    //______________
    //using pointers

    int mks3[3];

    //input loop
    printf("Enter marks in PCM:\n");
    int *ptr = &mks3[0];
    for(int i=0; i<3; i++)
    {
        printf("%d index = ",i);
        scanf("%d",(ptr+i));
    }

    //output loop
    for(int i=0;i<3;i++)
    {
        printf("%d index = %d\n", i, (*ptr+i));
    }
    return 0;
}
