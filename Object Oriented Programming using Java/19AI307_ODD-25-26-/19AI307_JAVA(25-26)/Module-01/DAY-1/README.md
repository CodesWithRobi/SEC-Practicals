# Ex.No:1(A) INTRODUCTION TO JAVA PROGRAMMING, DATA TYPES, VARIABLES AND OPERATORS

## QUESTION:

Lovely wants to enter a secure tech conference. The security system checks certain conditions to grant access. These conditions are:
She must be registered (true/false).
She must have a valid ID (true/false).
She must NOT be blacklisted (true/false).
The system uses logical operators to evaluate her access eligibility:
If she is registered AND has a valid ID, and NOT blacklisted, she is granted access.
Otherwise, access is denied.
Your task is to evaluate these conditions using logical operators and print whether access is granted or denied.
Input Format:Three boolean values entered by the user (true or false):
<isRegistered><hasValidID><isBlacklisted>Output Format:Access Granted: true/false
For example:
Example: true
true
false | Access Granted: true

## AIM:

To write a Java program to implement variables and operators using java.

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
Program to implement Variables and Operators using Java
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
        boolean isRegistered = sc.nextBoolean();
        boolean hasValidID = sc.nextBoolean();
        boolean isBlacklisted = sc.nextBoolean();
        System.out.println("Access Granted: "+ (isRegistered && hasValidID && !isBlacklisted));
        
    }
}
```

## OUTPUT:

Input: true true false
Output: Access Granted: true

Input: true false false
Output: Access Granted: false

## RESULT:

Thus the Java program to implement variables and operators using java was executed successfully.