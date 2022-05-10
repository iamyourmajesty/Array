#include <bits/stdc++.h>

using namespace std;
bool unique(int arr[],int n)
{
    unordered_map <int,int> mp;
    set <int> st;
    set <int> s;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
        st.insert(arr[i]);
    }
    int res= st.size();
    int r;
    for(auto x:st)
    {
        r=mp[x];
        s.insert(r);
    }
    int lol=s.size();
    
    return lol==res;
    
    
}
int main()
{
    int n=6;
    int arr[]={1,2,2,1,1,3};
    if(unique(arr,n))
    cout<<"unique ";
    else
    cout<<"not unique";

    return 0;
}