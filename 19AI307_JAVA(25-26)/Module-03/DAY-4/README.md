# Ex.No:3(D) INTERFACE

## QUESTION:

Each judge uses different criteria to score fighters. Based on points, the judge will declare “WIN”, “LOSE” or “DRAW”.
LenientJudge: WIN if diff ≥ 5, DRAW if < 5
StrictJudge: WIN if diff ≥ 10, DRAW if < 10
Input Format:player1Scoreplayer2ScorejudgeTypeplayer1Score, player2Score: integers
judgeType: 1 for LenientJudge, 2 for StrictJudge
Output Format:WIN / LOSE / DRAW
For example:
Example: 30 25 1 | WIN | 30 28 1 | DRAW

## AIM:

To write a Java program to implement interface using java.

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
Program to implement Interface using Java
Developed by: ROBINSON J
RegisterNumber: 212223040170
*/
```

## SOURCE CODE:

```java
import java.util.Scanner;

abstract class Judge {
    abstract String declareResult(int p1, int p2);
}

class LenientJudge extends Judge {
    @Override
    String declareResult(int p1, int p2) {
        int diff = p1 - p2;
        if (diff >= 5) {
            return "WIN";
        } else if (diff <= -5) {
            return "LOSE";
        } else {
            return "DRAW";
        }
    }
}

class StrictJudge extends Judge {
    @Override
    String declareResult(int p1, int p2) {
        int diff = p1 - p2;
        if (diff >= 10) {
            return "WIN";
        } else if (diff <= -10) {
            return "LOSE";
        } else {
            return "DRAW";
        }
    }
}

class prog {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int player1Score = sc.nextInt();
        int player2Score = sc.nextInt();
        int judgeType = sc.nextInt();
        
        Judge judge;
        if (judgeType == 1) {
            judge = new LenientJudge();
        } else {
            judge = new StrictJudge();
        }
        
        System.out.println(judge.declareResult(player1Score, player2Score));
        
        sc.close();
    }
}
```

## OUTPUT:

Input: 30 25 1
Output: WIN

Input: 30 28 1
Output: DRAW

Input: 40 30 2
Output: WIN

Input: 50 45 2
Output: DRAW

## RESULT:

Thus the Java program to implement interface using java was executed successfully.