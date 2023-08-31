#include <stdio.h>
#include "main.h"

int main(void)
{
    int n;

    n = get_endianness();
    printf("%d\n", n);
    if (n != 0)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
    return (0);
}
