#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    int32_t *c = malloc(sizeof(int32_t));
    *c = 0x65746166;

    printf("%s\n", (char *)c);
    return 0;
}
