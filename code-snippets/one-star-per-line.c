#include <stdio.h>

int main(void)
{
    int no, i;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    for (i = 0; i < no; i++)
        printf("*\n");

    return 0;
}
