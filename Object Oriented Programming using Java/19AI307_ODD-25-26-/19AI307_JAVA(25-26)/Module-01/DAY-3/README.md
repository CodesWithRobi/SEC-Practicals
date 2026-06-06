# Ex.No:1(C) LOOPING STATEMENT

## QUESTION:

A palindrome number is a number that reads the same forwards and backwards. For example:
Write a Java program that:
For example:
Example: 121 | 121 is a Palindrome. | 123 | 123 is not a Palindrome.

## AIM:

To write a Java program to implement looping statement using java.

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
Program to implement Looping Statement using Java
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
        int n = sc.nextInt();
        int original = n;
        int reversed = 0;
        
        int temp = n;
        while (temp > 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }
        
        if (original == reversed) {
            System.out.println(original + " is a Palindrome.");
        } else {
            System.out.println(original + " is not a Palindrome.");
        }
    }
}
```

## OUTPUT:

Input: 121
Output: 121 is a Palindrome.

Input: 123
Output: 123 is not a Palindrome.

Input: 1001
Output: 1001 is a Palindrome.

## RESULT:

Thus the Java program to implement looping statement using java was executed successfully.