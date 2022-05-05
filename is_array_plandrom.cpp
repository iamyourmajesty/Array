#include<bits/stdc++.h>
using namespace std;
string is_palindrom(int arr[],int n)
{
    //two pointer approach
    int s=0;
    int e=n-1;
    while(e>s)
    {
        if(arr[s]!=arr[e])
        return "not palindrom";

        s++;
        e--;
    }
    return "palindrom";
}
int main()
{
    //cheack whether an array is palindrom or not

    int arr[]={2,3,4,5,4,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<is_palindrom(arr,n);
    return 0;
}