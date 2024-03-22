function shortestPath(graph, source, target) {
    const distances = {};
    const previous = {};
    const queue = [];

    distances[source] = 0;

    for (let vertex in graph) {
        if (vertex !== source) {
            distances[vertex] = Infinity;
        }
        queue.push(vertex);
    }

    while (queue.length) {
        queue.sort((a, b) => distances[a] - distances[b]);
        const smallest = queue.shift();

        if (smallest === target) {
            const path = [];
            let current = target;
            while (current !== source) {
                path.unshift(current);
                current = previous[current];
            }
            path.unshift(source);
            return path;
        }

        if (distances[smallest] === Infinity) {
            break;
        }

        for (let neighbor in graph[smallest]) {
            const alt = distances[smallest] + graph[smallest][neighbor];
            if (alt < distances[neighbor]) {
                distances[neighbor] = alt;
                previous[neighbor] = smallest;
            }
        }
    }

    return [];
}

// Example usage:
const graph = {
    A: { B: 5, C: 2 },
    B: { D: 4, E: 2 },
    C: { B: 8, E: 7 },
    D: { F: 3 },
    E: { F: 1 },
    F: {}
};

console.log(shortestPath(graph, 'A', 'F')); // Output: ['A', 'C', 'E', 'F']
