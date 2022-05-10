#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={3,5,6,35,2,7};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    // ans  35 2 7 3 5 6

    // method 1 by using some space 

    vector <int> ans;

    for(int i=k;i<n;i++)
    ans.push_back(arr[i]);
    for(int i=0;i<k;i++)
    ans.push_back(arr[i]);

    for(auto x:ans)
    cout<<x<<" ";
    return 0;
}