#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin >>t;
	while (t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    // 2 pointer approach
		//first pointer (i) will point to zeroth element 
		//second pointer (j) will point to last element
		//then we will swap both elements
		//then i++ and j++
		//loop it till j>i
		int i=0;
		int j=n-1;
		while(j>i)
		{
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
		for(auto x:arr)
		cout<<x<<" ";
	    cout<<endl;
	}
	return 0;
}