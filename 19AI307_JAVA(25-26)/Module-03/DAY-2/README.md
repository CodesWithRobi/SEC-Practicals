# Ex.No:3(b) POLYMORPHISM

## QUESTION:

Write a Java program to create a base class Vehicle with methods startEngine() and stopEngine(). Create two subclasses: Car and Motorcycle. Override the startEngine() and stopEngine() methods in each subclass to start and stop the engines differently.
For example:
Example: car | Car engine started with key ignition.
Car engine stopped with key ignition. | motorcycle | Motorcycle engine started with kick start.
Motorcycle engine stopped using engine kill switch.

## AIM:

To write a Java program to implement polymorphism using java.

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
Program to implement Polymorphism using Java
Developed by: ROBINSON J
RegisterNumber: 212223040170
*/
```

## SOURCE CODE:

```java
import java.util.*;

interface Vehicle {
    void startEngine();
    void stopEngine();
}

class Car implements Vehicle {
    public void startEngine() {
        System.out.println("Car engine started with key ignition.");
    }
    public void stopEngine() {
        System.out.println("Car engine stopped with key ignition.");
    }
}

class Motorcycle implements Vehicle {
    public void startEngine() {
        System.out.println("Motorcycle engine started with kick start.");
    }
    public void stopEngine() {
        System.out.println("Motorcycle engine stopped using engine kill switch.");
    }
}
class prog {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        switch(sc.next()) {
            case "car" :
                Vehicle carObj = new Car();
                carObj.startEngine();
                carObj.stopEngine();
                break;
            case "motorcycle" :
                Vehicle motorcycleObj = new Motorcycle();
                motorcycleObj.startEngine();
                motorcycleObj.stopEngine();
                break;
            default:
                System.out.println("Invalid vehicle type selected.");
        }
    }
}
```

## OUTPUT:

Input: car
Output: Car engine started with key ignition. Car engine stopped with key ignition.

Input: motorcycle
Output: Motorcycle engine started with kick start. Motorcycle engine stopped using engine kill switch.

## RESULT:

Thus the Java program to implement polymorphism using java was executed successfully.