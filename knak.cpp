#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int max(int a, int b)
 {
  return (a > b)? a : b;
   }


int sack(int w,int v[],int wt[],int n)
{
int i,j,k[n+1][w+1];
for(i=0;i<=n;i++)
{
for(j=0;j<=w;j++)
{
if(i==0 || j==0)
k[i][j]=0;
else if(wt[i-1]<=j)

 k[i][j]=max(v[i-1] + k[i-1][j-wt[i-1]], k[i-1][j]);

 else

 k[i][j]=k[i-1][j];

}
}
 return k[n][w];
 }
int main()
{
    int v[100],wt[100],i,w,n;
cout<<"enter items \n";
cin>>n;
cout<<"elements cost and weight \n";
for(i=0;i<n;i++)
{
cin>>v[i]>>wt[i];
}
cout<<"sack cap";
cin>>w;
cout<<sack(w,v,wt,n);
return 0;
}
