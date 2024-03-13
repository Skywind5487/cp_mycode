# ref:[Day 11 : Google Colab 實用奧步篇 (連結硬碟、繪圖中文顯示問題)](https://ithelp.ithome.com.tw/articles/10234373#:~:text=1%20%E7%95%B6%E4%BD%A0%E9%96%8B%E5%95%9F%20Colab%20%E4%BA%92%E5%8B%95%E7%92%B0%E5%A2%83%EF%BC%8C%E5%85%B6%E5%AF%A6%E6%98%AF%E9%96%8B%E5%95%9F%E4%BA%86%E4%B8%80%E5%80%8B%E8%99%9B%E6%93%AC%E6%A9%9F%EF%BC%8C%E4%BD%A0%E5%8F%AF%E4%BB%A5%E9%80%8F%E9%81%8E%E8%88%87%E9%9B%B2%E7%AB%AF%E7%A1%AC%E7%A2%9F%E9%80%A3%E7%B5%90%E3%80%82%20...%202%20%E9%81%8E%E7%A8%8B%E4%B8%AD%E6%9C%83%E5%87%BA%E7%8F%BE%E7%AD%89%E5%BE%85%E6%82%A8%E7%9A%84%E6%8E%88%E6%AC%8A%E7%A2%BC%EF%BC%8C%E8%AB%8B%E9%BB%9E%E9%81%B8%E9%80%A3%E7%B5%90%EF%BC%8C%E8%A4%87%E8%A3%BD%E6%8E%88%E6%AC%8A%E7%A2%BC%E8%B2%BC%E5%9B%9E%20Colab,...%205%20%E6%B3%A8%E6%84%8F%E4%BA%8B%E9%A0%85%3A%E5%A6%82%E6%9E%9C%20Colab%20%E8%A6%81%E5%BE%9E%E5%A4%96%E9%83%A8%E4%B8%8B%E8%BC%89%E5%AE%89%E8%A3%9D%E7%AC%AC%E4%B8%89%E6%96%B9%E5%A5%97%E4%BB%B6%20%28%E5%A6%82Talib%29%EF%BC%8C%20%E8%A8%98%E5%BE%97%E5%85%88%E5%AE%89%E8%A3%9D%E5%A5%BDTalib%E5%86%8D%E5%88%87%E6%8F%9B%E5%88%B0%E8%87%AA%E5%B7%B1%E7%9A%84%E9%9B%B2%E7%AB%AF%E7%A1%AC%E7%A2%9F%E7%9B%AE%E9%8C%84%20%EF%BC%8C%E4%B8%8D%E7%84%B6%E5%9F%B7%E8%A1%8C%E6%99%82%E5%8F%AF%E8%83%BD%E6%9C%83%E6%9C%89%E9%8C%AF%E8%AA%A4%E7%8B%80%E6%B3%81%EF%BC%8C%E7%99%BC%E7%94%9F%E9%8C%AF%E8%AA%A4%E4%B9%9F%E5%88%A5%E7%B7%8A%E5%BC%B5%EF%BC%8C%E9%87%8D%E5%95%9F%E6%9C%8D%E5%8B%99%E5%8D%B3%E5%8F%AF%E3%80%82)

# Colab 進行matplotlib繪圖時顯示繁體中文
# 下載台北思源黑體並命名taipei_sans_tc_beta.ttf，移至指定路徑
!wget -O TaipeiSansTCBeta-Regular.ttf https://drive.google.com/uc?id=1eGAsTN1HBpJAkeVM57_C7ccp7hbgSz3_&export=download
!wget -O TaipeiSansTCBeta-Bold.ttf https://drive.google.com/uc?id=1Om8izPz02Msc15onhS_ki1lrlAIf05Pd&export=download

import matplotlib as mpl
import matplotlib.pyplot as plt 
from matplotlib.font_manager import fontManager

# 改style要在改font之前
# plt.style.use('seaborn')  

fontManager.addfont('TaipeiSansTCBeta-Regular.ttf')
fontManager.addfont('TaipeiSansTCBeta-Bold.ttf')
mpl.rc('font', family='Taipei Sans TC Beta')from sklearn.neighbors import KNeighborsClassifier

# import
import pandas as pd
import seaborn as sns
from sklearn import datasets

# input
iris = datasets.load_iris()

x = iris.data
y = iris.target

npx = pd.DataFrame(x, columns=['fac1','fac2','fac3','fac4'])
npy = pd.DataFrame(y.astype(int), columns=['category'])

# merge
dataPd = pd.concat([npx, npy], axis=1)
print(dataPd)

sns.lmplot(x='fac1', y='fac2', data=dataPd, hue='category', fit_reg=True)
plt.savefig('irisdemo.png', dpi=300)


accuracy_scores = []
K_values = range(3, 40 , 2)
goodscore=-1
goodK=-1

# KNN iterater
for K in K_values:
  estimator = KNeighborsClassifier(n_neighbors=K)
  estimator.fit(x, y)
  score = estimator.score(x, y)
  accuracy_scores.append(score)
  if(accuracy_scores[-1]>goodscore):
    goodscore=accuracy_scores[-1]
    goodK=K
  #print('準確率:\n', score)

# graph init
plt.rcParams.update({
    'font.size': 10,
    'font.weight': 'bold',
    'axes.labelsize': 'medium',
    'axes.labelweight': 'bold',
    'axes.titlesize': 'large',
    'xtick.labelsize': 'medium',
    'ytick.labelsize': 'medium'
})

# graph
plt.plot(K_values, accuracy_scores, marker='H')
plt.xlabel('K值')
plt.ylabel('準確率')
plt.title('準確率 vs K 值')

# target it
plt.annotate(f'Max accuracy ({goodscore:.2f}) at K={goodK}',
             xy=(goodK, goodscore),
             xytext=(goodK - 1, goodscore - 0.02),
             arrowprops=dict(facecolor='black', shrink=0.005))

plt.savefig('accuracy_vs_K_value.png', dpi=300)
plt.show()
