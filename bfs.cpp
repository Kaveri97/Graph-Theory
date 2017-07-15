#include<bits/stdc++.h>
using namespace std;

int main(){

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

  q.push(s);
  visited[s] = 1;

  while((!q.empty())){

    int p = q.front();
    cout<<p;
    q.pop();

    for(int j=0; j<adj_list[p].size(); j++){
      if(!visited[adj_list[p][j]]){
        visited[adj_list[p][j]] = 1;
        q.push(adj_list[p][j]);
      }
    }
  }
}

	
