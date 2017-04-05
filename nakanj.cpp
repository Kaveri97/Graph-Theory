#include<bits/stdc++.h>
#include<string.h>
using namespace std;
//Minimum Knight moves !!! 
int main(){
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		string s, d;
		cin>>s>>d;
		queue <string> q;
  		vector < vector < int > > visited;
		visited.assign(9, vector < int >(9, 0));
		vector < vector < int > > dist;
		dist.assign(9, vector < int >(9, 100));
		q.push(s);
		int a = s[1]-48;
		int b = s[0]-96;
  		visited[a][b] = 1;
		dist[a][b] = 0;
		while(!q.empty()){
			string cur = q.front();
			q.pop();
			int x = cur[1]-48;
			int y = cur[0]-96;
			int u = cur[1]-48 + 2;
			int d = cur[1]-48 - 2;
			char r = cur[0] + 2;
			char l = cur[0] - 2;
			string u1,u2,l1,l2,r1,r2,d1,d2;
			u1 = (cur[0]+1); u1 +=(cur[1]+2);
			u2 = (cur[0]-1); u2 +=(cur[1]+2);
			d1 = (cur[0]+1); d1 +=(cur[1]-2);
			d2 = (cur[0]-1); d2 +=(cur[1]-2);
			l1 = (cur[0]-2); l1 +=(cur[1]+1);
			l2 = (cur[0]-2); l2 +=(cur[1]-1);
			r1 = (cur[0]+2); r1 +=(cur[1]+1);
			r2 = (cur[0]+2); r2 +=(cur[1]-1);
			if(u<=8){
				if((cur[0]-1)>='a'){
					if(visited[u2[1]-48][u2[0]-96] != 1)
						q.push(u2);
					visited[u2[1]-48][u2[0]-96] = 1;
					if(dist[u2[1]-48][u2[0]-96]>dist[x][y] + 1)
						dist[u2[1]-48][u2[0]-96] = dist[x][y] + 1;
				}
				if((cur[0]+1)<='h'){
					if(visited[u1[1]-48][u1[0]-96] != 1)
						q.push(u1);
					visited[u1[1]-48][u1[0]-96] = 1;
					if(dist[u1[1]-48][u1[0]-96]>dist[x][y] + 1)
						dist[u1[1]-48][u1[0]-96] = dist[x][y] + 1;
				}
			}
			if(d>=1){
				if((cur[0]-1)>='a'){
					if(visited[d2[1]-48][d2[0]-96] != 1)
						q.push(d2);
					visited[d2[1]-48][d2[0]-96] = 1;
					if(dist[d2[1]-48][d2[0]-96]>dist[x][y] + 1)
						dist[d2[1]-48][d2[0]-96] = dist[x][y] + 1;
				}
				if((cur[0]+1)<='h'){
					if(visited[d1[1]-48][d1[0]-96] != 1)
						q.push(d1);
					visited[d1[1]-48][d1[0]-96] = 1;
					if(dist[d1[1]-48][d1[0]-96]>dist[x][y] + 1)
						dist[d1[1]-48][d1[0]-96] = dist[x][y] + 1;
				}
			}
			if(r<='h'){
				if((cur[1]-48 + 1)<=8){
					if(visited[r1[1]-48][r1[0]-96] != 1)
						q.push(r1);
					visited[r1[1]-48][r1[0]-96] = 1;
					if(dist[r1[1]-48][r1[0]-96]>dist[x][y] + 1)
						dist[r1[1]-48][r1[0]-96] = dist[x][y] + 1;
				}
				if((cur[1]-48 - 1)>=1){
					if(visited[r2[1]-48][r2[0]-96] != 1)
						q.push(r2);
					visited[r2[1]-48][r2[0]-96] = 1;
					if(dist[r2[1]-48][r2[0]-96]>dist[x][y] + 1)
						dist[r2[1]-48][r2[0]-96] = dist[x][y] + 1;
				}

			}
			if(l>='a'){
				if((cur[1]-48 + 1)<=8){
					if(visited[l1[1]-48][l1[0]-96] != 1)
						q.push(l1);
					visited[l1[1]-48][l1[0]-96] = 1;
					if(dist[l1[1]-48][l1[0]-96]>dist[x][y] + 1)
						dist[l1[1]-48][l1[0]-96] = dist[x][y] + 1;
				}
				if((cur[1]-48 - 1)>=1){
					if(visited[l2[1]-48][l2[0]-96] != 1)
						q.push(l2);
					visited[l2[1]-48][l2[0]-96] = 1;
					if(dist[l2[1]-48][l2[0]-96]>dist[x][y] + 1)
						dist[l2[1]-48][l2[0]-96] = dist[x][y] + 1;
				}
			}
		}

		cout<<dist[d[1]-48][d[0]-96]<<endl;
	}
}
