# Ex.No: 1  Implementation of Breadth First Search 
### DATE: 12/08/25                                         
### REGISTER NUMBER : 212223040170
### AIM: 
To write a python program to implement Breadth first Search. 
### Algorithm:
1. Start the program
2. Create the graph by using adjacency list representation
3. Define a function bfs and take the set “visited” is empty and “queue” is empty
4. Search start with initial node and add the node to visited and queue.
5. For each neighbor node, check node is not in visited then add node to visited and queue list.
6.  Creating loop to print the visited node.
7.   Call the bfs function by passing arguments visited, graph and starting node.
8.   Stop the program.
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
queue = []


def bfs(start):
    queue.append(start)
    visited.append(start)
    while queue:
        node = queue.pop(0)
        print(f"{node}", end="->")
        for neighbour in graph[node]:
            if neighbour not in visited:
                queue.append(neighbour)
                visited.append(neighbour)


bfs("1")
```

### Output:
<img width="655" height="196" alt="image" src="https://github.com/user-attachments/assets/ee6252ea-826e-4ce1-9d86-7658d9ab3762" />


### Result:
Thus the breadth first search order was found sucessfully.
