# Ex.No:5(E) MULTITHREADING -SYNCHRONIZATION

## QUESTION:

Maintain two int variables a and b, read their initial values from user. Use synchronized block to swap them and print swapped values.
Input:
Output:
a = <swapped_a>
b = <swapped_b>
For example:
Example: 5
10 | a = 10
b = 5

## AIM:

To write a Java program to implement multithreading - synchronization using java.

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
Program to implement Multithreading - Synchronization using Java
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
        int a = sc.nextInt();
        int b = sc.nextInt();

        Object lock = new Object();

        synchronized (lock) {
            int temp = a;
            a = b;
            b = temp;
        }

        System.out.println("a = " + a);
        System.out.println("b = " + b);

        sc.close();
    }
}
```

## OUTPUT:

Input: 5 10
Output: a = 10 b = 5

Input: 100 200
Output: a = 200 b = 100

Input: -1 8
Output: a = 8 b = -1

## RESULT:

Thus the Java program to implement multithreading - synchronization using java was executed successfully.