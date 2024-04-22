Find the first occurrence of the letter in a string
testcase 1: 
input: oncechar
output: o 1 time
testcase 2:
input: "occurrence"
output: c 3 times  
testcase 3:
input: missipissi
output: s 4 times(i 4, s, 4. s occurence first compared to i)

code:
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int> c;
    map<char,int>hash;
    for(int i=0;i<s.size();i++)
    {
        c[s[i]]++;
    }
    
    int count1=0, count2=0,maxi=0,mini=INT_MAX;
    char a;
    for(const auto& i:c)
    {
        if(i.second>1) 
        { 
            count1++;
            if(maxi<i.second)
            {
                maxi=i.second;
                a=i.first;
            }
            else if(maxi==i.second)
            {count2++;
            hash[a]=maxi;
            hash[i.first]=i.second;
            }
        }
    }
           
    if(count1==0)cout<<s[0]<<" 1"<<" time";
    else if(count2==0) cout<<a<<" "<<maxi<<" times";
    else
    {
        for(const auto& i:hash)
        {int count=0;
            for(int j=0;j<s.size();j++)
            {
                if(s[j]==i.first) count++;
                
                if(count==2) {
                    hash[s[j]]=j;
                    break;
                }
            }
        }
        for(const auto&i:hash)
        {
            if(i.second<mini){
                mini=i.second;
                a=i.first;
            }
        }
        
        cout<<a<<" "<<maxi<<" times";
    }

    return 0;
}
