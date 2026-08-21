#include<stdio.h>
#include<stdint.h>

int main(void)
{

    uint8_t x = 255;
    
    printf("x     = %u\n", x);

    x = x + 1;

    printf("New x = %u\n",x);

    return 0;

}

