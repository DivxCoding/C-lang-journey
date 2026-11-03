#include<stdio.h>
int main()
{
    int age=22;
    int *p=&age;

    //value at address of age
    printf("%d\n",age);
    printf("%d\n",*p);
    printf("%d\n",*(&age));

    return 0;
}
