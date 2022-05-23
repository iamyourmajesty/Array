#include<bits/stdc++.h>
using namespace std;
 vector<int> spirallyTraverse(vector<vector<int> > arr, int r, int c) 
    {
        // code here 
        vector <int> ans;
        int tot=r*c;
     int startrow=0,endrow=r-1,startcol=0,endcol=c-1;
    while(tot)
    {
         
     // printing starting row
    for(int i=startcol;i<=endcol;i++)
    {
        ans.push_back(arr[startrow][i]);
        tot--;
        if(!tot)//for handling case where n != m 
        return ans;
    }
    startrow++;
    //printing ending-col 
    for(int i=startrow;i<=endrow;i++)
    {
        ans.push_back(arr[i][endcol]);
        tot--;
        if(!tot)
        return ans;
    }
    endcol--;
    
    // printing end row
    for(int i=endcol;i>=startcol;i--)
    {
        ans.push_back(arr[endrow][i]);
        tot--;
        if(!tot)
        return ans;
    }
    endrow--;
    //printing first col/startcol
    for(int i=endrow;i>=startrow;i--)
    {
        ans.push_back(arr[i][startcol]);
        tot--;
        if(!tot)
        return ans;
    }
    startcol++;
    }
    
    return ans;
    }
int main()
{
    vector <vector <int> > arr={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n=arr.size();
    int m=arr[0].size();

    vector <int> ans;
    ans=spirallyTraverse(arr,n,m);

    for(auto x:ans)
    cout<<x<<" ";
    return 0;
}