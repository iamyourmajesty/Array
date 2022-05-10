#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={-2,-3,4,-1,-2,5,1,-3};
    int n=sizeof(arr)/sizeof(arr[0]);
    //kadane's algorithm
    //at list akk positive element to hona chahiye
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
        if(sum<0)
        sum=0;
        else
        ans=max(sum,ans);
    }
    cout<<ans;
    return 0;
}