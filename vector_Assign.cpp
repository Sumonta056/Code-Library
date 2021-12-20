vectorname.assign(int size, int value)

Parameters: 
size - number of values to be assigned
value - value to be assigned to the vectorname


vector<int> v;
    v.assign(7, 100);

Size of first: 7
Elements are
100
100
100
100
100
100
100

vector<int> v1;
    int a[] = { 1, 2, 3 };
 
    // assign first 2 values
    v1.assign(a, a + 2)

Elements of vector1 are
1 2   


// * 2d vector

typedef vector<int> vi;

vector<vi> AdjList;
V = number of row
AdjList.assign(V, vi());

AdjList[u].push_back(v);
			AdjList[v].push_back(u);


for (int j = 0; j < (int) AdjList[u].size(); j++) 
            {
				int v = AdjList[u][j];
				cout << v << endl;
			}

