#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <iostream>


/*

//写一个代码打印1 - 100之间所有3的倍数的数字

#include <stdio.h>
#include <iostream>

int main() {
    for (int i = 1; i <= 100; ++i) {
        if (i % 3 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}


//写代码将三个整数数按从大到小输出。
//例如：

//输入：2 3 1

//输出：3 2 1

#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a >= b && a >= c) {
        if (b >= c) {
            std::cout << a << " " << b << " " << c << std::endl;
        }
        else {
            std::cout << a << " " << c << " " << b << std::endl;
        }
    }
    else if (b >= a && b >= c) {
        if (a >= c) {
            std::cout << b << " " << a << " " << c << std::endl;
        }
        else {
            std::cout << b << " " << c << " " << a << std::endl;
        }
    }
    else {
        if (a >= b) {
            std::cout << c << " " << a << " " << b << std::endl;
        }
        else {
            std::cout << c << " " << b << " " << a << std::endl;
        }
    }

    return 0;
}







int main()

{

    int a, b, c, d;

    scanf("%d %d\n", &a, &b);

    c = a / b; d = a % b;

    printf("%d %d\n", c, d);

    return 0;

}




//求10 个整数中最大值
#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int maxNumber;

    // 输入10个整数
    cout << "请输入10个整数：" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    // 初始化最大值为第一个数
    maxNumber = numbers[0];

    // 找出最大值
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    // 输出最大值
    cout << "最大值是：" << maxNumber << endl;

    return 0;
}


//求10 个整数中最大值
#include <iostream>
using namespace std;

int main() {
    int numbers[10], maxNumber;

    cout << "请输入10个整数：" << endl;     //提示用户输入10个整数。
    for (int i = 0; i < 10; i++) {          //使用for循环从0到9遍历数组
        cin >> numbers[i];                  //每次循环读取一个整数并存储到数组中。
        if (i == 0 || numbers[i] > maxNumber) {     //如果当前是第一个元素（i == 0）或者当前元素大于maxNumber，则更新maxNumber。
            maxNumber = numbers[i];
        }
    }

    cout << "最大值是：" << maxNumber << endl;
    return 0;
}



//求10 个整数中最大值
#include <stdio.h>

int main() {
    int numbers[10], maxNumber;

    printf("请输入10个整数：\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        if (i == 0 || numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    printf("最大值是：%d\n", maxNumber);
    return 0;
}



//分数求和，计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

#include <stdio.h>

int main() {
    double sum = 0.0; // 用于存储累加的结果
    int sign = 1; // 用于交替加减的符号，初始为正

    // 循环从1到100
    for (int i = 1; i <= 100; i++) {
        sum += sign * (1.0 / i); // 累加当前项，注意使用1.0以确保浮点数除法
        sign = -sign; // 切换符号，实现交替加减
    }

    // 打印最终结果
    printf("结果是：%f\n", sum);
    return 0;
}



//数9的个数，编写程序数一下 1到 100 的所有整数中出现多少个数字9

#include <stdio.h>

int main() {
    int count = 0; // 用于记录数字9出现的次数

    // 遍历1到100的所有整数
    for (int i = 1; i <= 100; ++i) {
        int num = i; // 当前检查的整数

        // 检查当前整数的每一位是否为9
        while (num > 0) {
            if (num % 10 == 9) { // 如果当前位的数字是9
                ++count; // 计数器加1
            }
            num /= 10; // 去掉当前位，继续检查下一位
        }
    }

    // 输出结果
    printf("1到100的所有整数中出现数字9的个数是：%d\n", count);
    return 0;
}




//打印闰年，打印1000年到2000年之间的闰年

#include <stdio.h>

int main() {
    printf("1000年到2000年之间的闰年有：\n");

    for (int year = 1000; year <= 2000; ++year) {
        // 判断是否为闰年
        // 闰年的条件是：能被4整除但不能被100整除，或者能被400整除
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d\t", year); // 打印闰年
        }
    }

    return 0;
}


//给定两个数，求这两个数的最大公约数
//例如：
//输入：20 40
//输出：20



#include <stdio.h>

// 函数声明
int gcd(int a, int b);

int main() {
    int num1, num2;

    // 提示用户输入两个数
    printf("请输入两个整数：\n");
    scanf("%d %d", &num1, &num2);

    // 调用gcd函数计算最大公约数
    int result = gcd(num1, num2);

    // 输出结果
    printf("这两个数的最大公约数是：%d\n", result);

    return 0;
}

// 定义gcd函数，使用欧几里得算法计算最大公约数
int gcd(int a, int b) {
    // 使用循环直到b为0
    while (b != 0) {
        int temp = b; // 保存b的值
        b = a % b;    // 更新b为a除以b的余数
        a = temp;     // 更新a为之前保存的b的值
    }
    // 当b为0时，a即为最大公约数
    return a;
}









//扫雷

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 10
#define MINES 10

void initializeBoard(int board[ROWS][COLS], int mines[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            board[i][j] = -1; // -1表示未揭开的格子
            mines[i][j] = 0;  // 0表示没有地雷
        }
    }
}

void placeMines(int mines[ROWS][COLS]) {
    int count = 0;
    while (count < MINES) {
        int row = rand() % ROWS;
        int col = rand() % COLS;
        if (mines[row][col] == 0) {
            mines[row][col] = 1;
            count++;
        }
    }
}

int countAdjacentMines(int mines[ROWS][COLS], int row, int col) {
    int count = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            int newRow = row + i;
            int newCol = col + j;
            if (newRow >= 0 && newRow < ROWS && newCol >= 0 && newCol < COLS) {
                count += mines[newRow][newCol];
            }
        }
    }
    return count;
}

void revealCell(int board[ROWS][COLS], int mines[ROWS][COLS], int row, int col) {
    if (row < 0 || row >= ROWS || col < 0 || col >= COLS || board[row][col] != -1) {
        return;
    }
    int count = countAdjacentMines(mines, row, col);
    board[row][col] = count;
    if (count == 0) {
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                revealCell(board, mines, row + i, col + j);
            }
        }
    }
}

void printBoard(int board[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (board[i][j] == -1) {
                printf(".");
            }
            else if (board[i][j] == -2) {
                printf("F"); // F表示标记为地雷
            }
            else {
                printf("%d", board[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int board[ROWS][COLS];
    int mines[ROWS][COLS];
    int gameOver = 0;

    srand(time(NULL));

    initializeBoard(board, mines);
    placeMines(mines);

    while (!gameOver) {
        printBoard(board);
        int row, col;
        printf("Enter row and column to reveal (0-%d, 0-%d): ", ROWS - 1, COLS - 1);
        scanf("%d %d", &row, &col);

        if (mines[row][col] == 1) {
            printf("Boom! You hit a mine.\n");
            gameOver = 1;
        }
        else {
            revealCell(board, mines, row, col);
        }
    }

    return 0;
}






/*
描述
    KiKi想知道已经给出的三条边a，b，c能否构成三角形，如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
输入描述：
    题目有多组输入数据，每一行输入三个a，b，c(0 < a, b, c < 1000)，作为三角形的三个边，用空格分隔。
输出描述：
    针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出“Equilateral triangle!”，等腰三角形则输出“Isosceles triangle!”，其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”。

#include <stdio.h>

int main() {
    int a, b, c; // 声明三个整数变量，用于存储三角形的三条边

    // 使用循环读取多组输入数据，直到输入结束
    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        // 检查是否能构成三角形
        // 三角形不等式：任意两边之和大于第三边
        if (a + b > c && a + c > b && b + c > a) {
            // 判断三角形的类型
            if (a == b && b == c) {
                // 如果三条边相等，则是等边三角形
                printf("Equilateral triangle!\n");
            }
            else if (a == b || b == c || a == c) {
                // 如果两条边相等，则是等腰三角形
                printf("Isosceles triangle!\n");
            }
            else {
                // 如果三条边都不相等，则是普通三角形
                printf("Ordinary triangle!\n");
            }
        }
        else {
            // 如果不能构成三角形，则输出“Not a triangle!”
            printf("Not a triangle!\n");
        }
    }
    return 0; // 程序结束
}



//打印99乘法表
#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%-2d ", j, i, i * j);
        }
        printf("\n");
    }
    return 0;
}




//打印100到200之间的素数：

#include <stdio.h>
#include <stdbool.h>

// 函数声明：判断一个数是否为素数
bool isPrime(int num);

int main() {
    printf("Prime numbers between 100 and 200 are:\n");

    // 遍历100到200之间的每一个数
    for (int i = 100; i <= 200; i++) {
        // 调用isPrime函数判断当前数是否为素数
        if (isPrime(i)) {
            // 如果是素数，则打印该数
            printf("%d ", i);
        }
    }

    // 打印换行符，使输出更美观
    printf("\n");

    // 程序结束，返回0表示成功执行
    return 0;
}

// 函数定义：判断一个数是否为素数
bool isPrime(int num) {
    // 如果数小于等于1，则不是素数
    if (num <= 1) {
        return false;
    }

    // 从2开始，检查是否有因数
    for (int i = 2; i * i <= num; i++) {
        // 如果找到因数，则不是素数
        if (num % i == 0) {
            return false;
        }
    }

    // 如果没有找到因数，则是素数
    return true;
}





思路：
素数：即质数，除了1和自己之外，再没有其他的约数，则该数据为素数，具体方式如下



//方法一：试除法
int main()
{
    int i = 0;
    int count = 0;


    // 外层循环用来获取100~200之间的所有数据，100肯定不是素数，因此i从101开始
    for (i = 101; i <= 200; i++)
    {
        //判断i是否为素数：用[2, i)之间的每个数据去被i除，只要有一个可以被整除，则不是素数
        int j = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }

        // 上述循环结束之后，如果j和i相等，说明[2, i）之间的所有数据都不能被i整除，则i为素数
        if (j == i)
        {
            count++;
            printf("%d ", i);
        }
    }


    printf("\ncount = %d\n", count);
    return 0;
}


//上述方法的缺陷：超过i一半的数据，肯定不是i的倍数，上述进行了许多没有意义的运算，因此可以采用如下
// 方式进行优化
// 方法二：每拿到一个数据，只需要检测其：[2, i/2]区间内是否有元素可以被2i整除即可，可以说明i不是素数
int main()
{
    int i = 0;//
    int count = 0;


    for (i = 101; i <= 200; i++)
    {
        //判断i是否为素数
        //2->i-1
        int j = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        //...
        if (j > i / 2)
        {
            count++;
            printf("%d ", i);
        }
    }


    printf("\ncount = %d\n", count);
    return 0;
}





方法二还是包含了一些重复的数据，再优化：
如果i能够被[2, sqrt(i)]之间的任意数据整除，则i不是素数
原因：如果 m 能被 2 ~ m-1 之间任一整数整除，其二个因子必定有一个小于或等于sqrt(m)，另一个大于或等于 sqrt(m)。

int main()
{
    int i = 0;
    int count = 0;


    for (i = 101; i <= 200; i++)
    {
        //判断i是否为素数
        //2->i-1
        int j = 0;
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        //...
        if (j > sqrt(i))
        {
            count++;
            printf("%d ", i);
        }
    }


    printf("\ncount = %d\n", count);
    return 0;
}


//方法4

继续对方法三优化，只要i不被[2, sqrt(i)]之间的任何数据整除，则i是素数，但是实际在操作时i不用从101逐渐递增到200，因为出了2和3之外，不会有两个连续相邻的数据同时为素数



int main()
{
    int i = 0;
    int count = 0;


    for (i = 101; i <= 200; i += 2)
    {
        //判断i是否为素数
        //2->i-1
        int j = 0;
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        //...
        if (j > sqrt(i))
        {
            count++;
            printf("%d ", i);
        }
    }

    printf("\ncount = %d\n", count);
    return 0;
}

*/



