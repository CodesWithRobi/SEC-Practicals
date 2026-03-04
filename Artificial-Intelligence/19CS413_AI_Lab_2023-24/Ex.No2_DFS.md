# Ex.No: 2  Implementation of Depth First Search
### DATE: 12/08/25
### REGISTER NUMBER : 212223040170
### AIM: 
To write a python program to implement Depth first Search. 
### Algorithm:
1. Start the program
2. Create the graph by using adjacency list representation
3. Define a function dfs and take the set “visited” is empty 
4. Search start with initial node. Check the node is not visited then print the node.
5. For each neighbor node, recursively invoke the dfs search.
6. Call the dfs function by passing arguments visited, graph and starting node.
7. Stop the program.
### Program:
```python

graph = {
    "1": ["2", "3"],
    "2": ["4", "5"],
    "3": ["6", "7"],
    "4": [],
    "5": [],
    "6": [],
    "7": [],
}

visited = []


def dfs(start):
    visited.append(start)
    print(start, end="->")
    for neighbour in graph[start]:
        if neighbour not in visited:
            dfs(neighbour)
            visited.append(neighbour)


dfs("1")
```

### Output:
<img width="654" height="161" alt="image" src="https://github.com/user-attachments/assets/a01e4bce-9f50-4783-b8a5-3840d1062d93" />


### Result:
Thus the depth first search order was found sucessfully.
