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

int main(){
    const int SIZE = 5; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {0, 60, 70, 100, 90};
    //処理コード
    printarray(scores, SIZE, "scores");
    sort(scores, SIZE);
    printarray(scores, SIZE, "results");

    return 0;
}