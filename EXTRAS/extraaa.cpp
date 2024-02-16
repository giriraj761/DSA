#include <bits/stdc++.h>
using namespace std;

stringAnagram() 
{
    vector<string> dictionary;
    vector<string> query;
    int n,m;
    cin>>n;
    
    // cout<<"the input part is messing me up it showing 0 and not taking any input fix it soon";
    
    map<string,int> mp;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        dictionary.push_back(str);
        sort(dictionary[i].begin(),dictionary[i].end());
        mp[dictionary[i]]++;
    }
    cin>>m;
    
    vector<int>ans;
    
    for(int i=0;i<m;i++)
    {
        string str;
        cin>>str;
        query.push_back(str);
        sort(query[i].begin(),query[i].end());
        ans.push_back(mp[query[i]]);
    }
    for(auto x:ans)cout<<x<<" ";
}
int main()
{
    stringAnagram();
    return 0;
}