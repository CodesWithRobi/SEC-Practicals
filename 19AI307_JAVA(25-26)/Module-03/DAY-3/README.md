# Ex.No:3(C) ABSTRACTION

## QUESTION:

In a secret intelligence facility, encrypted messages are stored as arrays of characters. Each type of agent has a different way to decode these messages. Define an abstract class Decoder with a method decodeMessage(String[] fragments).There are two types of agents:
AlphaAgent: Extracts a meaningful string by rearranging the fragments based on even indices first, then odd indices, and then reversing the final result.
BetaAgent: Picks all fragments that start and end with the same letter, joins them with -, and removes all vowels from the resulting string.
Input Format:
First line: Integer N (number of fragments)  Next N lines: The string fragments  Next line: 1 for AlphaAgent, 2 for BetaAgent
Output Format:
Decoded message (string)
Explanation:
For input:
5alphaechobravoosloomega1
Rearrangement Steps for AlphaAgent:First pick even-indexed fragments :["alpha", "bravo", "omega"]
Then pick odd-indexed fragments :["echo", "oslo"]
Merge them:["alpha", "bravo", "omega", "echo", "oslo"]
Reverse this list:["oslo", "echo", "omega", "bravo", "alpha"]
Join as a single string:"osloechoomegabravoalpha"
Your output should be: osloechoomegabravoalpha
Rearrangement Steps for BetaAgent:
For input:
4levelradaragentpop2
Select specific fragmentsOnly consider fragments where:
The first character and the last character of the string are the same(e.g., "radar" → 'r' == 'r', "agent" → 'a' != 't' → discard)
Combine with a dashJoin the selected fragments using the - symbol (hyphen).
Censor vowelsRemove all vowels (a, e, i, o, u) – both uppercase and lowercase – from the final joined string.
Your output should be: "lvl-rdr-pp"
For example:
Example: 5
alpha
echo
bravo
oslo
omega
1 | osloechoomegabravoalpha | 4
level
radar
agent
pop
2 | lvl-rdr-pp

## AIM:

To write a Java program to implement abstraction using java.

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
Program to implement Abstraction using Java
Developed by: ROBINSON J
RegisterNumber: 212223040170
*/
```

## SOURCE CODE:

```java
import java.util.Scanner;
import java.util.ArrayList;

abstract class Decoder {
    abstract String decodeMessage(String[] fragments);
}

class AlphaAgent extends Decoder {
    @Override
    String decodeMessage(String[] fragments) {
        ArrayList<String> merged = new ArrayList<>();
        for (int i = 0; i < fragments.length; i += 2) {
            merged.add(fragments[i]);
        }
        for (int i = 1; i < fragments.length; i += 2) {
            merged.add(fragments[i]);
        }
        StringBuilder sb = new StringBuilder();
        for (int i = merged.size() - 1; i >= 0; i--) {
            sb.append(merged.get(i));
        }
        return sb.toString();
    }
}

class BetaAgent extends Decoder {
    @Override
    String decodeMessage(String[] fragments) {
        ArrayList<String> selected = new ArrayList<>();
        for (String f : fragments) {
            if (f.length() > 0 && f.charAt(0) == f.charAt(f.length() - 1)) {
                selected.add(f);
            }
        }
        String joined = String.join("-", selected);
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < joined.length(); i++) {
            char ch = joined.charAt(i);
            char lower = Character.toLowerCase(ch);
            if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
                sb.append(ch);
            }
        }
        return sb.toString();
    }
}

class prog {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        
        String[] fragments = new String[n];
        for (int i = 0; i < n; i++) {
            fragments[i] = sc.nextLine();
        }
        
        int choice = sc.nextInt();
        Decoder decoder;
        if (choice == 1) {
            decoder = new AlphaAgent();
        } else {
            decoder = new BetaAgent();
        }
        
        System.out.println(decoder.decodeMessage(fragments));
        
        sc.close();
    }
}
```

## OUTPUT:

Input: 5 alpha echo bravo oslo omega 1
Output: osloechoomegabravoalpha

Input: 4 level radar agent pop 2
Output: lvl-rdr-pp

## RESULT:

Thus the Java program to implement abstraction using java was executed successfully.