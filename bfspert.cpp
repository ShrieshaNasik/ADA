#include <iostream>
using namespace std;
int p=-1,ver[10],a[100][100],v[10],n;
void dfs(int i)
{
int j;
v[i]=1;
for(j=0;j<n;j++)
{
if(a[i][j]==1 && v[j]==0)

dfs(j);
}
ver[++p]=i;

cout<<i<<" ";
}
int main()
{
    int i,j,count=0;
cout<<"enter nodes";
cin>>n;
cout<<"enter adjacency";
for(i=0;i<n;i++)
{
v[i]=0;
for(j=0;j<n;j++)
cin>>a[i][j];
}
for(i=0;i<n;i++)
{
if(v[i]==0);
{
count++;
dfs(i);
cout<<endl;}}
if(count==1)
{
cout<<"connected";
}
else{
cout<<"not";
}return 0;
}

