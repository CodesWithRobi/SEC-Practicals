# Ex.No:3(A) INHERITANCE AND AGGREGATION

## QUESTION:

A jewelry store tracks gold rates for different types of customers. The base class is Customer with attributes like customerId, name, and purchaseWeight (in grams). There are two types of customers: RegularCustomer and PremiumCustomer. RegularCustomer gets a fixed discount of 2% on the gold rate per gram. PremiumCustomer gets a 5% discount plus a special cashback. The base gold rate per gram is input at runtime. For each customer, calculate the final price they pay:
finalPrice = purchaseWeight * (goldRatePerGram - discount)
For PremiumCustomer, additionally show cashback amount (which is 1% of the final price).
import java.util.Scanner;import java.text.DecimalFormat;
class Customer {    String customerId, name;    double purchaseWeight, goldRatePerGram;
Customer(String customerId, String name, double purchaseWeight, double goldRatePerGram) {        this.customerId = customerId;        this.name = name;        this.purchaseWeight = purchaseWeight;        this.goldRatePerGram = goldRatePerGram;    }
double getDiscountRate() {        return 0;    }
double calculateFinalPrice() {        double discountAmount = goldRatePerGram * getDiscountRate() / 100;        double effectiveRate = goldRatePerGram - discountAmount;        return purchaseWeight * effectiveRate;    }
void display() {        DecimalFormat df = new DecimalFormat("0.00");        System.out.println("Customer ID: " + customerId);        System.out.println("Name: " + name);        System.out.println("Customer Type: General");        System.out.println("Purchase Weight: " + purchaseWeight + " grams");        System.out.println("Gold Rate per Gram: " + goldRatePerGram);        System.out.println("Discount: " + getDiscountRate() + "%");        System.out.println("Final Price: " + df.format(calculateFinalPrice()));         }}
//Continue your Code here

## AIM:

To write a Java program to implement inheritance and aggregation using java.

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
Program to implement Inheritance and Aggregation using Java
Developed by: ROBINSON J
RegisterNumber: 212223040170
*/
```

## SOURCE CODE:

```java
import java.util.Scanner;
import java.text.DecimalFormat;

abstract class Customer {
    String customerId, name;
    double purchaseWeight, goldRatePerGram;

    Customer(String customerId, String name, double purchaseWeight, double goldRatePerGram) {
        this.customerId = customerId;
        this.name = name;
        this.purchaseWeight = purchaseWeight;
        this.goldRatePerGram = goldRatePerGram;
    }

    abstract String getCustomerType();
    abstract int getDiscountRate();

    double calculateFinalPrice() {
        double discountAmount = goldRatePerGram * getDiscountRate() / 100;
        double effectiveRate = goldRatePerGram - discountAmount;
        return purchaseWeight * effectiveRate;
    }

    void display() {
        System.out.println("Customer ID: " + customerId);
        System.out.println("Name: " + name);
        System.out.println("Customer Type: " + getCustomerType());
        System.out.println("Purchase Weight: " + purchaseWeight + " grams");
        System.out.println("Gold Rate per Gram: " + goldRatePerGram);
        System.out.println("Discount: " + getDiscountRate() + "%");
        System.out.format("Final Price: %.2f%n", calculateFinalPrice());
     
    }
}

class RegularCustomer extends Customer {
    RegularCustomer(String customerId, String name, double purchaseWeight, double goldRatePerGram) {
        super(customerId, name, purchaseWeight, goldRatePerGram);
    }

    @Override
    String getCustomerType() {
        return "Regular";
    }
    
    @Override
    int getDiscountRate() {
        return 2;
    }
    
}

class PremiumCustomer extends Customer {
    PremiumCustomer(String customerId, String name, double purchaseWeight, double goldRatePerGram) {
        super(customerId, name, purchaseWeight, goldRatePerGram);
    }
    
    @Override
    String getCustomerType() {
        return "Premium";
    }
    
    @Override
    int getDiscountRate() {
        return 5;
    }

    double calculateCashback() {
        return calculateFinalPrice() * 0.01;
    }
    
    @Override
    void display() {
        super.display();
        System.out.format("Cashback: %.2f%n", calculateCashback());
    }
}

class prog {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        String customerType = sc.next();
        String id = sc.next();
        String name = sc.next();
        double weight = sc.nextDouble();
        double rate = sc.nextDouble();
        
        Customer cust = switch(customerType.toUpperCase()) {
            case "REGULAR" -> new RegularCustomer(id, name, weight, rate);
            case "PREMIUM" -> new PremiumCustomer(id, name, weight, rate);
            default -> throw new IllegalArgumentException("Got customer type as " + customerType.toUpperCase());
        };

        cust.display();
        
        sc.close();
    }
}
```

## OUTPUT:

Input: Regular C101 Alice 50 5500
Output: Regular C101 Alice 50 5500

Input: Premium C102 Bob 100 5500
Output: Premium C102 Bob 100 5500

Input: Regular C103 Carol 20 5600
Output: Regular C103 Carol 20 5600

## RESULT:

Thus the Java program to implement inheritance and aggregation using java was executed successfully.