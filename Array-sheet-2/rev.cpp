#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[]={-1,2,1,5,-6,3,2,-8,8};

   /*
   logic 
   if -> arr[s] is positive hai s++
   
   if-> arr[e] is negative hai e--

   if -> arr[s] is neg and arr[e] is pos swap



   */
    int n=sizeof(arr)/4;
    int s=0;
    int e=n-1;

    while(e>s)
    {
        if(arr[s]>=0)
        s++;
        if(arr[e]<0)
        e--;
        if(arr[s]<0 && s>e && arr[e]>=0)
        {
            swap(arr[s],arr[e]);
            s++;
        }
    }
   for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";
   //two pointer approach
    return 0;
}