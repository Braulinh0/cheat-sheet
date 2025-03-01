#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

vector<vector<int>> adj; // Lista de adyacencia
vector<bool> visited; // Vector para marcar nodos visitados

void dfs(int v) {
    if(visited[v]) return;
    visited[v] = true;

    for(auto u : adj[v]) {
        dfs(u);
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

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        // Como es un grafo no dirigido
        adj[u].push_back(v);
        adj[v].push_back(u); 

        // En caso de que sea un grafo dirigido
        adj[u].push_back(v);
    }

    int start;
    cin >> start; // Nodo inicial para el DFS

    dfs(start);

    // Imprimir los nodos visitados
    for(int i = 1; i <= n; i++) {
        cout << "Nodo " << i << (visited[i] ? " visitado" : " no visitado") << endl;
    }

    return 0;
}
