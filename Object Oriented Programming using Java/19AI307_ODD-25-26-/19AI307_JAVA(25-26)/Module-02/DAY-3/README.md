# Ex.No:2(C) ACCESS SPECIFIERS

## QUESTION:

Write a Java program to create a class called Rectangle with private instance variables length and width. Provide public getter and setter methods to access and modify these variables
import java.util.Scanner;
class Rectangle {    // Private instance variables    private double length;    private double width;
// Getter and Setter for length    public double getLength() {        return length;    }    public void setLength(double length) {        this.length = length;    }
// Getter and Setter for width    public double getWidth() {        return width;    }    public void setWidth(double width) {        this.width = width;    }
// Method to calculate area    public double calculateArea() {        return length * width;    }}

## AIM:

To write a Java program to implement access specifiers using java.

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
Program to implement Access Specifiers using Java
Developed by: ROBINSON J
RegisterNumber: 212223040170
*/
```

## SOURCE CODE:

```java
import java.util.Scanner;

class Rectangle {
    private double length;
    private double width;

    public double getLength() {
        return length;
    }
    public void setLength(double length) {
        this.length = length;
    }

    public double getWidth() {
        return width;
    }
    public void setWidth(double width) {
        this.width = width;
    }

    public double calculateArea() {
        return length * width;
    }
}

class prog {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        Rectangle rect = new Rectangle();
        double l = sc.nextDouble();
        double w = sc.nextDouble();
        
        rect.setLength(l);
        rect.setWidth(w);
        
        System.out.println("Length: " + rect.getLength());
        System.out.println("Width: " + rect.getWidth());
        
        sc.close();
    }
}
```

## OUTPUT:

Input: 10 20
Output: 10 20

Input: 5 8
Output: 5 8

Input: 15 12
Output: 15 12

Input: 7.5 9.5
Output: 7.5 9.5

## RESULT:

Thus the Java program to implement access specifiers using java was executed successfully.