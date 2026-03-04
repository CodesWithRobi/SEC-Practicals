# Ex2 Count how many times a number appears in an array recursively.
## DATE: 16-9-2025
## AIM:
To write a Java program to Count how many times a number appears in an array recursively.

## Algorithm:

1. Read the array size, array elements, and the target value.

2.Call the recursive function countOccurrences(arr, n, target).

3.If n becomes 0, return 0 (no elements left).

4.Otherwise, check if the last element arr[n-1] equals the target.

5.Return 1 + recursive call if it matches, else return just the recursive call.

## Program:
```PY
/*
Program Count how many times a number appears in an array recursively.
Developed by: ROBINSON J
RegisterNumber: 212223040170
*/

import java.util.Scanner;

public class CountOccurrences {

   
    public static int countOccurrences(int[] arr, int n, int target) {
        if (n == 0) {
            return 0;
        } 
        else {
            if (arr[n - 1] == target) {
                return 1 + countOccurrences(arr, n - 1, target);
            } 
            else {
                return countOccurrences(arr, n - 1, target);
            }
        }
 }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int size = scanner.nextInt();

        if (size <= 0) {
            System.out.println("Invalid array size. Must be positive.");
            return;
        }
        int[] arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = scanner.nextInt();
        }
        int target = scanner.nextInt();
        int count = countOccurrences(arr, size, target);
        System.out.println("The number " + target + " appears " + count + " time(s) in the array.");

        scanner.close();
    }
}
```

## Output:
<img width="917" height="570" alt="image" src="https://github.com/user-attachments/assets/4924a030-d686-40f7-92e6-1bb6e88e7f39" />


## Result:
Thus, the Java program to Count how many times a number appears in an array recursively is implemented successfully.
