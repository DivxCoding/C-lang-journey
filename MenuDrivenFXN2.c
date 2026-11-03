#include<stdio.h>
//menu-driven program
//using functions

float sqArea(int a);
float rectArea(int a, int b);
float cirArea(int a);

void main()
{
    int ch,a,b;
    float r;
    printf("1. Area of Square \n2. Area of Rectangle \n3. Area of Circle\n");
    printf("Enter Your Choice : ");
    scanf("%d", &ch);
    

    if(ch==1||ch==2||ch==3)
    {
        printf("Enter a number : ");
        scanf("%d",&a);

        if(ch==1)
        {
            r=sqArea(a);
            printf("Result is %f",r);
        }
        else if(ch==2)
        {
            printf("Enter another number : ");
            scanf("%d",&b);
            r=rectArea(a,b);
            printf("Result is : %f",r);
        }
        else if(ch==3)
        {
            r=cirArea(a);
            printf("Result is : %f",r);
        }
        
    }
    else{
        
        printf("Invalid Input.");
    }
    
}


float sqArea(int a)
{
    return a*a;
}

float rectArea(int a, int b)
{
    return a*b;
}

float cirArea(int a)
{
    return 3.14*2*a;
}
