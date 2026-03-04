### EX10 [PROJECT] Sentimental Analysis on Any Dataset Using Rapidminer
### DATE: 30-08-2024
### AIM: To create a project for Sentimental Analysis on Any Dataset Using Rapidminer
### Description: 
<div align = "justify">

### Procedure:
1) ***Import Excel data***
    <p>a. Drag the "Read Excel" operator from the IO folder onto the process canvas.
    <p>b. Double-click on the operator to open its configuration panel.
    <p>c. Specify the path to the Excel file you want to analyze.
    <p>d. Configure options such as sheet selection, header inclusion, etc.
    <p>e. Click on the "Run" button to execute the operator and import the Excel data.
2) ***Perform sentiment analysis with Generate Attributes operator***
    <p>a. Drag the "Generate Attributes" operator from the Operators panel onto the canvas.
    <p>b. Connect the output of the "Extract Sentiment" operator to the input of the "Generate Attributes" operator.
    <p>c. Double-click on the "Generate Attributes" operator to configure it.
    <p>d. Specify a name for the new sentiment attribute you want to generate (e.g., "Sentiment").
    <p>e. Choose the sentiment analysis algorithm, "VADER."
    <p>f. Click on the "Run" button to perform sentiment analysis on the Excel data and generate the sentiment attribute.
3) ***Interpret and export the results***
    <p>a. Analyze the sentiment analysis results from the generated visualizations.
    <p>b. If desired, drag the "Write Excel" operator onto the canvas to export the sentiment analysis results to a new Excel file.
    <p>c. Connect the output of the visualization operator(s) to the input of the "Write Excel" operator.
    <p>d. Configure the file path and other settings for the Excel export.
    <p>e. Click on the "Run" button to export the sentiment analysis results to a new Excel file.

### Output:

![image](https://github.com/user-attachments/assets/26c7a5f0-2ddb-444a-ba65-3f39f75eadd4)
![image](https://github.com/user-attachments/assets/eea63419-4ec0-4c64-a35a-11e9c2cce35a)
![image](https://github.com/user-attachments/assets/2de61e6b-6300-4620-863a-e8c0e11124a8)
![image](https://github.com/user-attachments/assets/6345362b-18be-4082-9fb1-6328db965236)
![image](https://github.com/user-attachments/assets/8ef5ae7b-4f08-4db4-b66b-982cd7ae621b)


### Result:

Successfully created a project for Sentimental Analysis on Flipkart Dataset Using Rapidminer