//扫雷

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define EASY_COUNT 10

void menu() {
    printf("***********************\n");
    printf("***** 1. play *****\n");
    printf("***** 0. exit *****\n");
    printf("***********************\n");
}

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            board[i][j] = set;
        }
    }
}

void DisplayBoard(char board[ROWS][COLS], int row, int col) {
    for (int i = 0; i <= row; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 1; i <= row; i++) {
        printf("%d ", i);
        for (int j = 1; j <= col; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

void SetMine(char mine[ROWS][COLS], int row, int col) {
    int count = EASY_COUNT;
    while (count) {
        int x = rand() % row + 1;
        int y = rand() % col + 1;
        if (mine[x][y] == '0') {
            mine[x][y] = '1';
            count--;
        }
    }
}

int GetMineCount(char mine[ROWS][COLS], int x, int y) {
    return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] +
        mine[x][y - 1] + mine[x][y + 1] +
        mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
}

void ExpandBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y) {
    if (x >= 1 && x <= ROW && y >= 1 && y <= COL) {
        int count = GetMineCount(mine, x, y);
        if (count == 0 && show[x][y] == '*') {
            show[x][y] = ' ';
            for (int i = -1; i <= 1; i++) {
                for (int j = -1; j <= 1; j++) {
                    ExpandBoard(mine, show, x + i, y + j);
                }
            }
        }
        else {
            show[x][y] = count + '0';
        }
    }
}

void MarkMine(char show[ROWS][COLS], int x, int y) {
    if (show[x][y] == '*') {
        show[x][y] = '!';
    }
    else if (show[x][y] == '!') {
        show[x][y] = '*';
    }
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
    int x, y;
    int win = 0;
    clock_t start, end;
    start = clock();
    while (win < row * col - EASY_COUNT) {
        printf("请输入要排查的坐标:>");
        scanf("%d %d", &x, &y);
        if (x >= 1 && x <= row && y >= 1 && y <= col) {
            if (mine[x][y] == '1') {
                end = clock();
                printf("很遗憾，你被炸死了\n");
                DisplayBoard(mine, ROW, COL);
                printf("用时: %.2f秒\n", (double)(end - start) / CLOCKS_PER_SEC);
                break;
            }
            else {
                ExpandBoard(mine, show, x, y);
                DisplayBoard(show, ROW, COL);
                win++;
            }
        }
        else {
            printf("坐标非法，重新输入\n");
        }
        printf("是否标记雷(1. 是, 0. 否):>");
        int mark;
        scanf("%d", &mark);
        if (mark == 1) {
            printf("请输入要标记的坐标:>");
            scanf("%d %d", &x, &y);
            if (x >= 1 && x <= row && y >= 1 && y <= col) {
                MarkMine(show, x, y);
                DisplayBoard(show, ROW, COL);
            }
            else {
                printf("坐标非法，重新输入\n");
            }
        }
    }
    if (win == row * col - EASY_COUNT) {
        end = clock();
        printf("恭喜你，排雷成功\n");
        DisplayBoard(mine, ROW, COL);
        printf("用时: %.2f秒\n", (double)(end - start) / CLOCKS_PER_SEC);
    }
}

void game() {
    char mine[ROWS][COLS];
    char show[ROWS][COLS];
    InitBoard(mine, ROWS, COLS, '0');
    InitBoard(show, ROWS, COLS, '*');
    DisplayBoard(show, ROW, COL);
    SetMine(mine, ROW, COL);
    FindMine(mine, show, ROW, COL);
}

int main() {
    int input = 0;
    srand((unsigned int)time(NULL));
    do {
        menu();
        printf("请选择:>");
        scanf("%d", &input);
        switch (input) {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误，重新选择\n");
            break;
        }
    } while (input);
    return 0;
}


