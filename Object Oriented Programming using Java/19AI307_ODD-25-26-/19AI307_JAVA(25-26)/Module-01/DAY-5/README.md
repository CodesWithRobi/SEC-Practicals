# Ex.No:1(E) STRINGS AND MATH FUNCTION

## QUESTION:

Write a Java program to calculate the power of a given number.

## AIM:

To write a Java program to implement strings and math function using java.

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
Program to implement Strings and Math Function using Java
Developed by: ROBINSON J
RegisterNumber: 212223040170
*/
```

## SOURCE CODE:

```java
import java.util.*;

class prog {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double base = sc.nextDouble();
        double exponent = sc.nextDouble();
        System.out.println(base + " raised to the power of " + exponent + " is: " + Math.pow(base, exponent));
    }
}
```

## OUTPUT:

Input: 3 2
Output: 3.0 raised to the power of 2.0 is: 9.0

Input: 4 2
Output: 4.0 raised to the power of 2.0 is: 16.0

## RESULT:

Thus the Java program to implement strings and math function using java was executed successfully.