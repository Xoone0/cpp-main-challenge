//使用scanf读取输入的数值，并输出该整数减去6的结果
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int num = 6;
	int a = 0;
	printf("请输入一个整数:");
	scanf("%d",&a);
	printf("该整数减去6的结果是%d",a+num);
	return 0;
}

//另一种写法为
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int num = 6;
	int a = 0;
	printf("请输入一个整数:");
	scanf("%d",&a);
	int rum = 0;
	rum = a - num;
	printf("该整数加上12的结果是%d",rum);
	return 0;
}
/*在减法运算代码中a-b与常规数学算法不同，是从a的值中减去b的值*/