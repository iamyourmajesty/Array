#include<bits/stdc++.h>
using namespace std;
vector <int> intersection_of_array(int arr[],int n,int brr[],int m,int crr[],int l)
{
    vector <int> ans;
    unordered_map <int,bool> mp;
    for(int i=0;i<n;i++)
    mp[arr[i]]=true;
    for(int i=0;i<m;i++)
    if(mp[brr[i]])
    ans.push_back(brr[i]);
    // return ans;
    unordered_map <int,bool > p;
    for(auto x:ans)
    p[crr[x]]=true;

    vector <int> res;
    for(int i=0;i<l;i++)
    if(p[crr[i]])
    res.push_back(crr[i]);
    return res;
}
void print(vector <int > v)
{
    for(auto x:v)
    cout<<x<<" ";
}
int main()
{
    int brr[]={2,3,4,5,8,10};
    int arr[]={1,2,3,6,7,8};
    int crr[]={3,4,5,8};

    int n=sizeof(arr)/sizeof(arr[0]);
   
    int m=sizeof(brr)/sizeof(brr[0]);

   int l=sizeof(crr)/sizeof(crr[0]);
    print(intersection_of_array(arr,n,brr,m,crr,l));
    return 0;
}