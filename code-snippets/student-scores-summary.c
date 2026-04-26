#include <stdio.h>

#define STUDENTS 6

int main(void)
{
    int language[STUDENTS];
    int math[STUDENTS];
    int i;
    int total_lang = 0, total_math = 0;

    printf("请输入 6 名学生的语文与数学成绩：\n");
    for (i = 0; i < STUDENTS; i++) {
        printf("\n第 %d 名语文成绩: ", i + 1);
        scanf("%d", &language[i]);
        printf("第 %d 名数学成绩: ", i + 1);
        scanf("%d", &math[i]);
        total_lang += language[i];
        total_math += math[i];
    }

    printf("\n六名同学各自的平均分与各科分数：\n");
    printf("--------------------------------------\n");
    for (i = 0; i < STUDENTS; i++) {
        double avg = (language[i] + math[i]) / 2.0;
        printf("%d 号同学：语文 %d, 数学 %d, 平均分 %.1f\n",
               i + 1, language[i], math[i], avg);
    }

    printf("\n语文数学总分与平均分\n");
    printf("-------------------------\n");
    printf("语文总分 %d, 平均分 %.2f\n", total_lang, total_lang / (double)STUDENTS);
    printf("数学总分 %d, 平均分 %.2f\n", total_math, total_math / (double)STUDENTS);

    return 0;
}
