# Ex.No:1(D) ARRAYS

## QUESTION:

Write a Java program to find the index of a given element in an array
For example:
Example: 3
1
2
3
4 | Element not found | 4
11
22
33
44
22 | 1

## AIM:

To write a Java program to implement arrays using java.

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
Program to implement Arrays using Java
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
        long[] arr = new long[n];
        
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextLong();
        }
        
        long target = sc.nextLong();
        int index = -1;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                index = i;
                break;
            }
        }
        
        if (index != -1) {
            System.out.println(index);
        } else {
            System.out.println("Element not found");
        }
    }
}
```

## OUTPUT:

Input: 3 1 2 3 4
Output: Element not found

Input: 4 11 22 33 44 22
Output: 1

Input: 1 1000 1000
Output: 0

## RESULT:

Thus the Java program to implement arrays using java was executed successfully.