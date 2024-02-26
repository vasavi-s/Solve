/*
input: hello
ouput: holle
*/

#include <iostream>
using namespace std;
bool isvowel(char c){
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}
int main()
{
    string s="hello";
    int start=0,end=s.size()-1;
    while(start<end){
         if(!isvowel(s[start])) start++;
        else if(!isvowel(s[end])) end--;
        else if(isvowel(s[start]) == isvowel(s[end])){
            char temp=s[start];
            s[start++]=s[end];
            s[end--]=temp;
        }
    }
    cout<<s;

    return 0;
}
