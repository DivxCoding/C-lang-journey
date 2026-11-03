#include <stdio.h> 
#include <conio.h>
int l,b;
void main()
{
    clrscr();
    printf("\nEnter l,b\n");
    scanf("%d %d", &l, &b);
    printf("\nArea is: %d", l*b);
    printf("\nPerimeter is: %d", 2*(l+b));
    getch();
}
