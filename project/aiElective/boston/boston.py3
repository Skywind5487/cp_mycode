# ref:[房價預測](https://letranger.github.io/AI/20221023154410-regression.html?authuser=1#org31bdb84)



import pandas as pd
housing = pd.read_csv('https://raw.githubusercontent.com/letranger/AI/gh-pages/Downloads/boston_housing.csv')

import matplotlib.pyplot as plt
from tensorflow.keras.datasets import boston_housing

#(train_x, train_y), (test_x, test_y) = boston_housing.load_data()
housing.dropna(axis=0, inplace=True)

mean = housing.iloc[:,:-1].mean(axis=0)
housing.iloc[:,:-1] -= mean
std = housing.iloc[:,:-1].std(axis=0)
housing.iloc[:,:-1] /= std





import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split


data = housing


# dfs init
Features = None
Max_depth = data.shape[1] -1
Max_R2 = 0
Max_features = None


def predict(features):
  X_train, X_test, Y_train, Y_test = train_test_split(features, Y, test_size = 0.3, random_state=5)
  from sklearn.linear_model import LinearRegression
  reg = LinearRegression()# 學習/訓練Fitting linear model
  reg.fit(X_train,Y_train)
  reg.predict(X_test)# 真實結果：Y_test# 測試準確度：
  R2score = reg.score(X_test, Y_test)
  global Max_R2, Max_features
  if (R2score > Max_R2):
    Max_R2 = R2score
    Max_features = features


def dfs(depth:int, choose:bool, features, columnscount,test):
  global Max_depth
  if depth != -1 and choose:
    if (features is None):
      features = data.iloc[:,depth]
    else:
      features = pd.concat([features, data.iloc[:,depth]], axis=1)
      #print(features)
    columnscount += 1
  if depth == Max_depth:
    #print(depth,"&",features is None,test)
    if not(features is None) and columnscount >= 2 :
      predict(features)
    return
  for i in range(2):
    dfs(depth + 1 , i ,features, columnscount , test+str(i))

dfs(-1, 0, Features, 0, "")
print(Max_R2,list(Max_features.columns))
