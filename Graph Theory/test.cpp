#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

typedef vector<int> vi;

int main() {
	int V, E, u, v;
	vector<vi> AdjList;

	while (scanf("%d", &V), V) {
		AdjList.assign(V, vi());
		scanf("%d", &E);

		for (int i = 0; i < E; i++) {
			scanf("%d %d", &u, &v);
			AdjList[u].push_back(v);
			AdjList[v].push_back(u);
		}

	
			for (int j = 0; j < (int) AdjList[u].size(); j++) 
            {
				int v = AdjList[u][j];
				cout << v << endl;
			}
		}

\

	return 0;
}