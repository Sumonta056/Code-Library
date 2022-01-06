#include<bits/stdc++.h>
using namespace std;
map<int,vector<int>>vec;
map<int,bool>vis;
vector<vector<int>>connected_nodes;
vector<int>current_nodes;

void print_connected_components(){
    for(auto i : connected_nodes){
        for(int j : i) cout<<j<<" ";
        cout<<endl;
    }
}

void print_data(){
    for(auto it=vec.begin();it!=vec.end();it++){
        cout<<it->first<<" ";
        for(int i=0;i<vec[it->first].size();i++) cout<<vec[it->first][i]<<" ";
        cout<<endl;
    }
}

void dfs(int source){
    vis[source]=true;
    current_nodes.push_back(source);
    for(int i : vec[source]) if(!vis[i]) dfs(i);
}

int main(){
    freopen("input2.txt","r",stdin);
    int node,edge;
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        int x,y;
        cin>>x>>y;
        vec[x].push_back(y);
        vec[y].push_back(x);
    }
    print_data();
    int ans=0;
    for(auto it=vec.begin();it!=vec.end();it++){
        current_nodes.clear();
        if(!vis[it->first]){
            dfs(it->first);
            connected_nodes.push_back(current_nodes);
            ans++;
        }
    }
    cout<<"Number of Connected component :: "<<ans<<endl;
    print_connected_components();
    return 0;
}