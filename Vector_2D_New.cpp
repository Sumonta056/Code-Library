vector<vector<ll>> adj(mx);


    cin >> node >> edge;

    for (ll i = 0; i < edge; i++) {
        ll a, b;
        cin >> a >> b;

        adj[a].pb(b);
        adj[b].pb(a); // undirected edge
    }

    /*
       0 1
       1 2
       2 0
    */
    // * vector 0 = 1 ,2
    // * vector 1 = 0 , 2
    // * vector 2 = 1 , 0

    //* vector[0][0] = 1 , vector[0][1] = 2 , vector[1][1] = 2 , vector[2][0] = 1


    vector<vector<int>> v {{1, 0, 1}, {0, 1}, {1, 0, 1}}; 
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }  

1 0 1 
0 1 
1 0 1 

   //Number of columns
    int num_col = 3;
 
    // Number of rows
    int num_row = 4;
 
    // Initializing a single row
    vector<int> row(num_col, 0);
 
    // Initializing the 2-D vector
    vector<vector<int>> v(num_row, row) ;
 
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }  

0 0 0 
0 0 0 
0 0 0 
0 0 0 


 // Initializing the 2-D vector
    vector<vector<int>> v;
 
    v.push_back({1, 0, 1});
    v.push_back({0, 1});
    v.push_back({1, 0, 1});

    Note: 'v[i]' represents a single-dimensional vector. Therefore,
    if the programmer needs to add elements in a certain vector inside the 2-D vector, he may use 'v[i].push_back(value)'.


 // Remove the last vector from a 2-D vector
    v.pop_back();


    // clear vector
     for(i=0; i<no; i++)
        {
            vec[i].clear();
        }

