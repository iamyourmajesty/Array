#include<bits/stdc++.h>
using namespace std;
bool is_there_any_triplet(int A[],int n,int X)
{
     sort(A,A+n);//it works in sorted array
        
        int target;
        int s,e;
       for(int i=0;i<n;i++)
       {
           target=X- A[i];
           s=i+1;
           e=n-1;
           while(e>s)
           {
               if(A[s] + A[e] == target)
               return true;
               else if(target< A[s]+ A[e])
               e--;
               else
               s++;
           }
       }
       return false;
}
int main()
{
    // you are given a target you have to find is any triplet sum present or not whose sum is equal to target
    int arr[]={20,30,5,10,17,35,68,100,110};
    int X=108;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<boolalpha<<  is_there_any_triplet(arr,n,X);
    return 0;
}