#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*


int main() {
    printf("Hello, \nWorld!\n");
    return 0;
}



int main() 
{
    printf("%dabc\n",100);//%d占位符
    return 0;
}

#include <stdio.h>
int main()
{
    printf("%s says it is %d o'clock\n", "lisi", 21);
    return 0;
}




#include <stdio.h>
int main()
{
    printf("%d\n", 123);
    printf("%5d\n", 123);//最少输出5位，不够用空格补齐
    printf("%05d\n", 123);//最少输出5位，不够用0补齐
    printf("%-5d\n", 123);//左对齐，不够用空格补齐
    printf("%0-5d\n", 123);//左对齐，不够用0补齐
    printf("%+d\n", 123);//显示正负号
    printf("% d\n", 123);//显示正负号和空格
    printf("%0+d\n", 123);//显示正负号和0
    printf("%0 d\n", 123);//显示正负号和0和空格
    printf("%#x\n", 123);//显示16进制
    printf("%#X\n", 123);//显示16进制大写
    printf("%#o\n", 123);//显示8进制
    printf("%#d\n", 123);//显示10进制
    printf("%e\n", 123.456);//显示科学计数法
    printf("%E\n", 123.456);//显示科学计数法大写
    printf("%f\n", 123.456);//显示浮点数
    printf("%g\n", 123.456);//显示最简浮点数
    printf("%G\n", 123.456);//显示最简浮点数大写
    printf("%a\n", 123.456);//显示十六进制浮点数
    printf("%.2f\n", 123.456);//显示小数点后2位
    printf("%.3f\n", 123.456);//显示小数点后3位
    printf("%.4f\n", 123.456);//显示小数点后4位
    printf("%.5f\n", 123.456);//显示小数点后5位
    printf("%s\n", "Hello, World!");//显示字符串
    printf("%c\n", 'a');//显示单个字符
    printf("%p\n", &main);//显示指针
    printf("%d\n", 12345678901234567890);//显示超出范围的数字
    printf("%lld\n", 12345678901234567890);//显示长整数
    printf("%llu\n", 1234567890);//显示无符号长整数
    printf("%hd\n", 12345);//显示短整数
    printf("%hu\n", 12345);//显示无符号短整数
    printf("%c\n", 123);//显示非法字符
    printf("%d\n", 123.456);//显示非法数字
    printf("%d\n", 123e45);//显示非法数字
    printf("%d\n", 123.456e78);//显示非法数字
    printf("%d\n", 123L);//显示非法数字

    return 0;
}


int main()
{
    printf("%12.1lf\n", 123.45);
    printf("%*.*lf\n", 12, 1, 123.45);
    printf("%*.*lf\n", 12, 1, 123.45);

    return 0;
}



int main()
{
    printf("%s\n", "abcdef");
    printf("%.4s\n", "abcdef");

    return 0;
}



int main()
{
    int score = 0;
    printf("请输入成绩：");
    scanf("%d",&score );//输入操作
    //scanf函数中占位符的后面的参数需要的是地址
    //&取地址操作符，将变量的地址传给scanf函数
    printf("您的成绩是：%d\n",score);
    return 0;
}



int main()
{
    int a = 0;
    int b = 0;
    float f1 = 0.0;
    float f2 = 0.0;

    scanf("%d %d %f %f", a,b,&f1,&f2);
    printf("%d %d %f %f\n", a, b, f1, f2);

    return 0;
}


int main()
{
    int x;
    float y;

    // ⽤⼾输⼊ " -13.45e12# 0"
    scanf("%d", &x);
    printf("%d\n", x);
    scanf("%f", &y);
    printf("%f\n", y);  //浮点数有可能在内存中无法精确保存，因此输出结果可能与实际不符
    
    scanf("%d %f", &x,&y);
    printf("%d %f\n", x,y);
    
    
    return 0;
}




int main()
{
    int a = 0;
    int b = 0;

    scanf("%d %d ", &a, &b);
    printf("%d %d\n", a, b);

    return 0;
}



int main()
{
    int a = 0;
    int b = 0;
    float f = 0.0f;
    int r = scanf("%d %d %f", &a, &b, &f);
    printf("a=%d b=%d f=%f\n", a, b, f);
    printf("r = %d\n", r);
    return 0;
}

int main()
{
    char arr[20]={0};//数组
    scanf("%s", arr);//arr是数组名，数组名是地址
    printf("%s\n", arr);
    return 0;
}


int main()
{
    int year = 0;
    int month = 0;
    int day = 0;
    scanf("%d-%d-%d", &year, &month, &day);
    printf("%d %d %d\n", year, month, day);
    return 0;
}

int main()
{
    int year = 0;
    int month = 0;
    int day = 0;
    scanf("%d%*c%d%*c%d", &year, &month, &day);
    printf("%d %d %d\n", year, month, day);
    return 0;
}


int main()
{
    int num = 0;
    //输入
    scanf("%d", &num);
    //判断和输出
    if (num % 2 == 1)
        printf("%d is odd\n",num);
    else
        printf("%d is even\n",num);
    return 0;
}



int main()
{
    int age = 0;
    //输入
    scanf("%d", &age);
    //判断和输出
    if (age>=18)
    {
        printf("成年\n", age);
        printf("成年\n", age);
    }
    else
    {
        printf("未成年\n", age);
        printf("未成年\n", age);
    }
    return 0;
}



int main()
{
    int num = 0;
    //输入
    scanf("%d", &num);
    //判断和输出
    if (num == 0)
        printf("num is zero\n");
    else 
    {
        if (num > 0)
        printf("num is positive\n");
        else
        printf("num is negative\n");
    }
    return 0;
}

*/


/*输⼊⼀个⼈的年龄
如果年龄<18岁，打印"少年"
如果年龄在18岁⾄44岁打印"⻘年"
如果年龄在45岁⾄59岁打印"中⽼年"
如果年龄在60岁⾄89岁打印"⽼年"
如果90岁及以上打印"⽼寿星
*/
int main()
{
    int age = 0;
    //输入
    scanf("%d", &age);
    //判断和输出
    if (age<18)
        printf("少年\n");
    else if (age<=44)
        printf("青年\n");
    else if (age<=59)
        printf("中老年\n");
    else if (age<=89)
        printf("老年\n");
    else
        printf("寿星\n");
    return 0;
}








