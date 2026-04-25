#include <stdio.h>

int main(void)
{
    int no, original;

    do {
        printf("请输入一个正整数：");
        scanf("%d", &no);
        if (no <= 0)
            puts("\a请不要输入非正整数。");
    } while (no <= 0);

    original = no;
    printf("%d逆向显示的结果是", original);

    do {
        printf("%d", no % 10);
        no /= 10;
    } while (no > 0);

    printf("。\n");
    return 0;
}
