#include <stdio.h>

int main(void)
{
    int x = 42;
    int *p = &x;

    *p = 100;

    printf("x   = %d\n", x);
    printf("&x   = %d\n", (void *) &x);
    printf("p   = %d\n", (void *) p);
    printf("*p   = %d\n", *p);

    return 0;

}