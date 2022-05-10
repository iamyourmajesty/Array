#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={0,1,2,0,2,1,0,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    //we have to sort array consisting of only 3 digits zero , one and two
    int zero=0,one=0,two=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        zero++;
        else if(arr[i]==1)
        one++;
        else
        two++;
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(i<zero)
        arr[i]=0;
        else if(k<one)
        {
            arr[i]=1;
            k++;
        }
        else
        arr[i]=2;
    }
    //time compelexity of this sorting is O(n)
    for(auto x:arr)
    cout<<x<<" ";
    return 0;
}