#include <stdio.h>

#define MAX_STU 80

int main(void)
{
    int score[MAX_STU];
    int count[11] = {0};
    int num, i, j, max;

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

    max = count[0];
    for (i = 1; i < 11; i++)
        if (count[i] > max)
            max = count[i];

    printf("\n   ----- 成绩分布图 -----\n");
    for (j = max; j > 0; j--) {
        for (i = 0; i < 11; i++) {
            if (count[i] >= j)
                printf(" *  ");
            else
                printf("    ");
        }
        putchar('\n');
    }
    printf("-------------------------------------------\n");
    for (i = 0; i <= 100; i += 10)
        printf("%3d ", i);
    putchar('\n');

    return 0;
}
