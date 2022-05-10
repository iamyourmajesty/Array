#include<bits/stdc++.h>
using namespace std;
pair<long long, long long> getMinMax(long long a[], int n) {
    long long maxi=a[0];
    long long mini=a[0];
    for(int i=0;i<n;i++)
    if(maxi<a[i])
    maxi=a[i];
    for(int i=0;i<n;i++)
    if(mini>a[i])
    mini=a[i];
   return {mini,maxi};
    
}
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    pair <long long ,long long> p;
    p=getMinMax(a,n);
    cout<<p.first<<" "<<p.second;
    return 0;
}