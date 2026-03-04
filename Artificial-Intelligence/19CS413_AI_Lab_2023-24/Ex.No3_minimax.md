# Ex.No: 3  Implementation of Minimax Search
### DATE: 26/08/25                                                                           
### REGISTER NUMBER : 212223040170
### AIM: 
Write a mini-max search algorithm to find the optimal value of MAX Player from the given graph.
### Algorithm:
1. Start the program
2. import the math package
3. Specify the score value of leaf nodes and find the depth of binary tree from leaf nodes.
4. Define the minimax function
5. If maximum depth is reached then get the score value of leaf node.
6. Max player find the maximum value by calling the minmax function recursively.
7. Min player find the minimum value by calling the minmax function recursively.
8. Call the minimax function  and print the optimum value of Max player.
9. Stop the program. 

### Program:
```python
function minimax(board, depth, isMaximizingPlayer):
   # First, check if the game is over
   if game is won:
       return +10 if computer wins, -10 if human wins
   if game is tied:
       return 0

   # If it's the computer's turn (maximizing)
   if isMaximizingPlayer:
       bestScore = -infinity
       for each empty spot on board:
           make the move
           score = minimax(board, depth + 1, false)
           undo the move
           bestScore = max(score, bestScore)
       return bestScore

   # If it's the human's turn (minimizing)
   else:
       bestScore = +infinity
       for each empty spot on board:
           make the move
           score = minimax(board, depth + 1, true)
           undo the move
           bestScore = min(score, bestScore)
       return bestScore
```


### Output:
<img width="686" height="90" alt="image" src="https://github.com/user-attachments/assets/363eb47b-02d8-405e-a8ab-8d8f768e8db2" />

### Result:
Thus the optimum value of max player was found using minimax search.
