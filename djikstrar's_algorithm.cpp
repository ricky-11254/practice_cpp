#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

struct vcity {
    int city_id;
    int dist;
    bool operator<(vcity a) const {
        return dist > a.dist;
    }
};

struct edge {
    int dest;
    int length;
};

vector<edge> graph[10000];
priority_queue<vcity> expanded;
int dist[10001];
void setup(int N, int M) {
    for (int i = 0; i <= N; i++) {
        dist[i] = -1;
        graph[i].clear();
    }
    
    while(!expanded.empty()) {
        expanded.pop();
    }
}
int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int N, M;
        cin >> N >> M;
        setup(N, M);
        for (int i = 0; i < M; i++) {
            edge tmp;
            int source;
            cin >> source >> tmp.dest >> tmp.length;
            graph[source].push_back(tmp);
            edge tmp2;
            tmp2.dest = source;
            tmp2.length = tmp.length;
            graph[tmp.dest].push_back(tmp2);
        }
        
        int start;
        cin >> start;
        vcity first;
        first.city_id = start;
        first.dist = 0;
        expanded.push(first);
        while (!expanded.empty()) {
            vcity curr = expanded.top();
            expanded.pop();
            if (dist[curr.city_id] == -1) {
                dist[curr.city_id] = curr.dist;
                for (int j = 0; j < graph[curr.city_id].size(); j++) {
                    int city = graph[curr.city_id][j].dest;
                    if (dist[city] == -1) {
                        vcity nxt;
                        nxt.city_id = city;
                        nxt.dist = curr.dist + graph[curr.city_id][j].length;
                        expanded.push(nxt);
                    }
                }
            }
        }
        
        for (int i = 1; i <=  N; i++) {
            if (i != start) {
                cout << dist[i] <<  " ";
            }
        }
        cout << endl;
    }
    return 0;
}
