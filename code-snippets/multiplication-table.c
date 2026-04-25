#include <stdio.h>

int main(void)
{
    int i, j;

    printf("   |");
    for (j = 1; j <= 9; j++)
        printf("%3d", j);

    printf("\n-------------------------------\n");

    for (i = 1; i <= 9; i++) {
        printf("%2d |", i);
        for (j = 1; j <= 9; j++)
            printf("%3d", i * j);
        putchar('\n');
    }

    return 0;
}
