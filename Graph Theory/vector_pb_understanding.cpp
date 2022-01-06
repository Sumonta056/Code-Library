for (ll i = 0; i < edge; i++)
{
    ll a, b;
    cin >> a >> b;

    adj[a].pb(b);
    adj[b].pb(a);
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

for (ll i = 0; i < adj[cNode].size(); i++)
{
    if (!visited[adj[cNode][i]])
    {
        parent[adj[cNode][i]] = cNode;
        dis[adj[cNode][i]] = dis[cNode] + 1;

        q.push(adj[cNode][i]);
    }
}


// * !visited[adj[cNode][i]] 
here if adj[cNode][i] has a value then it will true
otherwise false