#include <stdio.h>

void sort(int scores[], int size);
void sort(int scores[], int size){
    int cnt;
    for (int i=0; i<size; i++){
        for (int j=i+1; j<size; j++){
            if (scores[i] < scores[j]){
                cnt = scores[i];
                scores[i] = scores[j];
                scores[j] = cnt;
            }
        }
    }
}


void printarray(int scores[], int size, char str[]);
void printarray(int scores[], int size, char str[]){
    printf("%s = ", str);
    for (int i=0; i<size; i++){
        printf("%d ", scores[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    int scores[n];
    for (int i = 0; i < n; i ++ ) {
        scanf("%d", &scores[i]);
    }

    printf("\n---実行結果---\n\n");
    printarray(scores, n, "scores");
    sort(scores, n);
    printarray(scores, n, "results");

    printf("\n");
    return 0;
}