#include <stdio.h>

void print_3d(const int data[2][4][3])
{
    int exam, s, subj;
    for (exam = 0; exam < 2; exam++) {
        printf("第%d次考试:\n", exam + 1);
        for (s = 0; s < 4; s++) {
            for (subj = 0; subj < 3; subj++)
                printf("%4d", data[exam][s][subj]);
            putchar('\n');
        }
    }
}

void sum_3d(const int data[2][4][3], int sum[4][3])
{
    int s, subj;
    for (s = 0; s < 4; s++)
        for (subj = 0; subj < 3; subj++)
            sum[s][subj] = data[0][s][subj] + data[1][s][subj];
}

int main(void)
{
    int tensu[2][4][3] = {
        {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}},
        {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}}
    };
    int total[4][3] = {0};
    int s, subj;

    puts("两次考试分数：");
    print_3d(tensu);

    sum_3d(tensu, total);
    puts("总分：");
    for (s = 0; s < 4; s++) {
        for (subj = 0; subj < 3; subj++)
            printf("%4d", total[s][subj]);
        putchar('\n');
    }

    return 0;
}
