#include<iostream>
using namespace std;
void flow(int b[100][100],int n)
{
int i,j,k;
for(k=0;k<n;k++)
{
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
b[i][j]=min(b[i][j],b[i][k]+b[k][j]);
}
}
}
}
int main()
{
    int b[100][100],i,j,n;
cout<<"enter nodes \n";
cin>>n;
cout<<"elements cost \n";
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
cin>>b[i][j];
}
cout<<"final is";
flow(b,n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<b[i][j]<<" ";
}
cout<<"\n";
}
return 0;
}
