#include<bits/stdc++.h>
using namespace std;
vector <int> union_of_array(int arr[],int n,int brr[],int m)
{
    set <int> st;
    for(int i=0;i<n;i++)
    st.insert(arr[i]);
    for(int j=0;j<m;j++)
    st.insert(brr[j]);

    vector <int> ans;

    for(auto x:st)
    ans.push_back(x);

    return ans;
}
vector <int> intersection_of_array(int arr[],int n,int brr[],int m)
{
    vector <int> ans;
    unordered_map <int,bool> mp;
    for(int i=0;i<n;i++)
    mp[arr[i]]=true;
    for(int i=0;i<m;i++)
    if(mp[brr[i]])
    ans.push_back(brr[i]);
    return ans;
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
    int n=sizeof(arr)/sizeof(arr[0]);
   
    int m=sizeof(brr)/sizeof(brr[0]);

    print(union_of_array(arr,n,brr,m));
    cout<<endl;
    print(intersection_of_array(arr,n,brr,m));
    return 0;
}