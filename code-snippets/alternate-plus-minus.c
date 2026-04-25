#include <stdio.h>

int main(void)
{
    int no, i;

    printf("正整数：");
    scanf("%d", &no);

    for (i = 1; i <= no; i++) {
        if (i % 2 == 1)
            putchar('+');
        else
            putchar('-');
    }

    putchar('\n');
    return 0;
}
