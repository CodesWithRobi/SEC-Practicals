# Ex.No:2(A) CLASS AND OBJECT

## QUESTION:

Create a class Course with attributes code, title, credits.
For example:
Example: CS101 Java 4
CS102 Python 3 | CS101 | Java | 4 credits
CS102 | Python | 3 credits

## AIM:

To write a Java program to implement class and objects using java.

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
Program to implement Class and Objects using Java
Developed by: ROBINSON J
RegisterNumber: 212223040170
*/
```

## SOURCE CODE:

```java
import java.util.Scanner;

class Course {
    String code, title;
    int credits;
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Course c1 = new Course();
        c1.code = sc.next();
        c1.title = sc.next();
        c1.credits = sc.nextInt();

        Course c2 = new Course();
        c2.code = sc.next();
        c2.title = sc.next();
        c2.credits = sc.nextInt();

        System.out.println(c1.code + " | " + c1.title + " | " + c1.credits + " credits");
        System.out.println(c2.code + " | " + c2.title + " | " + c2.credits + " credits");

        sc.close();
    }
}
```

## OUTPUT:

Input: CS101 Java 4 CS102 Python 3
Output: CS101 | Java | 4 credits CS102 | Python | 3 credits

Input: MA201 Algebra 3 PH101 Physics 4
Output: MA201 | Algebra | 3 credits PH101 | Physics | 4 credits

## RESULT:

Thus the Java program to implement class and objects using java was executed successfully.