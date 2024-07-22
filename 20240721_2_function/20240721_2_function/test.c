#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
 

/*
 int Add(int x, int y)
 {
	int z = 0;
	z = x + y;
	return z;
 }

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



#include <stdio.h>
void set_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = -1;
	}
	printf("\n");
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	set_arr(arr, sz);//设置数组内容为-1
	print_arr(arr, sz);//打印数组内容
	return 0;
}




int is_leap_year(int y)
// 判断给定的年份是否为闰年
{
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		return 1;
	else
		return 0;
}
int get_days_of_month(int y, int m)
// 获取指定年份和月份的天数
{
	int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	            // 0  1   2   3   4   5    6   7  8   9   10  11  12
	int day = days[m];
	if (is_leap_year(y) && m == 2)  //如果年份 y 是闰年且月份是二月份（即 m == 2），则将天数 day 加 1。
		day += 1;

	return day;
}
int main()
// 主函数，读取年份和月份，输出该月份的天数
{
	int y = 0;
	int m = 0;
	scanf("%d %d", &y, &m);
	int d = get_days_of_month(y, m);
	printf("%d\n", d);
	return 0;
}




//链式访问
#include <stdio.h>
int main()
{
	//int len = strlen("abcdef");//1.strlen求⼀个字符串的⻓度
	//printf("%d\n", len);//2.打印⻓度 

	printf("%d\n", strlen("abcdef"));

	return 0;
}



#include <stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}


//printf函数返回的是打印在屏幕上的字符的个数。
//上⾯的例⼦中，我们就第⼀个printf打印的是第⼆个printf的返回值，第⼆个printf打印的是第三个
//printf的返回值。
//第三个printf打印43，在屏幕上打印2个字符，再返回2
//第⼆个printf打印2，在屏幕上打印1个字符，再放回1
//第⼀个printf打印1
//所以屏幕上最终打印：4321



*/


#include "add.h"


//定义
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





/*
void test()
{
	int i = 1;
	i++;
	printf("%d ", i);
}
int main()
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		test();
	}
	return 0;
}





#include <stdio.h>
void test()
{
	//static修饰局部变量
	static int i = 0;
	i++;
	printf("%d ", i);
}
int main()
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		test();
	}
	return 0;
}




#include <stdio.h>
extern int g_val;
int main()
{
	printf("%d\n", g_val);
	return 0;
}


*/












