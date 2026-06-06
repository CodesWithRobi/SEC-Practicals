# Ex.No:2(E) ACCESS MODIFIERS

## QUESTION:

Create a class Calculator with: One non-static method add(int a, int b) that returns the sum, One static method info() that says "Calculator is ready".
For example:
Example: 10
20 | Calculator is ready
Sum: 30

## AIM:

To write a Java program to implement access modifiers using java.

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
Program to implement Access Modifiers using Java
Developed by: ROBINSON J
RegisterNumber: 212223040170
*/
```

## SOURCE CODE:

```java
import java.util.Scanner;

class Calculator {
    public int add(int a, int b) {
        return a + b;
    }

    public static void info() {
        System.out.println("Calculator is ready");
    }
}

class prog {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();

        Calculator.info();

        Calculator calc = new Calculator();
        System.out.println("Sum: " + calc.add(num1, num2));

        sc.close();
    }
}
```

## OUTPUT:

Input: 10 20
Output: Calculator is ready Sum: 30

Input: -4 6
Output: Calculator is ready Sum: 2

Input: 100 50
Output: Calculator is ready Sum: 150

## RESULT:

Thus the Java program to implement access modifiers using java was executed successfully.