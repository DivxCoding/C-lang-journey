#include<stdio.h>
int main()
{
    // demonstrate how to handle pointers
    int m;
    int *ab;

    m=29;
    printf("m: Adress=%p, Value=%d\n", &m, m);

    ab = &m;
    printf("ab: Address stored=%p, Value on address=%d\n", ab, *ab);

    m=34;
    printf("ab: Address stored=%p, Value on address=%d\n", ab, *ab);

    *ab=37;
    printf("m: Adress=%p, Value=%d\n", &m, m);

    return 0;
}
