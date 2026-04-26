#include <stdio.h>

#define MAX_STU 80

int main(void)
{
    int score[MAX_STU];
    int count[11] = {0};
    int num, i, j;

    printf("请输入学生人数: ");
    do {
        scanf("%d", &num);
        if (num < 1 || num > MAX_STU)
            printf("请输入 1 到 %d 之间的人数: ", MAX_STU);
    } while (num < 1 || num > MAX_STU);

    printf("请输入 %d 个学生的分数\n", num);
    for (i = 0; i < num; i++) {
        printf("NO.%d: ", i + 1);
        do {
            scanf("%d", &score[i]);
        } while (score[i] < 0 || score[i] > 100);
        count[score[i] / 10]++;
    }

    puts("\n--- 成绩分布图 ---");
    for (i = 0; i <= 9; i++) {
        printf("%3d - %3d: ", i * 10, i * 10 + 9);
        for (j = 0; j < count[i]; j++)
            putchar('*');
        putchar('\n');
    }
    printf("    100: ");
    for (j = 0; j < count[10]; j++)
        putchar('*');
    putchar('\n');

    return 0;
}
