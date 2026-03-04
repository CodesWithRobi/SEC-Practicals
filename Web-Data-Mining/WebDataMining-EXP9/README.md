### EX9 Preprocessing on Twitter Data using Rapidminer
### DATE: 30-08-2024
### AIM: To implement preprocessing technique on Twitter Data using Rapidminer
### Description: 
<div align = "justify">
RapidMiner provides data mining and machine learning procedures including: data loading and transformation (ETL), data preprocessing and visualization, 
predictive analytics and statistical modeling, evaluation, and deployment. RapidMiner is written in the Java programming language. 
RapidMiner provides a GUI to design and execute analytical workflows. Those workflows are called “Processes” in RapidMiner and they consist of multiple “Operators”. 
Each operator performs a single task within the process, and the output of each operator forms the input of the next one. Alternatively, the engine can be called from 
other programs or used as an API. Individual functions can be called from the command line. 
RapidMiner provides learning schemes, models and algorithms and can be extended using R and Python scripts.

### Procedure:
1) ***Import Twitter data:*** Import the Twitter data into RapidMiner. You can do this by selecting the appropriate
data source operator, such as "Read Excel" or "Read CSV," and specifying the location of your Twitter data
file.
2) ***Preprocess data:*** Preprocess the imported data to clean and prepare it for text processing. Use the following
operators for preprocessing:
    <p>a. Tokenize: Split the text into individual words or tokens.
    <p>b. Transform Cases: Convert the text to lowercase or uppercase to ensure consistency.
    <p>c. Remove Stopwords: Remove common words that do not provide much meaningful information.
    <p>d. Remove Special Characters: Eliminate special characters, such as punctuation marks or symbols.
    <p>e. Remove Numbers: Exclude numeric values from the text.
3) ***Stemming:*** Apply stemming to reduce words to their root forms. You can use operators like "Stem (Porter)"
for this purpose.


### Output:

![image](https://github.com/user-attachments/assets/b56ec285-fee1-419c-816e-e1770f13fcb5)
![image](https://github.com/user-attachments/assets/005143b6-883e-4e93-9495-3f82a97027d9)
![image](https://github.com/user-attachments/assets/ca36c985-9a47-4070-bfca-6ebcb82b7b0a)
![image](https://github.com/user-attachments/assets/91893d63-aa19-47ec-8dd3-818a39e22507)


### Result:

Successfully iplemented preprocessing technique on Twitter Data using Rapidminer.
