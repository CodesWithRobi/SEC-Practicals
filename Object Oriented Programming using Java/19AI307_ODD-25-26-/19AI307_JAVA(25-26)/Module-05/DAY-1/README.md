# Ex.No:5(A) INPUTSTREAMREADER

## QUESTION:

Write a program to read user input from the keyboard using InputStreamReader

## AIM:

To write a Java program to implement inputstreamreader using java.

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
Program to implement InputStreamReader using Java
Developed by: ROBINSON J
RegisterNumber: 212223040170
*/
```

## SOURCE CODE:

```java
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

class prog {
    public static void main(String[] args) {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        
        try {
            String name = br.readLine();
            System.out.println("Hello, " + name + "!");
        } catch (IOException e) {
            System.out.println("An error occurred: " + e.getMessage());
        }
    }
}
```

## OUTPUT:

Input: Manoj
Output: Hello, Manoj!

Input: Sam
Output: Hello, Sam!

## RESULT:

Thus the Java program to implement inputstreamreader using java was executed successfully.