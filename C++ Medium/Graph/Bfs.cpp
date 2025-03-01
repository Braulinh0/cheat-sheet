#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

vector<vector<int>> adj; // Lista de adyacencia
vector<bool> visited;    // Vector para marcar nodos visitados
vector<int> distancia;   // Vector para guardar las distancias desde el nodo inicial

void bfs(int v) {
    queue<int> q; // Cola de nodos para procesar
    visited[v] = true;
    distancia[v] = 0;
    q.push(v);

    while(!q.empty()) {
        int s = q.front();
        q.pop();

        for(auto u : adj[s]) {
            if(!visited[u]) {
                visited[u] = true;
                distancia[u] = distancia[s] + 1;
                q.push(u);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    cout.setf(ios::fixed);
    cout.precision(10);

    int n, m; // n = cantidad de nodos, m = cantidad de aristas
    cin >> n >> m;

    adj.resize(n + 1); // Ajustar el tamaño de la lista de adyacencia
    visited.assign(n + 1, false); // Inicializar el vector de visitados
    distancia.assign(n + 1, -1); // Inicializar las distancias con -1

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        // Como es un grafo no dirigido
        adj[u].push_back(v);
        adj[v].push_back(u); 
    
        // En caso de que quieras hacer un grafo dirigido
        // adj[u].push_back(v);
    }

    int start;
    cin >> start; // Nodo inicial para el BFS

    bfs(start);

    // Imprimir las distancias desde el nodo inicial
    for(int i = 1; i <= n; i++) {
        cout << "Distancia al nodo " << i << ": " << distancia[i] << endl;
    }

    return 0;
}
