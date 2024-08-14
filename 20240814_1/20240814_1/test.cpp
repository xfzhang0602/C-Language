#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>

#define NUM_PLAYERS 5
#define NUM_STROKES 4

// ����ѡ���ڸ���Ӿ���µĳɼ� (ʱ�䣬��λ����)
double times[NUM_PLAYERS][NUM_STROKES] = {
    {66.8, 75.6, 87.0, 58.6},
    {57.2, 66.0, 66.4, 53.0},
    {78.0, 67.8, 84.6, 59.4},
    {70.0, 74.2, 69.6, 57.2},
    {67.4, 71.0, 83.8, 62.4}
};

// ���ڱ��ѡ���Ƿ��Ѿ�������Ӿ��
int assigned[NUM_PLAYERS] = { 0 };

// ̰���㷨������ѡ��
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

        // ��¼����ѡ�ֺ�ʱ��
        best_solution[j] = best_player;
        assigned[best_player] = 1;  // ��Ǹ�ѡ���Ѿ�������
    }
}

int main() {
    int best_solution[NUM_STROKES];
    double total_time = 0.0;

    // ʹ��̰���㷨����ѡ��
    greedy_assignment(best_solution);

    // ������ʱ��
    for (int j = 0; j < NUM_STROKES; j++) {
        total_time += times[best_solution[j]][j];
    }

    // ������Ž�
    printf("����ʱ��Ϊ: %.2f ��\n", total_time);
    printf("ѡ�ֵ����Ӿ�˷�������:\n");
    for (int j = 0; j < NUM_STROKES; j++) {
        printf("Ӿ�� %d: ѡ�� %d (ʱ��: %.2f ��)\n", j + 1, best_solution[j] + 1, times[best_solution[j]][j]);
    }

    return 0;
}
