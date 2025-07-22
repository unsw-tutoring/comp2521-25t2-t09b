#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "Graph.h"
#include "Set.h"

void dfs(Graph g, Vertex v, Set visited) {
    SetInsert(visited, v);

    for (Vertex w = 0; w < GraphNumVertices(g); w++) {
        if (GraphIsAdjacent(g, v, w) && !SetContains(visited, w)) {
            dfs(g, w, visited);
        }
    }
}

Set reachable(Graph g, Vertex src) {
    Set visited = SetNew();
    dfs(g, src, visited);
    return visited;
}
