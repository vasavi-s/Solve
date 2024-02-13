/*
Find if a String2 is substring of String1. If it is, return the index of the first occurrence. else return -1.

Eg 1:Input:
String 1: test123string
String 2: 123
Output: 4
Eg 2: Input:
String 1: testing12
String 2: 1234
Output: -1
*/

#include <iostream>
using namespace std;

int substring(string s1,string s2){
    int ind;
    for(int i=0;i<s1.size();i++){
        int j=0;
        if(s1[i]==s2[j]){
            ind=i;
            for(int k=1;k<s2.size();k++){
                if(s1[i+k]!=s2[k]) return -1;
            }
            break;
        }
    }
    return ind;
}
int main()
{
    string s1="testing12",s2="1234";
    cout<<substring(s1,s2);
    return 0;
}
