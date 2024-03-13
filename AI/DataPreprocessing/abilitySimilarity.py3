#ref:[5.5. [作業]能力相似度](https://letranger.github.io/AI/20221023130936-%E8%B3%87%E6%96%99%E9%A0%90%E8%99%95%E7%90%86.html#org494f712)
from numpy import argmax
from scipy import spatial
from sklearn.preprocessing import StandardScaler
# import

scores = [[70, 340, 84], [58, 318, 76], [54, 279, 85], [40, 320, 78], [91, 310, 99]]
target = [50, 300, 86]
# input

stdsc = StandardScaler()
normalizeArray = stdsc.fit_transform(scores)
# normalize

cosineSimilaraty = []
for i in range(len(scores)):
  cosineSimilaraty.append(1 - spatial.distance.cosine(target, normalizeArray[i]))
# cosine similaraty

print("最相近的資料:",scores[argmax(cosineSimilaraty)])
# print the similarity
