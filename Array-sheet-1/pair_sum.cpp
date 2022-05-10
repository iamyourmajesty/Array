#include<bits/stdc++.h>
using namespace std;
pair <int,int> required_pairs(int arr[],int n,int target)
{
    //since array is sorted we can use optimized approach i.e , two pointer approach
    int s=0;
    int e=n-1;

    // if we write e>=s then in some cases same element gets added
    while(e>s)
    {
        if((arr[s] + arr[e] )== target)
        return {arr[s],arr[e]};
        else if(target < arr[s] + arr[e])
        e--;
        else
        {
            // pair sum chota ho jay
            s++;
        }
    }
    return {-1,-1};
}
int main()
{
    // you are given a target and you have to find pair of elements whose sum is equal to the target , array is sorted
    
    int arr[]={2,5,6,7,8,23,45,66,74,100,110};
    int target=107;
    int n= sizeof(arr)/sizeof(arr[0]);

    pair <int ,int > ans;
    ans=required_pairs(arr,n,target);

    cout<<ans.first<<" "<<ans.second;

    return 0;
}