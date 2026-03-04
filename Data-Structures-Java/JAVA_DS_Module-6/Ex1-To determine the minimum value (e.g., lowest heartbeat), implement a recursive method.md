# EX 1 You’re creating a health monitoring device which stores several sensor readings in an array. To determine the minimum value (e.g., lowest heartbeat), implement a recursive method.
## DATE: 26-8-2025
## AIM:
To write a JAVA program To determine the minimum value (e.g., lowest heartbeat), implement a recursive method.

## Algorithm
1. Read n and the array elements.
2. Call getMin(arr, 0, n).
3. If i is the last index, return arr[i].
4. Recursively get the minimum of the rest of the array.
5. Return the smaller value between arr[i] and the recursive result.
 

## Program:
```PY
/*
Program To determine the minimum value (e.g., lowest heartbeat), implement a recursive method.
Developed by: ROBINSON J
RegisterNumber: 212223040170
*/

import java.util.*;

public class Main {
    static int getMin(int[] arr, int i, int n) 
    {
        if(i==n-1){
            return arr[i];
        }
        int minRest = getMin(arr, i + 1, n);

    if (arr[i] < minRest) {
        return arr[i];  
    } else {
        return minRest; 
    }
        
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println(getMin(arr, 0, n));
    }
}

```

## Output:
<img width="527" height="199" alt="image" src="https://github.com/user-attachments/assets/91a5d3c6-7723-46b9-934f-659b6b252937" />


## Result:
Thus the JAVA prograM ti find the minimum value (e.g., lowest heartbeat), implement a recursive method has implemented successfully
