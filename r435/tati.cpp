#include<bits/stdc++.h>
using namespace std;
int n,e,i,j;
vector<vector<int> > graph;
vector<int> color;
bool vis[100011];
void colour(int node,int num)
{
	queue<int> q;
	if(vis[node])
		return;
	color[node]=num;
	vis[node]=1;
	for(i=0;i<graph[node].size();i++)
	{
		if(!vis[graph[node][i]])
		{
			q.push(graph[node][i]);
		}
	}
	while(!q.empty())
	{
		colour(q.front(),(num+1)%2);
		q.pop();
	}
	return;
}
int main()
{
	int x,y;
	cin>>n;
    if(n==1){
            cout<<'0'<<endl;
            return 0;
    }
	e=n-1;
    graph.resize(n);
    color.resize(n);
	memset(vis,0,sizeof(vis));
	for(i=0;i<e;i++)
	{
		cin>>x>>y;
		x--; y--;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	colour(0,1);
	long long int temp_me=0;
	for(i=0;i<n;i++)
	{
		if(color[i])
			temp_me++;
	}
    long long int ans=((long long int)(n-temp_me)*temp_me)-e;
    cout<<ans<<endl;
}
