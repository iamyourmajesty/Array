#include<bits/stdc++.h>
using namespace std;
int main()
{
    // find dublicate in an array of N+1 integers and one element is repeating itself 
    // eg 2,1,4,5,2,3 
    // dublicate element is 2

    // method one is we can do in o(n^2)
    // method 2
    int arr[]={2,1,4,5,2,3 };
    int N=sizeof(arr)/sizeof(arr[0]) -1;//length of array is  N+1
    int sum = (N * (N+1))/2;
    int sum2=0;
    for(int i=0;i<N+1;i++)
    sum2 += arr[i];

    cout<<sum2 - sum;
    return 0;
}