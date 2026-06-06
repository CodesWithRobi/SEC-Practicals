# Ex.No:5(C) FILE HANDLING USING JAVA

## QUESTION:

Read a file and print only the lines containing the word "Java".
For example:
Example: I love Java
Python is good
exit | Lines containing the word 'Java':
I love Java

## AIM:

To write a Java program to implement file handling using java.

## ALGORITHM :

1.	Start the program.
2.	Import the necessary package 'java.util' and 'java.io' if needed.
3.	Create the required class/interface with specified attributes and methods.
4.	Implement the required logic (constructors, getters/setters, calculations).
5.	In the main method, create objects and call the necessary methods.
6.	Display the output as per the requirements.
7.	Stop the program.

## PROGRAM:

```
/*
Program to implement File Handling using Java
Developed by: ROBINSON J
RegisterNumber: 212223040170
*/
```

## SOURCE CODE:

```java
import java.util.Scanner;

class prog {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        java.util.List<String> javaLines = new java.util.ArrayList<>();

        while (sc.hasNextLine()) {
            String line = sc.nextLine();
            if (line.equals("exit")) {
                break;
            }
            if (line.contains("Java")) {
                javaLines.add(line);
            }
        }

        System.out.println("Lines containing the word 'Java':");
        for (String javaLine : javaLines) {
            System.out.println(javaLine);
        }

        sc.close();
    }
}
```

## OUTPUT:

Input: I love Java Python is good exit
Output: Lines containing the word 'Java': I love Java

Input: Java is a language I prefer Java over others C++ is fast exit
Output: Lines containing the word 'Java': Java is a language I prefer Java over others

## RESULT:

Thus the Java program to implement file handling using java was executed successfully.