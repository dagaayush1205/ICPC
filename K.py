from collections import defaultdict, deque
import heapq


def topological_sort(n, m, prerequisites):
    graph = defaultdict(list)
    indegree = [0] * (n + 1)

    for a, b in prerequisites:
        graph[a].append(b)
        indegree[b] += 1

    min_heap = []

    for i in range(1, n + 1):
        if indegree[i] == 0:
            heapq.heappush(min_heap, i)

    res = []

    while min_heap:
        current_project = heapq.heappop(min_heap)
        res.append(current_project)

        for neighbor in graph[current_project]:
            indegree[neighbor] -= 1
            if indegree[neighbor] == 0:
                heapq.heappush(min_heap, neighbor)

    if len(res) != n:
        return "IMPOSSIBLE"

    return res


if __name__ == "__main__":
    n, m = map(int, input().split())
    prerequisites = [tuple(map(int, input().split())) for _ in range(m)]

    res = topological_sort(n, m, prerequisites)

    if res == "IMPOSSIBLE":
        print(res)
    else:
        print(" ".join(map(str, res)))
