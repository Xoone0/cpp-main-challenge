#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int vx, vy;
	printf("请输入一个整数:"); scanf("%d", &vx);
	printf("请再输入一个整数:"); scanf("%d", &vy);
	int num = vx + vy;
	int sum = vx * vy;
	printf("他们的和是%d,他们的积是%d",num,sum);

	return 0;
}
//由上述代码得到的启发
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int vx, vy;
	printf("请输入一个整数:"); scanf("%d", &vx);
	printf("请再输入一个整数:"); scanf("%d", &vy);
	printf("他们的和是%d,他们的积是%d",vx + vy,vx * vy);
	return 0;
}