#include <stdio.h>

int main(void)
{
    int i;
    int v[5];

    // 依次赋值为 5, 4, 3, 2, 1
    for (i = 5; i > 0; i--) {
        v[5 - i] = i;
    }

    for (i = 0; i < 5; i++)
        printf("v[%d] = %d\n", i, v[i]);

    return 0;
}
