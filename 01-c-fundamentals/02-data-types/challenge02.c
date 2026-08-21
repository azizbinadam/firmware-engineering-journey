#include<stdio.h>
#include<stdint.h>

int main(void)
{

    uint8_t buffer[4] = {10,20,30,40};
    uint8_t *p = buffer;

    printf("A: %zu Byte(s)\n", sizeof(buffer)); // 4 Bytes
    printf("B: %zu Byte(s)\n", sizeof(p)); // Potentially 8 Bytes
    printf("C: %zu Byte(s)\n", sizeof(*p)); // 1 Byte.

    printf("D: %u\n", *p); // 10. *p dereference p, accessing the value stored at the memory address contained in p.
    printf("E: %u\n", *(p+2)); // 30. *(p+2) moves the pointer by 2, and access its value.

    return 0;

}