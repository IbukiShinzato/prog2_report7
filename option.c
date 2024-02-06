#include <stdio.h>
#include <time.h>

void sort(int scores[], int size);
void printarray(int scores[], int size, char str[]);

void sort(int scores[], int size) {
    int cnt;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (scores[i] < scores[j]) {
                cnt = scores[i];
                scores[i] = scores[j];
                scores[j] = cnt;
            }
        }
    }
}

void printarray(int scores[], int size, char str[]) {
    printf("%s = ", str);
    for (int i = 0; i < size; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");
}

int main() {
    const int SIZE = 5; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {0, 60, 70, 100, 90};
    clock_t start_time, end_time;

    // 処理開始の時間を記録
    start_time = clock();

    // 処理コード
    printarray(scores, SIZE, "scores");
    sort(scores, SIZE);
    printarray(scores, SIZE, "results");

    // 処理終了の時間を記録
    end_time = clock();

    // CPU時間を計算
    long cpu_time = (long)(end_time - start_time);

    /* 秒に直す */
    double sec = (double)cpu_time / CLOCKS_PER_SEC;

    printf("処理時間 : %f 秒\n", sec);

    return 0;
}