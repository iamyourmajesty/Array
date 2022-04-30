#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=6;
    int arr[]={1,2,3,4,5,6};
    //swap ulternate elements
    for(int i=0;i<n;i=i+2)
    {
        if(i+1<n)
        swap(arr[i],arr[i+1]);
    }
    for(auto x:arr)
    cout<<x<<" ";
    return 0;
}