#include<bits/stdc++.h>
using namespace std;
//ELEVTRBL - Elevator Trouble
int main(){

  long long int f,s,g,u,d;

  cin>>f>>s>>g>>u>>d;
  queue <long long int> q;
  vector <int> visited(f+1,0); 
	vector <long long int> dist(f+1,2*f); 

  q.push(s);
  visited[s] = 1;
  dist[s] = 0;

  while(!q.empty()){

    long long int p = q.front();
    q.pop();
    long long int a = p + u;
    long long int b = p - d;

    if(a==g || b==g){
			visited[g] = 1;
			dist[g] = dist[p] + 1;
      break;
		}
    if(a<=f&&!visited[a]){
      q.push(a);
			dist[a] = dist[p] + 1;
      visited[a] = 1;
    }

    if(b>0&&!visited[b]){
      q.push(b);
			dist[b] = dist[p] + 1;
      visited[b] = 1;
    }
  }
  if(!visited[g]){
    cout<<"use the stairs\n";
  }
  else{
    cout<<dist[g]<<"\n";
  }
}

	
