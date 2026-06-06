# Ex.No:5(B) SERIALIZATION AND DESERIALIZATION

## QUESTION:

Write a Java program to read multiple UTF strings from the user, write them to a ByteArrayOutputStream using DataOutputStream, and display the byte array contents.

## AIM:

To write a Java program to implement serialization and deserialization using java.

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
Program to implement Serialization and Deserialization using Java
Developed by: ROBINSON J
RegisterNumber: 212223040170
*/
```

## SOURCE CODE:

```java
import java.io.ByteArrayOutputStream;
import java.io.DataOutputStream;
import java.io.ByteArrayInputStream;
import java.io.DataInputStream;
import java.io.IOException;
import java.util.Scanner;

class prog {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();

        ByteArrayOutputStream baos = new ByteArrayOutputStream();
        DataOutputStream dos = new DataOutputStream(baos);

        try {
            for (int i = 0; i < n; i++) {
                dos.writeUTF(sc.nextLine());
            }
            dos.flush();

            byte[] byteArray = baos.toByteArray();

            System.out.println("Byte array contents:");
            for (byte b : byteArray) {
                System.out.print(b + " ");
            }
            System.out.println();
            System.out.println("Total bytes: " + byteArray.length);
            System.out.println();


            ByteArrayInputStream bais = new ByteArrayInputStream(byteArray);
            DataInputStream dis = new DataInputStream(bais);

            System.out.println("Strings read from memory:");
            for (int i = 0; i < n; i++) {
                System.out.println(dis.readUTF());
            }

        } catch (IOException e) {
            System.out.println("An error occurred: " + e.getMessage());
        } finally {
            sc.close();
        }
    }
}
```

## OUTPUT:

Input: 2 hello world
Output: Byte array contents: 0 5 104 101 108 108 111 0 5 119 111 114 108 100 Total bytes: 14  Strings read from memory: hello world

Input: 3 hi hello java
Output: Byte array contents: 0 2 104 105 0 5 104 101 108 108 111 0 4 106 97 118 97 Total bytes: 17  Strings read from memory: hi hello java

Input: 2 python java
Output: Byte array contents: 0 6 112 121 116 104 111 110 0 4 106 97 118 97 Total bytes: 14  Strings read from memory: python java

## RESULT:

Thus the Java program to implement serialization and deserialization using java was executed successfully.