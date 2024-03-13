#ref:[1.3. [作業]資料預處理](https://letranger.github.io/AI/20221023130936-%E8%B3%87%E6%96%99%E9%A0%90%E8%99%95%E7%90%86.html)



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
