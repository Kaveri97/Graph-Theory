#include<bits/stdc++.h>
using namespace std;
//Breadth First Search: Shortest Reach
int main(){

  int T;
  cin>>T;

  for (int k = 0; k < T; ++k)
  {
    int n,e,s;
    cin>>n>>e;
    int a,b;
    vector <int> adj_list[n+1];

    for(int i=0; i<e; i++){
    cin>>a>>b;
    adj_list[a].push_back(b);
    adj_list[b].push_back(a);
    }


    cin>>s;

    queue <int> q;
    vector <int> visited(n+1,0);
    vector <int> dist(n+1,6*e);
    q.push(s);
    visited[s] = 1;
    dist[s] = 0;

    while(!q.empty()){

      int p = q.front();
      q.pop();

      for(int j=0; j<adj_list[p].size(); j++){
        if(!visited[adj_list[p][j]]){
          visited[adj_list[p][j]] = 1;
          if(dist[adj_list[p][j]]>dist[p] + 6)
            dist[adj_list[p][j]] = dist[p] + 6;
          q.push(adj_list[p][j]);
          }
      }
    }

    for(int i=0; i<=n; i++){
      if(!visited[i])
        dist[i] = -1;
    }
    for (int i = 1; i <= n; ++i)
    {
      if(dist[i]==0);
      
      else
        cout<<dist[i]<<" ";
    }
    cout<<endl;
  }
}

  
