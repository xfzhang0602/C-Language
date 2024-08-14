#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>

#define NUM_PLAYERS 5
#define NUM_STROKES 4

// 定义选手在各个泳姿下的成绩 (时间，单位：秒)
double times[NUM_PLAYERS][NUM_STROKES] = {
    {66.8, 75.6, 87.0, 58.6},
    {57.2, 66.0, 66.4, 53.0},
    {78.0, 67.8, 84.6, 59.4},
    {70.0, 74.2, 69.6, 57.2},
    {67.4, 71.0, 83.8, 62.4}
};

// 用于标记选手是否已经被分配泳姿
int assigned[NUM_PLAYERS] = { 0 };

// 贪心算法来分配选手
void greedy_assignment(int best_solution[NUM_STROKES]) {
    for (int j = 0; j < NUM_STROKES; j++) {
        int best_player = -1;
        double best_time = INT_MAX;

        for (int i = 0; i < NUM_PLAYERS; i++) {
            if (!assigned[i] && times[i][j] < best_time) {
                best_time = times[i][j];
                best_player = i;
            }
        }

        // 记录最优选手和时间
        best_solution[j] = best_player;
        assigned[best_player] = 1;  // 标记该选手已经被分配
    }
}

int main() {
    int best_solution[NUM_STROKES];
    double total_time = 0.0;

    // 使用贪心算法分配选手
    greedy_assignment(best_solution);

    // 计算总时间
    for (int j = 0; j < NUM_STROKES; j++) {
        total_time += times[best_solution[j]][j];
    }

    // 输出最优解
    printf("最优时间为: %.2f 秒\n", total_time);
    printf("选手的最佳泳姿分配如下:\n");
    for (int j = 0; j < NUM_STROKES; j++) {
        printf("泳姿 %d: 选手 %d (时间: %.2f 秒)\n", j + 1, best_solution[j] + 1, times[best_solution[j]][j]);
    }

    return 0;
}
