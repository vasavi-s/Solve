Given an array A[] of integers, sort the array according to frequency of elements. That is elements that have higher frequency come first. If frequencies of two elements are same, then smaller number comes first.
input 1: 5 5 4 6 4
output: 4 4 5 5 6

input2: 9 9 9 2 5
output: 9 9 9 2 5

#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> m1, pair<int, int> m2)
{
    if(m1.second == m2.second) return m1.first<m2.first;
    return m1.second>m2.second;
}


int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a.push_back(k);
    }
    map<int, int> mp;
    for(int i=0;i<n;i++)mp[a[i]]++;

    vector<pair<int,int>> v;

    for( auto&i:mp) v.push_back(i);
    sort(v.begin(),v.end(),compare);
    for(auto i:v) 
    {
        int x=i.first;
        int y=i.second;
        while(y--) cout<<x<<" ";
    }
    
}
