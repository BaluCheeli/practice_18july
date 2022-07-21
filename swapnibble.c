#include <stdio.h>
int main()
{
    unsigned char data = 100;
    printf("%u\n", data);
    //swapping nibbles
    data = (((data & 0x0F)<<4) | ((data & 0xF0)>>4));
    printf("%u\n", data);
    return 0;
}

