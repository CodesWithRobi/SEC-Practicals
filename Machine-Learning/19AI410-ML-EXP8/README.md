# Implementation-of-Decision-Tree-Classifier-Model-for-Predicting-Employee-Churn

## AIM:
To write a program to implement the Decision Tree Classifier Model for Predicting Employee Churn.

## Equipments Required:
1. Hardware – PCs
2. Anaconda – Python 3.7 Installation / Jupyter notebook

## Algorithm
1. Import pandas
2. Import Decision tree classifier
3. Fit the data in the model
4. Find the accuracy score

## Program:
```
/*
Program to implement the Decision Tree Classifier Model for Predicting Employee Churn.
Developed by: ROBINSON J
RegisterNumber: 212223040170
*/
```
```py
import pandas as pd
data=pd.read_csv("Employee.csv")
print("data.head():")
data.head()
```
```py
print("data.info():")
data.info()
```
```py
print("isnull() and sum():")
data.isnull().sum()
```
```py
print("data value counts():")
data["left"].value_counts()
```
```py
from sklearn.preprocessing import LabelEncoder
le=LabelEncoder()
```
```py
print("data.head() for Salary:")
data["salary"]=le.fit_transform(data["salary"])
data.head()
```
```py
print("x.head():")
x=data[["satisfaction_level","last_evaluation","number_project","average_montly_hours","time_spend_company","Work_accident","promotion_last_5years","salary"]]
x.head()
```
```py
y=data["left"]
from sklearn.model_selection import train_test_split
x_train,x_test,y_train,y_test=train_test_split(x,y,test_size=0.2,random_state=100)
from sklearn.tree import DecisionTreeClassifier
dt=DecisionTreeClassifier(criterion="entropy")
dt.fit(x_train,y_train)
y_pred=dt.predict(x_test)
```
```py
print("Accuracy value:")
from sklearn import metrics
accuracy=metrics.accuracy_score(y_test,y_pred)
accuracy
```
```py
print("Data Prediction:")
dt.predict([[0.5,0.8,9,260,6,0,1,2]])
```

```py
from sklearn.tree import plot_tree
import matplotlib.pyplot as plt

plt.figure(figsize=(8,6))
plot_tree(dt, feature_names=x.columns, class_names=['salary', 'left'], filled=True)
plt.show()

```

## Output:
<img width="1336" height="240" alt="image" src="https://github.com/user-attachments/assets/c2fb7d0b-e85c-43a0-ae78-c4fb25a3b3b9" />

<img width="1327" height="399" alt="image" src="https://github.com/user-attachments/assets/5ea0ec33-72ab-4e81-a5ea-0d220be96025" />

<img width="1327" height="243" alt="image" src="https://github.com/user-attachments/assets/df624428-f74b-4fb8-a678-3da1ab410d60" />

<img width="1348" height="126" alt="image" src="https://github.com/user-attachments/assets/cc95e038-c93b-44dd-b25a-e04a1d107771" />

<img width="1336" height="240" alt="image" src="https://github.com/user-attachments/assets/edfb1e64-2f1e-480a-a1a4-3722ff839b10" />

<img width="1336" height="240" alt="image" src="https://github.com/user-attachments/assets/8d7cffc4-e56d-4934-a5db-e89852accf0a" />

<img width="1336" height="390" alt="image" src="https://github.com/user-attachments/assets/d1b8d1e8-17ec-4d54-8098-9c15a0b41b9b" />

<img width="851" height="631" alt="image" src="https://github.com/user-attachments/assets/c8f62a03-923e-4912-984d-51abcec3f6b1" />


## Result:
Thus the program to implement the  Decision Tree Classifier Model for Predicting Employee Churn is written and verified using python programming.
