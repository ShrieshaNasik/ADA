#include<iostream>
#include<stdlib.h>
using namespace std;
int count=0;
void ls(int a[],int n,int k)
{
int i;
for(i=0;i<n;i++)
{
if(a[i]==k)
{
    count++;
cout<<"element found at"<<i+1;
break;
}
}
if(i==n)
{
cout<<"not found";
}
}
void bs(int a[],int n,int k)
{
    int l,m,h;
    l=0;
    h=n-1;
    m=(l+h)/2;
    while(l<h)
    {
count++;
    if(a[m]<k)
    {

        l=m+1;
    }
    else if(a[m]==k)
    {
        cout<<"element at"<<m+1;
        break;
    }
    else
    {
        h=m-1;
    }
    m=(l+h)/2;
    }
    if(l>h)
    {
        cout<<"element not found";
    }
}
int into(int a[],int n,int k)
{
    int l=0;
    int h=n-1;
    int m;

    while(a[l]<=k && a[h]>=k)
    {

        m=l+((k-a[l])*(h-l))/(a[h]-a[l]);
        if(a[m]<k)
        {
            count++;
            l=m+1;
        }
        else if(a[m]==k)
        {
            return m;
        }
        else
        {

            h=m-1;
        }
    }
    if(a[l] == k)
    {
        return l;
    }
    else
    {
        return -1;
    }
}
void sort(int a[],int n)
{
    int i,temp,j;
    for(i=0;i<n-i;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
int a[100],i,n,k,p;
cout<<"enter no \n";
cin>>n;
cout<<"elements \n";
for(i=0;i<n;i++)
{
cin>>a[i];
cout<<a[i]<<" ";
}
cout<<"key plz \n";
cin>>k;
//k=rand()%100+1;
cout<<k<<"\n";
cout<<"linear \n";
ls(a,n,k);
cout<<"\n";
cout<<count<<"\n";
cout<<"binary \n";
sort(a,n);
bs(a,n,k);
cout<<"\n";
cout<<count<<"\n";
cout<<"interpol";
sort(a,n);
p=into(a,n,k);
if(p!=-1)
{
    cout<<"found at"<<p+1;

}
else
{
    cout<<"not found";
}
cout<<count<<"\n";
return 0;
}
