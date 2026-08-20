#include <stdio.h>

int main(void)
{
    int x = 42;
    int *p = &x;
    // int *p;

    *p = 100;

    printf("Value of x   = %d\n", x);
    /*  
        %d is for an int, but (void *) &x is for pointer. For pointers, use %p.
        printf("&x   = %d\n", (void *) &x); 
        printf("p   = %d\n", (void *) p);
    */
    printf("Address of x (&x)   = %p\n", (void *)&x);
    printf("Address stored in p = %p\n", (void *)p);
    printf("Value at the address stored in p (*p)   = %d\n", *p);

    return 0;

}