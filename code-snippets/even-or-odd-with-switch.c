#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    /* 正奇数余数为 1，负奇数余数为 -1 */
    switch (no % 2) {
        case 0:
            printf("该整数是偶数。\n");
            break;
        case 1:
        case -1:
            printf("该整数是奇数。\n");
            break;
    }

    return 0;
}
