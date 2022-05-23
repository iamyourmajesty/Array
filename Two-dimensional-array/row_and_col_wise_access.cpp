#include<bits/stdc++.h>
using namespace std;
void print_rowwise(int n,int m , int arr[][4])
{
    // row wise print kr rhy hai to hr row k liyay column 0 to m tak chalega
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void print_colwise(int n,int m,int arr[][4])
{
    // col wise print kr rhy hai to hr col k liyay row o to n tak chalega
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int n=3,m=4;
    print_rowwise(n,m,arr);
    cout<<endl<<endl;
    print_colwise(n,m,arr);
    return 0;
}