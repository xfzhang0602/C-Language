#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>


/*
//完全初始化
int arr[5] = { 1,2,3,4,5 };

//不完全初始化
int arr2[6] = { 1 };//第⼀个元素初始化为1，剩余的元素默认初始化为0

//错误的初始化 - 初始化项太多
int arr3[3] = { 1, 2, 3, 4 };





int main()
{
	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
	printf("%d\n", arr[2][4]);
	return 0;
}



#include <stdio.h>
int main()
{
	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
	int i = 0;//遍历⾏
	//输⼊
	for (i = 0; i < 3; i++) //产⽣⾏号
	{
		int j = 0;
		for (j = 0; j < 5; j++) //产⽣列号
		{
			scanf("%d", &arr[i][j]); //输⼊数据
		}
	}
	//输出
	for (i = 0; i < 3; i++) //产⽣⾏号
	{
		int j = 0;
		for (j = 0; j < 5; j++) //产⽣列号
		{
			printf("%d ", arr[i][j]); //输出数据
		}
		printf("\n");
	}
	return 0;
}




#include <stdio.h>
 int main()
 {
	 int arr[3][5] = { 0 };
	 int i = 0;
	 int j = 0;
	 for (i = 0; i < 3; i++)
		 {
		 for (j = 0; j < 5; j++)
			 {
			 printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
			 }
		 }
	 return 0;
	 }





//变长数组
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);//根据输⼊数值确定数组的⼤⼩
	int arr[n];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}




//练习1：多个字符从两端移动，向中间汇聚
#include <stdio.h>
int main()
{
	// 定义两个字符数组，分别存储源字符串和目标字符串
	char arr1[] = "hellow,world!!!!!";
	char arr2[] = "#################";
	// 定义左右指针，用于字符串的替换操作
	int left = 0;
	int right = strlen(arr1) - 1;
	// 打印初始状态的目标字符串
	printf("%s\n", arr2);
	// 循环替换字符串中的字符
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
		Sleep(1000);// 暂停1000毫秒（1秒）
		system("cls");// 清屏
	}
	printf("%s\n", arr2);
	return 0;
}




#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 7;//要找的数字
	int mid = 0;//记录中间元素的下标
	int find = 0;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			find = 1;
			break;
		}
	}
	if (1 == find)
		printf("找到了,下标是%d\n", mid);
	else
		printf("找不到\n");
}


*/
















