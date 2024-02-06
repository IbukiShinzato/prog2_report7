import time

def sort(scores):
    for i in range(len(scores)):
        for j in range(i + 1, len(scores)):
            if scores[i] < scores[j]:
                cnt = scores[i]
                scores[i] = scores[j]
                scores[j] = cnt

def change_string(scores):
    res = ""
    for s in scores:
        res += " "
        res += str(s)
    return res
    
# 実行したい処理を記述
scores = [0, 60, 70, 100, 90]
start = time.perf_counter()  # 現在時刻（処理開始前）を取得

print("scores" + " =" + change_string(scores))
sort(scores)
print("result" + " =" + change_string(scores))

end = time.perf_counter()  # 現在時刻（処理完了後）を取得

time_diff = end - start  # 処理完了後の時刻から処理開始前の時刻を減算する
formatted_number = "{:.20f}".format(time_diff)
print("処理時間 : " + str(formatted_number) + " 秒")