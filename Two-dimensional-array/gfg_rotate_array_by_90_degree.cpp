#include<bits/stdc++.h>
using namespace std;
//vector is not passed by reference so we used reference variable
void rotate(int n,vector <vector <int>> & arr)
{
     // step 1 :- transpose
    // 1 4 7
    // 2 5 8
    // 3 6 9

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n && i>j;j++)
        swap(arr[i][j],arr[j][i]);
    }

    // step 2 :- reverse all rows 
    reverse(arr.begin(),arr.end());
    //y { } { } { } rows ko reverse karegaa
}
int main()
{
    vector <vector <int> > arr={{1,2,3},{4,5,6},{7,8,9}};
    // 1 2 3
    // 4 5 6 
    // 7 8 9
    int n=arr.size();
   

    // anti clock wise rotate karna hai
    //output :-
    // 3 6 9
    // 2 5 8
    // 1 4 7

    rotate(n,arr);
   

   for(int i=0;i<n;i++)
   {
        for(int j=0;j<n;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
   }
    return 0;
}
//https://practice.geeksforgeeks.org/problems/rotate-a-2d-array-without-using-extra-space1004/1/