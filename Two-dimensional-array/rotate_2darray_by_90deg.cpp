#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[][3]={1,2,3,4,5,6,7,8,9};
    // {{1,2,3},{4,5,6},{7,8,9}} both are same
    // 1 2 3
    // 4 5 6
    // 7 8 9
    int n=3,m=3;
    //after rotatin by 90 degree  clock wise
    // 7 4 1
    // 8 5 2
    // 9 6 3

    //step 1 :-  transpose
    // 1 4 7
    // 2 5 8 
    //  3 6 9
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m && i>j;j++)
        swap(arr[i][j],arr[j][i]);
    }

    //step 2 :- reverse elements of each row
    // 7 4 1
    // 8 5 2
    // 9 6 3

    for(int i=0;i<n;i++)
    {
        // har row ko
        //reverse using two pointer approach you can use vector and then try to use stl reverse too
        int s=0;
        int e=m-1;
        while(e>s)
        {
            swap(arr[i][s],arr[i][e]);
            s++;
            e--;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}