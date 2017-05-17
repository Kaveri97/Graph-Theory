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
  }

  cin>>s;

  stack <int> st;
  vector <int> visited(n+1,0);

  st.push(s);
  visited[s] = 1;
  cout<<s;
  while(!st.empty()){

    int p = st.top();

    for(int j=0; j<adj_list[p].size(); j++){
      if(!visited[adj_list[p][j]]){
        visited[adj_list[p][j]] = 1;
        st.push(adj_list[p][j]);
        cout<<adj_list[p][j];
        break;
      }
    }
      if(visited[adj_list[p][0]]==visited[adj_list[p][(adj_list[p].size()-1)]]){
        int q = st.top();
        st.pop();
      }
  }
}