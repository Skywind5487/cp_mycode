"""
ref: [資料預處理](https://letranger.github.io/AI/20221023130936-%E8%B3%87%E6%96%99%E9%A0%90%E8%99%95%E7%90%86.html#org494f712)

以下是5位學生的程式設計能力資料(特徵值為APCS觀念題分數、APCS實作題分數、一年級程式設計學期分數)，
請問那一位學生與你的能力(50, 300, 86)最為接近?

輸入:
scores = [ [70, 340, 84], [58, 318, 76], [54, 279, 85], [40, 320, 78], [91, 310, 99] ]

輸出:

"""

from numpy import argmax
from scipy import spatial
from scipy.spatial import distance
from sklearn.preprocessing import StandardScaler
# import

scores = [[70, 340, 84], [58, 318, 76], [54, 279, 85], [40, 320, 78], [91, 310, 99]]
target = [50, 300, 86]
# input

stdsc = StandardScaler()
normalizeArray = stdsc.fit_transform(scores)
# normalize
Similarity=distance.euclidean(target, scores[0])
index=0
for i in range(len(scores)):
  if(distance.euclidean(target, scores[i])<Similarity):
    index=i
# distance.euclidean(a, b)


print("最相近的資料:",scores[index])
# print the similarity