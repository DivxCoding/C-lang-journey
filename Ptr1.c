#include<stdio.h>
int main()
{
    int age=22;
    int *p=&age;

    //address in hexadecimal
    printf("%p\n",&age);
    printf("%p\n",p);
    printf("%p\n",&p);

    //address in unsigned int
    printf("%u\n",&age);
    printf("%u\n",p);
    printf("%u\n",&p);

    return 0;
}
