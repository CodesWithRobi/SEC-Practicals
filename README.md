<H3>NAME: ROBINSON J</H3>
<H3>REGISTER NO: 212223040170</H3>
<H3>EX. NO.1</H3>
<H1 ALIGN =CENTER> Introduction to Kaggle and Data preprocessing</H1>

## AIM:

To perform Data preprocessing in a data set downloaded from Kaggle

## EQUIPMENTS REQUIRED:
Hardware – PCs
Anaconda – Python 3.7 Installation / Google Colab /Jupiter Notebook

## RELATED THEORETICAL CONCEPT:

**Kaggle :**
Kaggle, a subsidiary of Google LLC, is an online community of data scientists and machine learning practitioners. Kaggle allows users to find and publish data sets, explore and build models in a web-based data-science environment, work with other data scientists and machine learning engineers, and enter competitions to solve data science challenges.

**Data Preprocessing:**

Pre-processing refers to the transformations applied to our data before feeding it to the algorithm. Data Preprocessing is a technique that is used to convert the raw data into a clean data set. In other words, whenever the data is gathered from different sources it is collected in raw format which is not feasible for the analysis.
Data Preprocessing is the process of making data suitable for use while training a machine learning model. The dataset initially provided for training might not be in a ready-to-use state, for e.g. it might not be formatted properly, or may contain missing or null values.Solving all these problems using various methods is called Data Preprocessing, using a properly processed dataset while training will not only make life easier for you but also increase the efficiency and accuracy of your model.

**Need of Data Preprocessing :**

For achieving better results from the applied model in Machine Learning projects the format of the data has to be in a proper manner. Some specified Machine Learning model needs information in a specified format, for example, Random Forest algorithm does not support null values, therefore to execute random forest algorithm null values have to be managed from the original raw data set.
Another aspect is that the data set should be formatted in such a way that more than one Machine Learning and Deep Learning algorithm are executed in one data set, and best out of them is chosen.


## ALGORITHM:
STEP 1:Importing the libraries<BR>
STEP 2:Importing the dataset<BR>
STEP 3:Taking care of missing data<BR>
STEP 4:Encoding categorical data<BR>
STEP 5:Normalizing the data<BR>
STEP 6:Splitting the data into test and train<BR>

##  PROGRAM:
```python
#import libraries
from google.colab import files
import pandas as pd
import numpy as np
import io
from sklearn.preprocessing import StandardScaler
from sklearn.preprocessing import MinMaxScaler
from sklearn.preprocessing import LabelEncoder
from sklearn.model_selection import train_test_split

#Read the dataset from drive
uploaded = files.upload()
df = pd.read_csv(io.BytesIO(uploaded['Churn_Modelling.csv']))
print("Dataset loaded successfully.\n")
print(df)

# Finding Missing Values
print("\nMissing values:\n", df.isnull().sum())

#Handling Missing values
df.fillna(method='ffill', inplace=True)

#Encoding Categorical Data
label_encoder = LabelEncoder()
df['Gender'] = label_encoder.fit_transform(df['Gender'])
df = pd.get_dummies(df, columns=['Geography'], drop_first=True)

#Check for Duplicates
duplicates = df.duplicated().sum()
print("\nDuplicate rows:", duplicates)
df.drop_duplicates(inplace=True)

#Detect Outliers
from scipy.stats import zscore
z_scores = np.abs(zscore(df.select_dtypes(include=[np.number])))
df = df[(z_scores < 3).all(axis=1)]

#Normalize the dataset
scaler = MinMaxScaler()
numerical_features = ['CreditScore', 'Age', 'Tenure', 'Balance', 'NumOfProducts', 'EstimatedSalary']
df[numerical_features] = scaler.fit_transform(df[numerical_features])

#split the dataset into input and output
X = df.drop(columns=['Exited', 'Surname', 'CustomerId', 'RowNumber'])  # Drop ID columns
y = df['Exited']

#splitting the data for training & Testing
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

#Print the training data and testing data
print("\nTraining Features:", X_train.head())

print(X_test.head())

print(y_train.head())

print(y_test.head())
```


## OUTPUT:
### Reading the dataset from drive
![image](https://github.com/user-attachments/assets/43d2bb7a-6aa9-4a8f-afa9-9f7e50761ab5)

### Finding Missing Values
![image](https://github.com/user-attachments/assets/4fe11e88-e60f-4ff2-9145-10caeb34bdf8)

### Check for Duplicates
![image](https://github.com/user-attachments/assets/11dd4b64-50e3-4825-bf43-61bf9c10adec)

### Print the training data and testing data
![image](https://github.com/user-attachments/assets/dfe67448-f72b-49fc-bc99-d9f51eee19ec)
![image](https://github.com/user-attachments/assets/2a7412f7-01ff-4ee9-a380-afd90186befb)
![image](https://github.com/user-attachments/assets/9a03b0b5-6bff-4944-90fa-a038f6db4b80)
![image](https://github.com/user-attachments/assets/ff3d8194-83e8-42de-93e2-d81c2f28779c)


## RESULT:
Thus, Implementation of Data Preprocessing is done in python  using a data set downloaded from Kaggle.


