# Ex.No:1(B) CONDITIONAL STATEMENT

## QUESTION:

Assign exam room based on:
Write a java program that gets input from user for gender and subject, allot room based above conditions.
For example:
Example: m
3 | Admin | m
1 | A

## AIM:

To write a Java program to implement conditional statement using java.

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
Program to implement Conditional Statement using Java
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
        String gender = sc.next();
        int subject = sc.nextInt();
        
        if (gender.equalsIgnoreCase("m")) {
            if (subject == 1 || subject == 2) {
                System.out.println("A");
            } else {
                System.out.println("Admin");
            }
        } else if (gender.equalsIgnoreCase("f")) {
            if (subject == 1) {
                System.out.println("B");
            } else if (subject == 2) {
                System.out.println("C");
            } else {
                System.out.println("Admin");
            }
        } else {
            System.out.println("Invalid");
        }
    }
}
```

## OUTPUT:

Input: m 3
Output: Admin

Input: m 1
Output: A

## RESULT:

Thus the Java program to implement conditional statement using java was executed successfully.