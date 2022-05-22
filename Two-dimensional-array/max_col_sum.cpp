#include<bits/stdc++.h>
using namespace std;
int main()
{
    //maximum column sum
    int arr[][3]={1,2,3,4,5,6,7,8,9};
    int n=3,m=3;
    int sum=0,maxi=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<m;j++)
        {
            sum += arr[j][i];
        }
        maxi=(maxi,sum);
    }
    cout<<maxi;
    return 0;
}