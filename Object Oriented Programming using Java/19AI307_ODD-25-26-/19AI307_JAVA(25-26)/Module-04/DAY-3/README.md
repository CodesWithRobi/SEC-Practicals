# Ex.No:4(C) COMPOSITION IN JAVA

## QUESTION:

Create a Java program to demonstrate Composition. A Department class contains a Professor object (HAS-A relationship). Show that the Department has a Professor and when the Department is destroyed, the Professor is also destroyed.

## AIM:

To write a Java program to implement composition using java.

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
Program to implement Composition using Java
Developed by: ROBINSON J
RegisterNumber: 212223040170
*/
```

## SOURCE CODE:

```java
import java.util.Scanner;

class Professor {
    String name;
    String specialization;

    Professor(String name, String specialization) {
        this.name = name;
        this.specialization = specialization;
    }

    void display() {
        System.out.println("Professor: " + name + ", Specialization: " + specialization);
    }
}

class Department {
    String deptName;
    Professor professor;

    Department(String deptName, String profName, String specialization) {
        this.deptName = deptName;
        this.professor = new Professor(profName, specialization);
    }

    void displayDetails() {
        System.out.println("Department: " + deptName);
        professor.display();
    }
}

class prog {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String deptName = sc.nextLine();
        String profName = sc.nextLine();
        String specialization = sc.nextLine();

        Department dept = new Department(deptName, profName, specialization);
        dept.displayDetails();

        sc.close();
    }
}
```

## OUTPUT:

Input: Computer Science Dr. Smith Artificial Intelligence
Output: Department: Computer Science Professor: Dr. Smith, Specialization: Artificial Intelligence

Input: Mathematics Dr. Jones Algebra
Output: Department: Mathematics Professor: Dr. Jones, Specialization: Algebra

## RESULT:

Thus the Java program to implement composition using java was executed successfully.