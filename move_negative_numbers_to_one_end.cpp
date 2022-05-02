/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    // move all negaive elements to one end
    int arr[]={-1,5,6,-5,-5,0,-6,6,-9,3};
    int n=sizeof(arr)/sizeof(arr[0]);
 //method one
    std::vector<int> ans ;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        ans.push_back(arr[i]);
    }
    for(int i=0;i<n;i++)
    if(arr[i]<0)
    ans.push_back(arr[i]);
    for(auto x:ans)
    cout<<x<<" ";
    return 0;
}

    //time complexity o(n) and space complexity o(n)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // move all negaive elements to one end
    int arr[]={-1,5,6,-5,-5,0,-6,6,-9,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    //method two
    //two pointer approach
    
    // it works if order is not maintained
    int l=0,r=n-1;
    while(l<r)
    {
        if(arr[l]>=0)
        l++;
        if(arr[r]<0)
        r--;
        if((l<r) && arr[l]<0 && arr[r]>=0)
        {
            swap(arr[l],arr[r]);
            l++;
        
        }
    }
    for(auto x:arr)
    cout<<x<<" ";
    return 0;
}
//time complexity o(n) and space complexity o(1)