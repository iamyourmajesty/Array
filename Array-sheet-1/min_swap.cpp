#include<bits/stdc++.h>
using namespace std;
int min_Swap(int arr[],int n,int k)
{
    int ct=0;
    for(int i=0;i<n;i++)
    if(arr[i]<=k)
    ct++;

    // there is ct elements less than and equal to k 

    //sliding window'
    int res=0;
    int ans;
    for(int i=0;i<ct;i++)
    {
        if(arr[i]>k)
        res++;
    }
    ans=res;

    for(int i=ct;i<n;i++)
    {
        if(arr[i]>k)
        res++;
        if(arr[i-ct]>k)
        res--;
        ans=min(ans,res);

    }
    return ans;
}
int main()
{
    // minimum swaps required to bring elements less equal k together 
    // eg 1,2,5,0,6
    // 1 swap required to get less equal to k 1,2,0,5,6 together
    int arr[]={2, 7, 9, 5, 8, 7, 4};
    int k=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    
    cout<<min_Swap(arr,n,k);
    return 0;
}