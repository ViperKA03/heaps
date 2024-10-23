#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of  the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> ans;
    stack<pair<int,int>> st;
    for(int i=n-1;i>=0;i--)
    {
        while(st.size() && st.top().first<=arr[i])
        st.pop();
        if(st.size()) ans.push_back(st.top().second-i);
        else ans.push_back(0);
        st.push({arr[i],i});
    }
    reverse(ans.begin(),ans.end());
    for(auto i: ans) cout<<i<<" ";


    return 0;}