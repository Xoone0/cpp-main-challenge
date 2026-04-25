#include <stdio.h>

int main(void)
{
    int no, temp;

    printf("正整数：");
    scanf("%d", &no);

    temp = no;
    while (no-- > 0)
        putchar('*');

    if (temp >= 1)
        putchar('\n');

    return 0;
}
