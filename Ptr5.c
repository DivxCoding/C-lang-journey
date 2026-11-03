#include<stdio.h>
int main()
{
    //demostrate use of * and & operators
    int i=300,*pi;
    float fl=3.005f,*pf;
    char ch='z',*pc;

    pi=&i;
    pf=&fl;
    pc=&ch;

    printf("Address of:\n");
    printf("i:%p,fl=%p,ch=%p\n",&i,&fl,&ch);

    printf("Value at Address of:\n");
    printf("i:%d,fl=%f,ch=%c\n",*(&i),*(&fl),*(&ch));

    printf("Address of:\n");
    printf("i:%p,fl=%p,ch=%p\n",pi,pf,pc);

    printf("Value at Address of:\n");
    printf("i:%d,fl=%f,ch=%c\n",*(pi),*(pf),*(pc));
    return 0;
}
