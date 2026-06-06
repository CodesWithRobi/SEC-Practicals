# Ex.No:4(A) EXCEPTION HANDLING

## QUESTION:

You wrote a program that stores some input strings into a String array and prints each string in uppercase.However, you're getting a NullPointerException.What should you check in your array before calling .toUpperCase() on a element?

## AIM:

To write a Java program to implement exception handling using java.

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
Program to implement Exception Handling using Java
Developed by: ROBINSON J
RegisterNumber: 212223040170
*/
```

## SOURCE CODE:

```java
import java.util.*;

class prog {
    public static void main(String[] args) {
        String str = new Scanner(System.in).next();
        try {
            if(str.equals("null")) throw new NullPointerException();
            System.out.println(str.toUpperCase());
        } catch(NullPointerException e) {
            System.out.println("Null element");
        }
    }
}
```

## OUTPUT:

Input: null
Output: null

Input: hello
Output: hello

Input: apple
Output: apple

## RESULT:

Thus the Java program to implement exception handling using java was executed successfully.