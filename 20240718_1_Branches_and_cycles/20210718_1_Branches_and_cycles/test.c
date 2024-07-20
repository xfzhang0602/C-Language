#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
int main()
{
	int i = 0;
	//循环产⽣100~200的数字
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		//循环产⽣2~i-1之间的数字
		int j = 0;
		int flag = 1;//假设i是素数
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			printf("%d ", i);
	}
	return 0;
}



#include <stdio.h>
int main()
{
	printf("hehe\n");
	goto next;
	printf("haha\n");

next:
	printf("跳过了haha的打印\n");
	return 0;
}



int main()
{
	//设置随机数的生成起点（种子）
	srand((unsigned int)time(NULL));
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n ", rand());
	}
	return 0;
}


*/





/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void game()
{
	int r = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		printf("请猜数字>:");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("猜小了\n");
		}
		else if (guess > r)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

void menu()
{
	printf("***********************\n");
	printf("****** 1. play ******\n");
	printf("****** 0. exit ******\n");
	printf("***********************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//viod表示函数不返回任何值
void menu()
{
	printf("*************\n");
	printf("****1.play*****\n");
	printf("****0.exit*****\n");
	printf("*************\n");
}

void game()

{
	//1.生成随机数
	int r = rand() % 100 + 1;
	//2.玩家输入数字
	int guess = 0;
	while (1)
	{
		printf("请输入数字:");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("猜小了\n");
		}
		else if (guess > r)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}



int main()
{
	int input=0;
	//设置随机数的生成起点（种子）
	//只需调用一次即可
	srand((unsigned int)time(NULL));
	do
	{
		//打印菜单
		menu();

		//选择

		printf("请选择:");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	}while (input);
	return 0;
}

*/


int main()
{
/*	

	int arr[10];
	int i;
	
	//一维数组的创建

	int math[2];//声明一个长度为20的整型数组
	char ch[5];
	double arr[6];

	//创建和初始化
	int math[2] = {1,2};
	char ch[5] = {'a','b'};
	double arr[6] = {1.1,2.2,3.3,4.4,5.5,6.6};
	return 0;


	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", arr[9]);

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}


	//给数组输入10个值

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	//打印数组的内容
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}


	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("&arr[%d] = %p\n ", i, &arr[i]);
	}

*/

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int a = 0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	printf("%d\n", sizeof(a));//单位是字节
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(arr));
	printf("%d\n", sz);

	for(int i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}






	return 0;
}


