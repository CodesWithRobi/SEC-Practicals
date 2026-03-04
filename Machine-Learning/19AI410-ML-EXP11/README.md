# Implementation-of-SVM-For-Spam-Mail-Detection

## AIM:
To write a program to implement the SVM For Spam Mail Detection.

## Equipments Required:
1. Hardware – PCs
2. Anaconda – Python 3.7 Installation / Jupyter notebook

## Algorithm
1. Detect File Encoding: Use chardet to determine the dataset's encoding.
2. Load Data: Read the dataset with pandas.read_csv using the detected encoding.
3. Inspect Data: Check dataset structure with .info() and missing values with .isnull().sum().
4. Split Data: Extract text (x) and labels (y) and split into training and test sets using train_test_split.
5. Convert Text to Numerical Data: Use CountVectorizer to transform text into a sparse matrix.
6. Train SVM Model: Fit an SVC model on the training data.
7. Predict Labels: Predict test labels using the trained SVM model.
8. Evaluate Model: Calculate and display accuracy with metrics.accuracy_score.

## Program:
```
Program to implement the SVM For Spam Mail Detection.
Developed by: ROBINSON J
RegisterNumber: 212223040170
```
```py
import chardet
file='spam.csv'
with open(file, 'rb') as rawdata:
    result = chardet.detect (rawdata.read(100000))
result
```
```py
import pandas as pd
data=pd.read_csv('spam.csv', encoding='Windows-1252')
```
```py
data.info()
```
```py
data.isnull().sum()
```
```py
x=data["v1"].values
y=data["v2"].values
```
```py
from sklearn.model_selection import train_test_split
x_train, x_test, y_train,y_test=train_test_split(x,y,test_size=0.2, random_state=0)
```
```py
from sklearn.feature_extraction.text import CountVectorizer
cv = CountVectorizer()
```
```py
x_train=cv.fit_transform(x_train)
x_test=cv.transform(x_test)
```
```py
from sklearn.svm import SVC
svc=SVC()
svc.fit(x_train, y_train)
y_pred=svc.predict(x_test)
y_pred
```
```py
from sklearn import metrics
accuracy=metrics.accuracy_score(y_test,y_pred)
accuracy
```

## Output:
<img width="1327" height="187" alt="image" src="https://github.com/user-attachments/assets/81d28e9b-a492-4b40-ab5a-8c23247da48f" />

<img width="1310" height="223" alt="image" src="https://github.com/user-attachments/assets/17460063-b2ba-41d0-bcbe-6152b90b6343" />


<img width="1327" height="266" alt="image" src="https://github.com/user-attachments/assets/2e74132e-babf-453d-8c68-085e4c814cdb" />


<img width="1327" height="133" alt="image" src="https://github.com/user-attachments/assets/ba530760-e416-4a79-9e04-f882adedc9e3" />


<img width="794" height="76" alt="image" src="https://github.com/user-attachments/assets/89def347-a7c4-415b-b1de-f14e968e61af" />


<img width="316" height="53" alt="image" src="https://github.com/user-attachments/assets/fced9519-44b8-443c-a8c8-e5f756a069fa" />


## Result:
Thus the program to implement the SVM For Spam Mail Detection is written and verified using python programming.
