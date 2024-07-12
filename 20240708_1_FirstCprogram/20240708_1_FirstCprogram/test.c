#define _CRT_SECURE_NO_WARNINGS 1


//1.写出主函数（main函数）
//如何执行——C语言从主函数的第一行开始执行的
//所以代码得有main函数-入口


#include <stdio.h>
//std - standard - 标准
//i intput - 输入
//o output - 输出

/*
int main() //int-函数返回类型，main-函数名,程序的入口
{		   //函数体
	printf("hellow world\n");//printf-库函数，在屏幕上打印信息的，需要引用头文件 stdio.h
							 //print format - 按照格式来打印信息
							 //""括起来的被称为字符串
							 //\n - 换行
	return 0;
}
*/

//编译+链接+运行代码——快捷键：ctrl+f5

/*
//main函数的多种写法

//1
void main()
{
	printf("hehe\n");
}

//2.void表示main函数没有参数
int main(void)
{
	reyurn 0;
}

int main()
{
	return 0;
}

//3
int main(int argc, char* argv[])
{
	return 0;
}
*/

/*

int main()
{
	printf("%d\n",666);    //%d - 打印整数  //""括起来的被称为字符串
	printf("%s\n", "haha");//%s - 打印字符串
	printf("%c\n", 'q');   //&c - 打印字符//''单引号括起来的叫字符
	printf("%f\n", 3.14);  //%f - 打印小数//%f默认小数点后打印6位
	printf("%c\n", 'a');
	printf("%c\n", 97);

	//32-127
	//循环
	int i = 0;
	for (i = 32; i <= 127; i++)
	{
		printf("%c", i);
	}

	printf("\n");
	printf("%s\n", "abcdefg");
	printf("abcdefg");

	return 0;
}

*/

/*
//字符串可以存放在字符数组中
int main()
{
	char arr1[] = "abcdefg";//arr1中包含\0,\0是字符串结束的标志
	char arr2[] = { 'a','b','c','d','e','f','g' };//arr2中没有\0
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}
*/


/*
//strlen是一个库函数 - 求字符串的长度，统计的是字符串中\0之前的字符个数
//strlen.h
//strlen返回的值是size_t类型的，应该用%zd
#include <string.h>
int main()
{
	char arr1[] = "abcdefg";//arr1中包含\0,\0是字符串结束的标志
	char arr2[] = { 'a','b','c','d','e','f','g','\0'};//arr2中没有\0
	printf("%zd\n", strlen(arr1)); //6
	printf("%zd\n", strlen(arr2)); //
	return 0;
}
*/

/*

//  \n - 换行 转义字符

int main()
{
	printf("abcndef");
	printf("abc\ndef");

	return 0;
}
*/

/*
//在支持三字母的编译器上
//??）--> ]
//??( --> [
int main()
{
	printf("(are you ok\?\?)"); //(are you ok]  \? - 防止被解译成三字母词
	//(are you ok??)
	return 0;
}
*/

#include<string.h>
int main()
{
	printf("%c\n", 'a');
	printf("%c\n", 'b');
	printf("%c\n", '\''); // \'表示'

	printf("%s\n", "abc");
	printf("%s\n", "a");
	printf("%s\n", "\""); // \"表示"

	printf("c:\\test\\zxf");

	printf("\a");//使终端报警或闪烁或同时发生

	printf("abcdbef\n");
	printf("abcd\bef\n");// \b - 退格键，光标回退一个字符，但不删除字符

	//	printf("abcdef\r"); // \r - 回车符，光标移到同一行开头

	printf("a\tbc\tdef\t"); // \t - 制表符，光标移到下一个水平制表位，通常是下一个4/8的倍数

	printf("%c\n", '\130'); //将\后的8进制数字转换成10进制的数字，这个数字作为ASCII码值表示的字符就是
	printf("%c\n", '\77');

	printf("%c\n", '\x36');



	printf("%zd\n", strlen("abcdef"));//6
	printf("%zd\n", strlen("c:\test\zxf\114\test.c"));//16
	printf("%zd\n", strlen("c:\test\zxf\118\test.c"));//17
	return 0;
}