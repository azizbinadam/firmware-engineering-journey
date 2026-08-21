#include <stdio.h>
#include <stdint.h>

int main(void)
{

    printf("char    :    %zu byte(s)\n", sizeof(char));
    printf("int     :    %zu byte(s)\n", sizeof(int));
    printf("uint8_t :    %zu byte(s)\n", sizeof(uint8_t));
    printf("uint16_t:    %zu byte(s)\n", sizeof(uint16_t));
    printf("uint32_t:    %zu byte(s)\n", sizeof(uint32_t));
    printf("uint64_t:    %zu byte(s)\n", sizeof(uint64_t));

    return 0;
}