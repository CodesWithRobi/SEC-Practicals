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
