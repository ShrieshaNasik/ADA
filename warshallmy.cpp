
#include<bits/stdc++.h>
using namespace std;

int main()
{int cost[10][10],i,j,k,n;
 cout<<"Enter the number of nodes"<<endl;
 cin>>n;
 cout<<"Enter the adjacency matrix"<<endl;
 for(i=0;i<n;i++)
 {
     for(j=0;j<n;j++)
        cin>>cost[i][j];
 }
 for(k=0;k<n;k++)
 {
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             cost[i][j]=cost[i][j] or (cost[i][k] and cost[k][j]);
         }
     }
 }
 cout<<"The least cost paths from one vertex to every other vertex is:"<<endl<<endl;
 for(i=0;i<n;i++)
 {
     for(j=0;j<n;j++)
        {

            {
                cout<<cost[i][j]<<"\t";
            }

        }
         cout<<"\n";
 }

 return 0;
}
