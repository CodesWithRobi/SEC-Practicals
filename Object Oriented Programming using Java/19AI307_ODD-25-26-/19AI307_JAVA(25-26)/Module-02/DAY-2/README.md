# Ex.No:2(B) METHODS

## QUESTION:

Create two methods:
Get the input for radius from the user.
double getArea(double r) → calculate the area and return the area(Don't print anything in this method).
void printArea(double area) → pass the calculated area to this method and print the area of a circle.
For example:
Example: 2 | 12.56

## AIM:

To write a Java program to implement methods using java.

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
Program to implement Methods using Java
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
        double radius = sc.nextDouble();
        
        double area = getArea(radius);
        printArea(area);
        
        sc.close();
    }

    public static double getArea(double r) {
        return 3.14 * r * r;
    }

    public static void printArea(double area) {
        System.out.format("%.2f", area);
    }
}
```

## OUTPUT:

Input: 2
Output: 12.56

## RESULT:

Thus the Java program to implement methods using java was executed successfully.