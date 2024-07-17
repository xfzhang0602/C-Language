#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("%d is greater than %d\n", a, b);
        return 0;
    }
}


#include <stdio.h>
int main()
{
    int age = 0;
    scanf("%d", &age);
    if (age >= 18 && age <= 36)
    {
        printf("青年\n");
    }
    return 0;
}



#include <stdio.h>
int main()
{
    int num = 0;
    scanf("%d", &num);
    if (num % 2 == 1)
        printf("%d 是奇数\n", num);
    else
        printf("%d 是偶数\n", num);
    return 0;
}


#include <stdio.h>
int main()
{
    int a = 0;
    int b = 2;
    if (a == 1)
    {
        if (b == 2)
            printf("hehe\n");
    }
    else
    {
        printf("haha\n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int age = 0;
    scanf("%d", &age);
    if (age >= 18 && age <= 36)
    {
        printf("青年\n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    if (a > 5)
        b = 3;
    else
        b = -3;
    printf("%d\n", b);
    return 0;
}


#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    b = a > 5 ? 3 : -3;
    printf("%d\n", b);
    return 0;
}



int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int m = a > b ? a : b;
    printf("%d\n", m);

    return 0;
}

int main()
{
    int flag = 0;
    if (!flag)
    {
        printf("do something\n");
    }
    return 0;
}


int main()
{
    int month = 0;
    scanf("%d", &month);
    if (month == 12 || month == 1 || month == 2)
    {
        printf("冬季\n");
    }
}


int main()
{
    int year = 0;
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0)
        printf("是闰年\n");
    else if (year % 400 == 0)
        printf("是闰年\n");

    return 0;
}

int main()
{
    int year = 0;
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("是闰年\n");

    return 0;
}


#include <stdio.h>
int main()
{
    int i = 0, a = 0, b = 2, c = 3, d = 4;
    i = a++ && ++b && d++;
    //i = a++||++b||d++;
    printf("i=%d\n a = %d\n b = %d\n c = %d\nd = %d\n", i,a, b, c, d);
    return 0;
}



int main()
 {
     int n = 0;
     scanf("%d", &n);
     switch (n)
         {
     case 1:
         printf("星期一\n");
         break;
     case 2:
         printf("星期二\n");
         break;
     case 3:
         printf("星期三\n");
         break;
     case 4:
         printf("星期四\n");
         break;
     case 5:
         printf("星期五\n");
         break;
     case 6:
         printf("星期六\n");
         break;
     case 7:
         printf("星期日\n");
         break;
     default:
         printf("输入错误\n");
         break;
     }
     return 0;
 }
 




int main()
{
    int day = 0;
    scanf("%d", &day);
    switch (day)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("工作日\n");
            break;
        case 6:
        case 7:
            printf("休息日\n");
            break;
    }
    return 0;
}



#include <stdio.h>
int main()
{
    if (1)
        printf("hehe\n"); //if后边条件满⾜，打印⼀次hehe
    return 0;
}



int main()
{
    while (1)
        printf("hehe\n"); //while后边的条件满⾜，死循环的打印hehe
    return 0;
}


int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}




int main()
{
    int i = 0;
    scanf("%d", &i);
    while (i )
    {
        printf("%d\n", i);
        i /= 10;
    }
    return 0;
}




int main()
 {
    int n = 0;
    scanf("%d", &n);
    while (n)
    {
         printf("%d ", n % 10);
         n /= 10;
    }
     return 0;
}


int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d ", i);
        i = i + 1;
    }
    return 0;
}



int main()
 {
     int n = 0;
     scanf("%d", &n);
     while (n)
         {
         printf("%d ", n % 10);
         n /= 10;
         }
     return 0;
     }




int main()
{
    int i = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    return 0;
}



int main()
{
    int i = 0;
    int sum = 0;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
            sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
//⼩⼩的优化
//如果能直接产⽣3的倍数的数字就省去了多余的循环和判断
#include <stdio.h>

int main()
{
    int i = 0;
    int sum = 0;
    for (i = 3; i <= 100; i += 3)
    {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}



int main()
{
    int i = 1;
    do
    {
        printf("%d ", i);
        i = i + 1;
    } while (i <= 10);

    return 0;
}



int main()
{
    int n = 0;
    scanf("%d", &n);
    int cnt = 0;
    do
    {
        cnt++;
        n = n / 10;
    } while (n);
    printf("%d\n", cnt);
    return 0;
}




int main()
{
    int i = 1;
    while (i <= 10)
    {
        if (i == 5)
            break;//当i等于5后，就执⾏break，循环就终⽌了
        printf("%d ", i);
        i = i + 1;
    }
    return 0;
}



int main()
 {
     int i = 1;
     while (i <= 10)
        {
         if (i == 5)
             continue;
         //当i等于5后，就执⾏continue，直接跳过continue的代码，去循环的判断的地⽅
             //因为这⾥跳过了i = i+1，所以i⼀直为5，程序陷⼊和死循环
             printf("%d ", i);
         i = i + 1;
         }
     return 0;
     }

*/

int main()
{
    int i = 1;
    do
    {
        if (i == 5)
            break;
        printf("%d ", i);
        i = i + 1;
    } while (i <= 10);
    return 0;
}

















