int main(){
   Solution ob;

   int n ;
   cin >> n ;

   vector<vector<int>> v( n , vector<int> (2)) ;
   //vector<vector<int>> v = {{1,1},{3,2},{5,3},{4,1},{2,3},{1,4}};
   // (row , coloumn)
   

    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < 2 ; j++)
        {
            int p;
            cin>>p;

            v[i][j] = p;
        }    
        
    }


}