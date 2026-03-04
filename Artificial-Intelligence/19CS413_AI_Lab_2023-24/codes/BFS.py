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
