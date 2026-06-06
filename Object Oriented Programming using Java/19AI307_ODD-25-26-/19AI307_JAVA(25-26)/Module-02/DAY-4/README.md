# Ex.No:2(D) VARIABLE SCOPE AND CONSTRUCTOR

## QUESTION:

Write Java code to create a class Triangle and initialiaze the attributes(base and height) using default constructor and calculate the area of the triangle using user defined function.

## AIM:

To write a Java program to implement variable scope and constructors using java.

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
Program to implement Variable Scope and Constructors using Java
Developed by: ROBINSON J
RegisterNumber: 212223040170
*/
```

## SOURCE CODE:

```java
import java.util.Scanner;

class Triangle {
    double base;
    double height;

    Triangle() {
        base = 0;
        height = 0;
    }

    double calculateArea() {
        return 0.5 * base * height;
    }
}

class prog {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        Triangle t = new Triangle();
        t.base = sc.nextDouble();
        t.height = sc.nextDouble();
        
        System.out.println("Area of the triangle is: " + t.calculateArea());
        
        sc.close();
    }
}
```

## OUTPUT:

Input: 5 6
Output: Area of the triangle is: 15.0

Input: 3 8
Output: Area of the triangle is: 12.0

Input: 5 5
Output: Area of the triangle is: 12.5

## RESULT:

Thus the Java program to implement variable scope and constructors using java was executed successfully.