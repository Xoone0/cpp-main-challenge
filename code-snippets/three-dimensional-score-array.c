#include <stdio.h>

int main(void)
{
    // 三维数组：2 次考试 × 4 个学生 × 3 门科目
    int scores[2][4][3] = {
        {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}},
        {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}}
    };
    int exam, student, subject;

    for (exam = 0; exam < 2; exam++) {
        printf("\n第 %d 次考试的分数：\n", exam + 1);
        for (student = 0; student < 4; student++) {
            printf("学生 %d: ", student + 1);
            for (subject = 0; subject < 3; subject++)
                printf("%4d", scores[exam][student][subject]);
            putchar('\n');
        }
    }

    return 0;
}
