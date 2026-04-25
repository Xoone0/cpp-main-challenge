#include <stdio.h>

int main(void)
{
    int no, digits = 0;

    do {
        printf("请输入一个正整数：");
        scanf("%d", &no);
        if (no <= 0)
            puts("\a请不要输入非正整数。");
    } while (no <= 0);

    printf("%d的位数是", no);

    do {
        no /= 10;
        digits++;
    } while (no > 0);

    printf("%d。\n", digits);
    return 0;
}
