# Ex.No:3(E) INNER CLASS

## QUESTION:

Write a Java program to reverse a number using the Integer wrapper class and compare it with the original number.

## AIM:

To write a Java program to implement inner class using java.

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
Program to implement Inner Class using Java
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
        int original = sc.nextInt();
        
        String originalStr = Integer.toString(original);
        String reversedStr = new StringBuilder(originalStr).reverse().toString();
        int reversed = Integer.parseInt(reversedStr);
        if (original == reversed) {
            System.out.println(original + " is a palindrome number.");
        } else {
            System.out.println(original + " is not a palindrome number.");
            System.out.println("Reversed Number: " + reversed);
        }
    }
}
```

## OUTPUT:

Input: 121
Output: 121 is a palindrome number.

Input: 153
Output: 153 is not a palindrome number. Reversed Number: 351

Input: 525
Output: 525 is a palindrome number.

## RESULT:

Thus the Java program to implement inner class using java was executed successfully.