public class Main{
    public static void main(String[] args) {
        int[] scores = {0, 60, 70, 100, 90};
            // 処理前の時刻を取得
            long startTime = System.currentTimeMillis();

            printarray(scores, scores.length, "scores");
            sort(scores, scores.length);
            printarray(scores, scores.length, "results");
    
            // 処理後の時刻を取得
            long endTime = System.currentTimeMillis();

                    // ミリ秒から秒に変換
            double elapsedTimeInSeconds = (endTime - startTime) / 1000.0;
            System.out.println("処理時間：" + elapsedTimeInSeconds+ " 秒");
    }

    public static void sort(int scores[], int size) {
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

    public static void printarray(int scores[], int size, String str) {
        System.out.printf("%s = ", str);
        for (int i = 0; i < size; i++) {
            System.out.printf("%d ", scores[i]);
        }
        System.out.printf("\n");
    }
}
