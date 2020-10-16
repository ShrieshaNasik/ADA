#include<iostream>
using namespace std;
int count=0;
int partition(int [],int,int);
void sort(int a[],int start,int end)
{
        count++;
        if(start<end)
        {
                int p;
                p=partition(a,start,end);
                sort(a,start,p-1);
                sort(a,p+1,end);
        }
}
int partition(int a[],int start,int end)
{
        int pivot,pindex,temp,i;
        pivot=a[end];
        pindex=start;
        for(i=start;i<end;i++)
        {
                if(a[i]<=pivot)
                {
                        temp=a[i];
                        a[i]=a[pindex];
                        a[pindex]=temp;
                        pindex++;
                }
        }
        temp=a[pindex];
        a[pindex]=a[end];
        a[end]=temp;
        return pindex;
}
int main()
{
        int a[10],n,i;
        cout<<"Size: ";
        cin>>n;
        cout<<"Elements: ";
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,0,n-1);
        cout<<"After sorting: "<<endl;
         for(i=0;i<n;i++)
        cout<<a[i]<<"\t";
        cout<<endl;
        cout<<"count="<<count;
        return 0;
}
