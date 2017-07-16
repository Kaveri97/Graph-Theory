#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int n,m,a,b;
	cin>>n>>m;
	int v[n+1];
	long long int e[m+1][3];
	for (int i = 1; i < m+1; ++i)
	{
		cin>>e[i][0]>>e[i][1]>>e[i][2];
	}
	for (a=1; a<m+1;a++){
		for (b=1; b<m-a+2; b++){
			if(e[b][2]>e[b+1][2]){
				swap(e[b][0],e[b+1][0]);
				swap(e[b][1],e[b+1][1]);
				swap(e[b][2],e[b+1][2]);
			}
		}
	}
	v[e[1][0]] = 1;
	v[e[1][1]] = 1;
	long long int c = 2;
	long long int w = e[1][2];
	for(int a=1;a<=m;a++){
		if((v[e[a][0]]==1 || v[e[a][1]]==1) && (v[e[a][0]]!=v[e[a][1]])) {
			w += e[a][2];
			v[e[a][0]]=1;
			v[e[a][1]]=1;
			c++;
			a=0;
		}
		if(c==n){
			cout<<w<<endl;
			return 0;
		}
	}
}
