# Implementation-of-Decision-Tree-Regressor-Model-for-Predicting-the-Salary-of-the-Employee

## AIM:
To write a program to implement the Decision Tree Regressor Model for Predicting the Salary of the Employee.

## Equipments Required:
1. Hardware – PCs
2. Anaconda – Python 3.7 Installation / Jupyter notebook

## Algorithm
1.Import pandas

2.Import Decision tree classifier

3.Fit the data in the model

4.Find the accuracy score


## Program:
```
/*
Program to implement the Decision Tree Regressor Model for Predicting the Salary of the Employee.
Developed by: ROBINSON J  
RegisterNumber: 212223040170 
*/
```

```py
import pandas as pd
data=pd.read_csv("Salary.csv")
data.head()
data.info()
data.isnull().sum()
```
```py
from sklearn.preprocessing import LabelEncoder
le=LabelEncoder()
data["Position"]=le.fit_transform(data["Position"])
data.head()
```
```py
x=data[["Position","Level"]]
x.head()
y=data["Salary"]
y.head()

```
```py
from sklearn.model_selection import train_test_split
x_train,x_test,y_train,y_test=train_test_split(x,y,test_size=0.2,random_state=2)
```
```py
from sklearn.tree import DecisionTreeRegressor
dt=DecisionTreeRegressor()
dt.fit(x_train,y_train)
y_pred=dt.predict(x_test)
y_pred
from sklearn.metrics import r2_score
r2=r2_score(y_test,y_pred)
```
```py
dt.predict([[5,6]])
```


## Output:

<img width="742" height="322" alt="image" src="https://github.com/user-attachments/assets/61d21ee7-9cab-4ed3-8ab8-b5e3acae184b" />

<img width="399" height="221" alt="image" src="https://github.com/user-attachments/assets/d7659079-1bba-4927-818e-ed9ece71513c" />

<img width="483" height="133" alt="image" src="https://github.com/user-attachments/assets/12bf43fa-a78f-4d65-b243-4ee50dd750e1" />


## Result:
Thus the program to implement the Decision Tree Regressor Model for Predicting the Salary of the Employee is written and verified using python programming.
