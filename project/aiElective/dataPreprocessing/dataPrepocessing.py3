"""

南一中網路書店即將開張，為了處理龐大的書單資料，資訊科教師們很無恥的把書籍資料登錄工作當成作業分派給一年級的修課學生，所謂團結力量大，一份不太可靠的書目資料就這麼完成了...

詳細的題目要求請參閱1.3. [作業]資料預處理(https://letranger.github.io/AI/20221023130936-%E8%B3%87%E6%96%99%E9%A0%90%E8%99%95%E7%90%86.html)

要求
1. 除所有有缺失值的記錄(只要有一欄有缺失值、該筆資料就整筆刪去)
2. 改變錯誤日期，超過2024的都改為2024
3. 改變錯誤日期，日期為0的都改為1900
4. 改變錯誤書價，超過2000的都改為1000
5. 改變錯誤書價，書價為0者改為100

輸出提示:
1. 列出原始資料筆數 列出條正(剛除缺失值)後的資料筆數
2. 列出2000年出版的書籍數量
3. 列出作者中有Bruce的書籍數量
4. 列出 500<=書價<=800 的書籍數量
5. 列出平均書價

輸出範例:
原始資料筆數 271350
可用資料數: 259397
2000年出版: 16438
作者群中有Bruce: 667
800<=書價<=1000: 58776
平均書價: 559.23

"""

import pandas as pd
#import


df = pd.read_csv('https://letranger.github.io/AI/Downloads/403books.csv')
df = df.rename(columns={"Year-Of-Publication":"Year","Book-Price":"Price","Book-Author":"Author"})
#init:import,rename

print("原始資料筆數",df.shape[0])
df = df.dropna()# delete Nan
print("可用資料數:",df.shape[0])
# dropna and ouput index


df.loc[df['Year'] > 2024,'Year'] = 2024
df.loc[df['Year'] == 0, 'Year'] = 1900
df.loc[df['Price'] == 0, 'Price'] = 100 
df.loc[df['Price'] > 2000, 'Price'] = 1000 
# correct wrong


print("2000年出版:",df[df['Year'] == 2000].shape[0])
print("作者群中有Bruce:",df[df['Author'].str.contains('Bruce')].shape[0])
print("800<=書價<=1000:",df[(df['Price'] >= 800) & (df['Price'] <= 1000)].shape[0])
print(f"平均書價: {df['Price'].mean():.2f}")
# output
