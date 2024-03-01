/*
A version number is a string that is used to identify the unique state of a software product. A version number looks like a.b.c.d, where a, b, etc are numbers, so the version number is a string in which numbers are separated by dots. These numbers generally represent the hierarchy from major to minor (a is major and d is minor). 

In this problem, we are given two version numbers. We need to compare them and conclude which one is the latest version number (that is, which version number is greater). 

Example: 

Input: 
V1 = “1.0.31”
V2 = “1.0.27”
Output:  v1 is latest
Because V2 < V1
Input: 
V1 = “1.0.10”
V2 = “1.0.27”
Output:  v2 is latest
Because V1 < V2 
*/

#include <iostream>
using namespace std;
int main()
{
    string v1="1.1.31",v2="1.1.27";
    int max1=0,max2=0;
    for(int i=0;v1[i]!='\0' || v2[i]!='\0';i++){
        if(v1[i]==v2[i] ) continue;
        else{ max1=max1*10+(v1[i]-'0');
         max2=max2*10+(v2[i]-'0');}
    }
    if(max1> max2) cout<<"v1 is latest";
    else cout<<"v2 is latest";

    return 0;
}
