# Implementation-of-K-Means-Clustering-for-Customer-Segmentation

## AIM:
To write a program to implement the K Means Clustering for Customer Segmentation.

## Equipments Required:
1. Hardware – PCs
2. Anaconda – Python 3.7 Installation / Jupyter notebook

## Algorithm
1. Load and preprocess data: Import data, inspect it, and handle missing values if any.
2. Determine optimal clusters: Use the Elbow Method to identify the number of clusters by plotting WCSS against cluster numbers.
3. Fit the K-Means model: Apply K-Means with the chosen number of clusters to the selected features.
4. Assign cluster labels to each data point.
5. Plot data points in a scatter plot, color-coded by cluster assignments for interpretation.

## Program:
```
Program to implement the K Means Clustering for Customer Segmentation.
Developed by: ROBINSON J
RegisterNumber: 212223040170
```
```py
import pandas as pd
import matplotlib.pyplot as plt
data = pd.read_csv("Mall_Customers.csv")
```
```py
data.head()
```
```py
data.info()
```
```py
data.isnull().sum()
```
```py
from sklearn.cluster import KMeans
wcss = []
for i in range(1,11):
    kmeans = KMeans(n_clusters = i,init = "k-means++",n_init=10)
    kmeans.fit(data.iloc[:,3:])
    wcss.append(kmeans.inertia_)
```
```py    
plt.plot(range(1,11),wcss)
plt.xlabel("No. of Clusters")
plt.ylabel("wcss")
plt.title("Elbow Method")
```
```py
km = KMeans(n_clusters=5, n_init=10)
km.fit(data.iloc[:, 3:])
y_pred = km.predict(data.iloc[:,3:])
y_pred
```
```py
data["cluster"] = y_pred
df0 = data[data["cluster"]==0]
df1 = data[data["cluster"]==1]
df2 = data[data["cluster"]==2]
df3 = data[data["cluster"]==3]
df4 = data[data["cluster"]==4]
```
```py
plt.scatter(df0["Annual Income (k$)"],df0["Spending Score (1-100)"],c="red",label="cluster1")
plt.scatter(df1["Annual Income (k$)"],df1["Spending Score (1-100)"],c="black",label="cluster2")
plt.scatter(df2["Annual Income (k$)"],df2["Spending Score (1-100)"],c="blue",label="cluster3")
plt.scatter(df3["Annual Income (k$)"],df3["Spending Score (1-100)"],c="green",label="cluster4")
plt.scatter(df4["Annual Income (k$)"],df4["Spending Score (1-100)"],c="magenta",label="cluster5")
plt.legend()
plt.title("Customer Segments")
```

## Output:
<img width="1310" height="223" alt="image" src="https://github.com/user-attachments/assets/cf4fa833-ad43-40eb-bd56-d506f827091b" />
<img width="1327" height="266" alt="image" src="https://github.com/user-attachments/assets/00631b3c-e9c5-48d1-8f85-54b634a8f4d8" />
<img width="1327" height="133" alt="image" src="https://github.com/user-attachments/assets/fbaf3423-02ef-4953-adc6-a7d31cd82d3e" />
<img width="1336" height="597" alt="image" src="https://github.com/user-attachments/assets/ff872bb9-da6e-41c4-85fd-d1a7003b75d1" />
<img width="1327" height="221" alt="image" src="https://github.com/user-attachments/assets/be5689ba-1879-4f46-b583-ff343b63250a" />
<img width="1336" height="571" alt="image" src="https://github.com/user-attachments/assets/fd9d8785-2bf8-4027-9441-fc84801c0281" />



## Result:
Thus the program to implement the K Means Clustering for Customer Segmentation is written and verified using python programming.
