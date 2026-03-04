# Implementation-of-Simple-Linear-Regression-Model-for-Predicting-the-Marks-Scored

## AIM:
To write a program to predict the marks scored by a student using the simple linear regression model.

## Equipments Required:
1. Hardware – PCs
2. Anaconda – Python 3.7 Installation / Jupyter notebook

## Algorithm
1. Import the needed packages. 
2. Assigning hours to x and scores to y.
3. Plot the scatter plot.
4. Use mse,rmse,mae formula to find the values.

## Program:
```py
/*
Program to implement the simple linear regression model for predicting the marks scored.
Developed by: ROBISNON J
RegisterNumber: 212223040170 
*/

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

# import libraries to find mae, mse
from sklearn.metrics import mean_absolute_error
from sklearn.metrics import mean_squared_error

# read csv file
df = pd.read_csv("student_scores.csv")
# displaying the content in datafile
df.head()
df.tail()

# Segregating data to variables
X = df.iloc[:, :-1].values
X

y = df.iloc[:, -1].values
y

# splitting train and test data
from sklearn.model_selection import train_test_split

X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=1 / 2, random_state=0
)


# implement the Linear Regression Model
def LinearRegression(x, y, X_test):
    x = x.flatten()
    y = y.flatten()

    n = len(x)
    xy = x * y
    xsq = x * x
    Sx = x.sum()
    Sy = y.sum()
    Sxy = xy.sum()
    Sxsq = xsq.sum()

    denom = n * Sxsq - Sx * Sx
    if denom == 0:
        raise ValueError("All x values are the same")

    m = (n * Sxy - Sx * Sy) / denom
    c = y.mean() - m * x.mean()

    return m * X_test.flatten() + c


y_pred = LinearRegression(X_train, y_train, X_test)

# displaying predicted values
y_pred

# displaying actual values
y_test

# graph plot for training data
plt.scatter(X_train, y_train, color="purple")
plt.plot(X_train, LinearRegression(X_train, y_train, X_train), color="black")
plt.title("Hours vs Scores(Training set)")
plt.xlabel("Hours")
plt.ylabel("Scores")
plt.show()

# graph plot for test data
plt.scatter(X_test, y_test, color="red")
plt.plot(X_test, y_pred, color="black")
plt.title("Hours vs Scores(Testing set)")
plt.xlabel("Hours")
plt.ylabel("Scores")
plt.show()

# find mae,mse,rmse
mse = mean_absolute_error(y_test, y_pred)
print("Mean Square Error = ", mse)
mae = mean_absolute_error(y_test, y_pred)
print("Mean Absolute Error = ", mae)
rmse = np.sqrt(mse)
print("Root Mean Square Error = ", rmse)

```

## Output:
#### To Read Head and Tail Files
<img width="281" height="240" alt="image" src="https://github.com/user-attachments/assets/6294cf5e-bb21-4f42-accf-2f563f78e667" />
<img width="341" height="301" alt="image" src="https://github.com/user-attachments/assets/460a758b-6ed5-478e-ae24-8b9e36978bc8" />

#### Compare Dataset
<img width="834" height="264" alt="image" src="https://github.com/user-attachments/assets/81797ab8-0251-4d58-b941-e19f7cd28677" />


#### Predicted Value
<img width="851" height="270" alt="image" src="https://github.com/user-attachments/assets/f005b881-8977-4c12-b78c-bb6da9798e7e" />


#### Graph For Training Set
<img width="777" height="608" alt="image" src="https://github.com/user-attachments/assets/def2a75f-7dd1-4afd-839b-f106ef8e177a" />


#### Graph For Testing Set
<img width="787" height="601" alt="image" src="https://github.com/user-attachments/assets/ac87e9b6-86aa-49c9-b737-e4bbf6064c6e" />


#### Error
<img width="504" height="84" alt="image" src="https://github.com/user-attachments/assets/81f7e061-9da3-417c-9b58-d412fa032ec8" />


## Result:
Thus the program to implement the simple linear regression model for predicting the marks scored is written and verified using python programming.
