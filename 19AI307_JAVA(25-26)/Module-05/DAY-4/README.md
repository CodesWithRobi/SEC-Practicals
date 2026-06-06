# Ex.No:5(D) THREAD PRIORITY

## QUESTION:

Write a java program for determine the priority and name of the current thread.
Note : Read the threadname from the User
For example:
Example: NewThread | Priority of Thread: 5
Name of Thread: NewThread
Thread[NewThread,5,main]

## AIM:

To write a Java program to implement thread priority using java.

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
Program to implement Thread Priority using Java
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
        String newName = sc.nextLine().trim();

        Thread currentThread = Thread.currentThread();
        currentThread.setName(newName);

        System.out.println("Priority of Thread: " + currentThread.getPriority());
        System.out.println("Name of Thread: " + currentThread.getName());
        System.out.println(currentThread.toString());

        sc.close();
    }
}
```

## OUTPUT:

Input: NewThread
Output: Priority of Thread: 5 Name of Thread: NewThread Thread[NewThread,5,main]

## RESULT:

Thus the Java program to implement thread priority using java was executed successfully.