
#include<iostream>
using namespace std;

void DFS(int);
int G[10][10],visited[10],n;

int main()
{
    int i,j;
    cout<<"Enter number of vertices:";

	cin>>n;


	cout<<"\nEnter adjecency matrix of the graph:";

	for(i=0;i<n;i++)
       for(j=0;j<n;j++)
			cin>>G[i][j];


   for(i=0;i<n;i++)
        visited[i]=0;

    DFS(0);
}

void DFS(int i)
{
    int j;
	cout<<"\n"<<i;
    visited[i]=1;

	for(j=0;j<n;j++)
       if(!visited[j]&&G[i][j]==1)
            DFS(j);
}
