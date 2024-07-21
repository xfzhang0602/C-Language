#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
 

/*
 int Add(int x, int y)
 {
	int z = 0;
	z = x + y;
	return z;
 }
*/
int Add(int x, int y)
{
	return x + y;
}



int main()
{
	int a = 0;
	int b = 0;
	//输⼊
	scanf("%d %d", &a, &b);
	//调⽤加法函数，完成a和b的相加
	//求和的结果放在r中
	int r = Add(a, b);
	//输出
	printf("%d\n", r);
	return 0;
}