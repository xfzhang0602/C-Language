#define _CRT_SECURE_NO_WARNINGS 1


//1.д����������main������
//���ִ�С���C���Դ��������ĵ�һ�п�ʼִ�е�
//���Դ������main����-���


#include <stdio.h>
//std - standard - ��׼
//i intput - ����
//o output - ���

/*
int main() //int-�����������ͣ�main-������,��������
{		   //������
	printf("hellow world\n");//printf-�⺯��������Ļ�ϴ�ӡ��Ϣ�ģ���Ҫ����ͷ�ļ� stdio.h
							 //print format - ���ո�ʽ����ӡ��Ϣ
							 //""�������ı���Ϊ�ַ���
							 //\n - ����
	return 0;
}
*/

//����+����+���д��롪����ݼ���ctrl+f5

/*
//main�����Ķ���д��

//1
void main()
{
	printf("hehe\n");
}

//2.void��ʾmain����û�в���
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
	printf("%d\n",666);    //%d - ��ӡ����  //""�������ı���Ϊ�ַ���
	printf("%s\n", "haha");//%s - ��ӡ�ַ���
	printf("%c\n", 'q');   //&c - ��ӡ�ַ�//''�������������Ľ��ַ�
	printf("%f\n", 3.14);  //%f - ��ӡС��//%fĬ��С������ӡ6λ
	printf("%c\n", 'a');
	printf("%c\n", 97);

	//32-127
	//ѭ��
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
//�ַ������Դ�����ַ�������
int main()
{
	char arr1[] = "abcdefg";//arr1�а���\0,\0���ַ��������ı�־
	char arr2[] = { 'a','b','c','d','e','f','g' };//arr2��û��\0
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}
*/


/*
//strlen��һ���⺯�� - ���ַ����ĳ��ȣ�ͳ�Ƶ����ַ�����\0֮ǰ���ַ�����
//strlen.h
//strlen���ص�ֵ��size_t���͵ģ�Ӧ����%zd
#include <string.h>
int main()
{
	char arr1[] = "abcdefg";//arr1�а���\0,\0���ַ��������ı�־
	char arr2[] = { 'a','b','c','d','e','f','g','\0'};//arr2��û��\0
	printf("%zd\n", strlen(arr1)); //6
	printf("%zd\n", strlen(arr2)); //
	return 0;
}
*/

/*

//  \n - ���� ת���ַ�

int main()
{
	printf("abcndef");
	printf("abc\ndef");

	return 0;
}
*/

/*
//��֧������ĸ�ı�������
//??��--> ]
//??( --> [
int main()
{
	printf("(are you ok\?\?)"); //(are you ok]  \? - ��ֹ�����������ĸ��
	//(are you ok??)
	return 0;
}
*/

#include<string.h>
int main()
{
	printf("%c\n", 'a');
	printf("%c\n", 'b');
	printf("%c\n", '\''); // \'��ʾ'

	printf("%s\n", "abc");
	printf("%s\n", "a");
	printf("%s\n", "\""); // \"��ʾ"

	printf("c:\\test\\zxf");

	printf("\a");//ʹ�ն˱�������˸��ͬʱ����

	printf("abcdbef\n");
	printf("abcd\bef\n");// \b - �˸����������һ���ַ�������ɾ���ַ�

	//	printf("abcdef\r"); // \r - �س���������Ƶ�ͬһ�п�ͷ

	printf("a\tbc\tdef\t"); // \t - �Ʊ��������Ƶ���һ��ˮƽ�Ʊ�λ��ͨ������һ��4/8�ı���

	printf("%c\n", '\130'); //��\���8��������ת����10���Ƶ����֣����������ΪASCII��ֵ��ʾ���ַ�����
	printf("%c\n", '\77');

	printf("%c\n", '\x36');



	printf("%zd\n", strlen("abcdef"));//6
	printf("%zd\n", strlen("c:\test\zxf\114\test.c"));//16
	printf("%zd\n", strlen("c:\test\zxf\118\test.c"));//17
	return 0;
}