#include<stdio.h>
//break statement

int main()
{
    char ch='A'; //in C lang, quoted text should contain atleast one char
    while(ch!='P'||ch!='p')
    {
        printf("Enter ch:");
        scanf("\n %c",&ch);
        if(ch=='p'||ch=='P')
        {
            break;
        }
    }
    return 0;
}
//this loop code works till the inputted Char is not in "pP"
//just as the inputted number is in "pP", the break statement is executed
