#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

const int INF = numeric_limits<int>::max();

void dijkstra(int start, vector<vector<pair<int, int>>> &graph) {
    int n = graph.size();
    vector<int> dist(n, INF);  // Vector de distancias, inicializado en infinito
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq; // Min heap

    dist[start] = 0;
    pq.push({0, start});  // Insertamos el nodo de inicio con distancia 0

    while(!pq.empty()) {
        int u = pq.top().second; // Nodo actual
        int d = pq.top().first;  // Distancia mínima encontrada
        pq.pop();

        if(d > dist[u]) continue; // Si la distancia ya fue actualizada, ignoramos

        for(auto &[v, weight] : graph[u]) { // Recorremos vecinos
            int newDist = dist[u] + weight;
            
            if(newDist < dist[v]) {
                dist[v] = newDist;
                pq.push({newDist, v});
            }
        }
    }

    // Imprimir distancias más cortas desde el nodo de inicio
    cout << "Distancias desde el nodo " << start << ":\n";
    for(int i = 0; i < n; i++) {
        if (dist[i] == INF) {
            cout << "Nodo " << i << ": INF" << endl;
        } else {
            cout << "Nodo " << i << ": " << dist[i] << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    cout.setf(ios::fixed);
    cout.precision(10);

    int n, m;
    cout << "Ingrese el número de nodos y aristas: ";
    cin >> n >> m;

    vector<vector<pair<int, int>>> graph(n);

    cout << "Ingrese las aristas (origen, destino, peso):\n";
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;

        graph[u].push_back({v, w});
        graph[v].push_back({u, w}); // Para grafo no dirigido, eliminar si es dirigido
    }

    int start;
    cout << "Ingrese el nodo de inicio: ";
    cin >> start;

    dijkstra(start, graph);

    return 0;
}
