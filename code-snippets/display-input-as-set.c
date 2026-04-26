#include <stdio.h>

#define MAX 80

int main(void)
{
    int data[MAX];
    int num, i;

    printf("请输入数值个数: ");
    do {
        scanf("%d", &num);
        if (num < 0 || num > MAX)
            printf("请输入 0 到 %d 之间的个数: ", MAX);
    } while (num < 0 || num > MAX);

    printf("请输入 %d 个数\n", num);
    for (i = 0; i < num; i++) {
        printf("第 %d 个数: ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("{");
    if (num > 0) {
        printf("%d", data[0]);
        for (i = 1; i < num; i++)
            printf(", %d", data[i]);
    }
    printf("}\n");

    return 0;
}
