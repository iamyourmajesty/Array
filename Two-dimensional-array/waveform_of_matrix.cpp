#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int n=4,m=4;

    int lol=true;
    for(int i=0;i<n;i++)
    {
        //row wise koi dikat nhi hai
        if(lol)
        {
           for(int j=0;j<m;j++)
           cout<<arr[i][j]<<" ";
           lol=false;
        }
        else
        {
            for(int j=m-1;j>=0;j--)
            cout<<arr[i][j]<<" ";
            lol=true;
        }
    
    }
    return 0;
}