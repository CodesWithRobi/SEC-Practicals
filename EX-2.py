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
