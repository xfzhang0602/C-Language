#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <iostream>


/*

//дһ�������ӡ1 - 100֮������3�ı���������

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


//д���뽫�������������Ӵ�С�����
//���磺

//���룺2 3 1

//�����3 2 1

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




//��10 �����������ֵ
#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int maxNumber;

    // ����10������
    cout << "������10��������" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    // ��ʼ�����ֵΪ��һ����
    maxNumber = numbers[0];

    // �ҳ����ֵ
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    // ������ֵ
    cout << "���ֵ�ǣ�" << maxNumber << endl;

    return 0;
}


//��10 �����������ֵ
#include <iostream>
using namespace std;

int main() {
    int numbers[10], maxNumber;

    cout << "������10��������" << endl;     //��ʾ�û�����10��������
    for (int i = 0; i < 10; i++) {          //ʹ��forѭ����0��9��������
        cin >> numbers[i];                  //ÿ��ѭ����ȡһ���������洢�������С�
        if (i == 0 || numbers[i] > maxNumber) {     //�����ǰ�ǵ�һ��Ԫ�أ�i == 0�����ߵ�ǰԪ�ش���maxNumber�������maxNumber��
            maxNumber = numbers[i];
        }
    }

    cout << "���ֵ�ǣ�" << maxNumber << endl;
    return 0;
}



//��10 �����������ֵ
#include <stdio.h>

int main() {
    int numbers[10], maxNumber;

    printf("������10��������\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        if (i == 0 || numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    printf("���ֵ�ǣ�%d\n", maxNumber);
    return 0;
}



//������ͣ�����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����

#include <stdio.h>

int main() {
    double sum = 0.0; // ���ڴ洢�ۼӵĽ��
    int sign = 1; // ���ڽ���Ӽ��ķ��ţ���ʼΪ��

    // ѭ����1��100
    for (int i = 1; i <= 100; i++) {
        sum += sign * (1.0 / i); // �ۼӵ�ǰ�ע��ʹ��1.0��ȷ������������
        sign = -sign; // �л����ţ�ʵ�ֽ���Ӽ�
    }

    // ��ӡ���ս��
    printf("����ǣ�%f\n", sum);
    return 0;
}



//��9�ĸ�������д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9

#include <stdio.h>

int main() {
    int count = 0; // ���ڼ�¼����9���ֵĴ���

    // ����1��100����������
    for (int i = 1; i <= 100; ++i) {
        int num = i; // ��ǰ��������

        // ��鵱ǰ������ÿһλ�Ƿ�Ϊ9
        while (num > 0) {
            if (num % 10 == 9) { // �����ǰλ��������9
                ++count; // ��������1
            }
            num /= 10; // ȥ����ǰλ�����������һλ
        }
    }

    // ������
    printf("1��100�����������г�������9�ĸ����ǣ�%d\n", count);
    return 0;
}




//��ӡ���꣬��ӡ1000�굽2000��֮�������

#include <stdio.h>

int main() {
    printf("1000�굽2000��֮��������У�\n");

    for (int year = 1000; year <= 2000; ++year) {
        // �ж��Ƿ�Ϊ����
        // ����������ǣ��ܱ�4���������ܱ�100�����������ܱ�400����
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d\t", year); // ��ӡ����
        }
    }

    return 0;
}


//���������������������������Լ��
//���磺
//���룺20 40
//�����20



#include <stdio.h>

// ��������
int gcd(int a, int b);

int main() {
    int num1, num2;

    // ��ʾ�û�����������
    printf("����������������\n");
    scanf("%d %d", &num1, &num2);

    // ����gcd�����������Լ��
    int result = gcd(num1, num2);

    // ������
    printf("�������������Լ���ǣ�%d\n", result);

    return 0;
}

// ����gcd������ʹ��ŷ������㷨�������Լ��
int gcd(int a, int b) {
    // ʹ��ѭ��ֱ��bΪ0
    while (b != 0) {
        int temp = b; // ����b��ֵ
        b = a % b;    // ����bΪa����b������
        a = temp;     // ����aΪ֮ǰ�����b��ֵ
    }
    // ��bΪ0ʱ��a��Ϊ���Լ��
    return a;
}









//ɨ��

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 10
#define MINES 10

void initializeBoard(int board[ROWS][COLS], int mines[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            board[i][j] = -1; // -1��ʾδ�ҿ��ĸ���
            mines[i][j] = 0;  // 0��ʾû�е���
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
                printf("F"); // F��ʾ���Ϊ����
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
����
    KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳������Σ�����ܹ��������Σ��ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ���
����������
    ��Ŀ�ж����������ݣ�ÿһ����������a��b��c(0 < a, b, c < 1000)����Ϊ�����ε������ߣ��ÿո�ָ���
���������
    ���ÿ���������ݣ����ռһ�У�����ܹ��������Σ��ȱ��������������Equilateral triangle!���������������������Isosceles triangle!����������������������Ordinary triangle!������֮�����Not a triangle!����

#include <stdio.h>

int main() {
    int a, b, c; // ���������������������ڴ洢�����ε�������

    // ʹ��ѭ����ȡ�����������ݣ�ֱ���������
    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        // ����Ƿ��ܹ���������
        // �����β���ʽ����������֮�ʹ��ڵ�����
        if (a + b > c && a + c > b && b + c > a) {
            // �ж������ε�����
            if (a == b && b == c) {
                // �����������ȣ����ǵȱ�������
                printf("Equilateral triangle!\n");
            }
            else if (a == b || b == c || a == c) {
                // �����������ȣ����ǵ���������
                printf("Isosceles triangle!\n");
            }
            else {
                // ��������߶�����ȣ�������ͨ������
                printf("Ordinary triangle!\n");
            }
        }
        else {
            // ������ܹ��������Σ��������Not a triangle!��
            printf("Not a triangle!\n");
        }
    }
    return 0; // �������
}



//��ӡ99�˷���
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




//��ӡ100��200֮���������

#include <stdio.h>
#include <stdbool.h>

// �����������ж�һ�����Ƿ�Ϊ����
bool isPrime(int num);

int main() {
    printf("Prime numbers between 100 and 200 are:\n");

    // ����100��200֮���ÿһ����
    for (int i = 100; i <= 200; i++) {
        // ����isPrime�����жϵ�ǰ���Ƿ�Ϊ����
        if (isPrime(i)) {
            // ��������������ӡ����
            printf("%d ", i);
        }
    }

    // ��ӡ���з���ʹ���������
    printf("\n");

    // �������������0��ʾ�ɹ�ִ��
    return 0;
}

// �������壺�ж�һ�����Ƿ�Ϊ����
bool isPrime(int num) {
    // �����С�ڵ���1����������
    if (num <= 1) {
        return false;
    }

    // ��2��ʼ������Ƿ�������
    for (int i = 2; i * i <= num; i++) {
        // ����ҵ���������������
        if (num % i == 0) {
            return false;
        }
    }

    // ���û���ҵ���������������
    return true;
}





˼·��
������������������1���Լ�֮�⣬��û��������Լ�����������Ϊ���������巽ʽ����



//����һ���Գ���
int main()
{
    int i = 0;
    int count = 0;


    // ���ѭ��������ȡ100~200֮����������ݣ�100�϶��������������i��101��ʼ
    for (i = 101; i <= 200; i++)
    {
        //�ж�i�Ƿ�Ϊ��������[2, i)֮���ÿ������ȥ��i����ֻҪ��һ�����Ա���������������
        int j = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }

        // ����ѭ������֮�����j��i��ȣ�˵��[2, i��֮����������ݶ����ܱ�i��������iΪ����
        if (j == i)
        {
            count++;
            printf("%d ", i);
        }
    }


    printf("\ncount = %d\n", count);
    return 0;
}


//����������ȱ�ݣ�����iһ������ݣ��϶�����i�ı������������������û����������㣬��˿��Բ�������
// ��ʽ�����Ż�
// ��������ÿ�õ�һ�����ݣ�ֻ��Ҫ����䣺[2, i/2]�������Ƿ���Ԫ�ؿ��Ա�2i�������ɣ�����˵��i��������
int main()
{
    int i = 0;//
    int count = 0;


    for (i = 101; i <= 200; i++)
    {
        //�ж�i�Ƿ�Ϊ����
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





���������ǰ�����һЩ�ظ������ݣ����Ż���
���i�ܹ���[2, sqrt(i)]֮�������������������i��������
ԭ����� m �ܱ� 2 ~ m-1 ֮����һ������������������ӱض���һ��С�ڻ����sqrt(m)����һ�����ڻ���� sqrt(m)��

int main()
{
    int i = 0;
    int count = 0;


    for (i = 101; i <= 200; i++)
    {
        //�ж�i�Ƿ�Ϊ����
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


//����4

�����Է������Ż���ֻҪi����[2, sqrt(i)]֮����κ�������������i������������ʵ���ڲ���ʱi���ô�101�𽥵�����200����Ϊ����2��3֮�⣬�����������������ڵ�����ͬʱΪ����



int main()
{
    int i = 0;
    int count = 0;


    for (i = 101; i <= 200; i += 2)
    {
        //�ж�i�Ƿ�Ϊ����
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



//ɨ��

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
        printf("������Ҫ�Ų������:>");
        scanf("%d %d", &x, &y);
        if (x >= 1 && x <= row && y >= 1 && y <= col) {
            if (mine[x][y] == '1') {
                end = clock();
                printf("���ź����㱻ը����\n");
                DisplayBoard(mine, ROW, COL);
                printf("��ʱ: %.2f��\n", (double)(end - start) / CLOCKS_PER_SEC);
                break;
            }
            else {
                ExpandBoard(mine, show, x, y);
                DisplayBoard(show, ROW, COL);
                win++;
            }
        }
        else {
            printf("����Ƿ�����������\n");
        }
        printf("�Ƿ�����(1. ��, 0. ��):>");
        int mark;
        scanf("%d", &mark);
        if (mark == 1) {
            printf("������Ҫ��ǵ�����:>");
            scanf("%d %d", &x, &y);
            if (x >= 1 && x <= row && y >= 1 && y <= col) {
                MarkMine(show, x, y);
                DisplayBoard(show, ROW, COL);
            }
            else {
                printf("����Ƿ�����������\n");
            }
        }
    }
    if (win == row * col - EASY_COUNT) {
        end = clock();
        printf("��ϲ�㣬���׳ɹ�\n");
        DisplayBoard(mine, ROW, COL);
        printf("��ʱ: %.2f��\n", (double)(end - start) / CLOCKS_PER_SEC);
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
        printf("��ѡ��:>");
        scanf("%d", &input);
        switch (input) {
        case 1:
            game();
            break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("ѡ���������ѡ��\n");
            break;
        }
    } while (input);
    return 0;
}


