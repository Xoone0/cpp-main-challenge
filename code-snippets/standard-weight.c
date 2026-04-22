#define _CRT_SECURE_NO_WARNINGSw
#include <stdio.h>
int main()
{
	int i = 0;
	printf("请输入您的身高:"); scanf("%d", &i);
	double sum = 0;
	sum = (i-100)*0.9;
	printf("您的体重是：%.1f公斤",sum);

}
//第二种写法
int main()
{
	int i = 0;
	printf("请输入您的身高:"); scanf("%d", &i);
	double sum = 0;
	sum = 0.9;
	printf("您的体重是：%.1f公斤",i * sum);

}

//第三种写法
int main()
{
	int i = 0;
	printf("请输入您的身高:"); scanf("%d", &i);
	printf("您的体重是：%.1f公斤",(double)(i - 100) * 0.9);

}