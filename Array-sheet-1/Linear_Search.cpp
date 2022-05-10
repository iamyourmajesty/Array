#include<bits/stdc++.h>
using namespace std;
int search(int arr[], int n, int k) {
	    // code here
	    int ans=-1;
	    for(int i=0;i<n;i++)
	    if(arr[i]==k)
        return i+1;
	    return ans;
}
int main()
{
    // let
    int arr[]={9, 7, 2, 16, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=16;
    cout<<search(arr,n,k);
    return 0;
}