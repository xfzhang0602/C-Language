#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

/*
int main()
{
	printf("abcdefg\b");  //\b - 退格键

	return 0;
}
*/


/*
//空语句，一个分号就是一条语句
int main()
{
	;  //空语句

	return 0;
}
*/


/*
//表达式语句
int main()
{
	int a=20;
	int b = 0;
	b = a + 5;  //在分号后面加上表达式语句
	printf("%d\n",b);
	return 0;
}
*/


/*
//函数调用语句
int Add(int x,int y)
{
	return x + y;
}

int main()
{
	printf("hehe\n");//函数调用语句
	int ret = Add(2, 3);//函数调用语句
	return 0;
}
*/



//C语言数据类型和变量
/*
整型
short - 短整型
int - 整型
long - 长整型
long long更长的整型


浮点型  小数也叫浮点数
float - 单精度浮点型
double - 双精度浮点型
long double 
*/

/*
表示真 / 假的变量 - 布尔值
_bool
布尔类型的使用得包含头文件<stdbool.h>

#include <stdbool.h>
int main()
{
	_Bool flag = true;
	bool flag2 = false;
	if (flag)
		printf("wtf\n");

	return 0;
}
*/

/*
//sizeof 操作符
int main()
{
	printf("%zd\n", sizeof(char));
	printf("%zd\n", sizeof(short));
	printf("%zd\n", sizeof(int));
	printf("%zd\n", sizeof(long));
	printf("%zd\n", sizeof(long long));
	printf("%zd\n", sizeof(float));
	printf("%zd\n", sizeof(double));
	printf("%zd\n", sizeof(long double));
	return 0;
}
*/

//字节：计算机中的单位  bit：比特位 Byte：字节 KB MB GB PB TB...
//1 Byte = 8 bit   1 KB = 1024 Byte

/*
#include <stdio.h>
#include <limits.h>
int main()
{
	int a = 10;
	printf("%zd\n", sizeof(int));
	printf("%zd\n", sizeof(a));
	printf("%zd\n", sizeof a);

	printf("int 存储大小 : %lu \n", sizeof(int));
	return 0;
}
*/



/*
int main()
{
	int a = 10;
	printf("%d\n",a);
	printf("%zd\n", sizeof(a));
	printf("%zd\n", sizeof(_Bool));
	return 0;
}
*/

/*
int main()
{
	short s = 2;
	int b = 10;
	printf("%zd\n", sizeof(s=b+1));//sizeof中表达式不计算
	printf("s=%d\n",s);
	return 0;
}




int main()
{
	//signed --- 带符号的int

	signed int num = 100;
	num = -200;

	//unsigned --- 无符号的int 
	unsigned int num2 = 100;
	num2 = 1000;

	return 0;
}



//int =signen int 是有符号的int
//对于有符号的整数打印应该使用%d，对于无符号整数打印应该使用%u。
int main()
{
	int num=-100;
	printf("%d\n",num);
	return 0;
}


#include<stdbool.h>

int num = 100;//全局变量

int main()
{
	//局部变量
	unsigned int age=10;//初始化
	age=20;//赋值
	char ch='q';
	float score=3.14f;
	double weight=4.5;
	bool flag = 'ture';

	return 0;
}



int main()
{
	int num = 10;
	printf("%d\n", num);
	return 0;
}



int main()
{
	printf("%d\n", 1+3); //+是（双目，有两个操作数）操作符，数字为操作数
	int a = 10;
	int b = 20;
	printf("%d\n", a+b); 
	printf("%d\n", a + 5);
	return 0;
}



int main()
{
	printf("%d\n", 1 + 3); //+是（双目，有两个操作数）操作符，数字为操作数
	int a = 10;
	int b = 20;
	printf("%d\n", a * b);
	printf("%d\n", a * 5);
	return 0;
}



int main()
{
	
	printf("%d\n", 9/3);
	printf("%d\n", 10/4);
	printf("%f\n", 10 / 4.0);
	printf("%f\n", 10.0 / 4);
	printf("%f\n", 10.0 / 4.0);
	return 0;
}



int main()
{
	int score = 5;
	score = (score / 20.0) * 100;
	printf("%d\n", score);
	return 0;
}



int main()
{
	printf("%d\n", 10 % 3); //求余数

	return 0;
}


#include <stdio.h>
int main()
{
	printf("%d\n", 11 % -5); // 1
	printf("%d\n", -11 % -5); // -1
	printf("%d\n", -11 % 5); // -1
	return 0;
}


int main()
{
	int a = 100;//=赋值操作符
	a = 200;
	printf("%d\n", a);
	return 0;
}

int main()
{
int a = 3;
int b = 5;
int c = 0;
c = b = a + 3;//连续赋值，从右向左依次赋值的。
printf("%d\n", c);
printf("%d\n", b);
return 0;
}



int main()
{
	int a = 10;
	a = a + 3;
	a = a - 2;
	a += 3;  //复合赋值符
	a -= 2;
	printf("%d\n", a);
	return 0;
}



//++ --
int main()
{
	int a = 5;
	//a=a+1;a自增1
	a++;
	printf("%d\n", a);
	return 0;
}



*/
int main()
{
//int a = 3.14;//a的是int类型, 3.14是double类型，两边的类型不⼀致，编译器会报警告
int a = (int)3.14;//意思是将3.14强制类型转换为int类型，这种强制类型转换只取整数部分
printf("%d\n", a);
return 0;
}





