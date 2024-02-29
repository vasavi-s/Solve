/*
Given a sorted array of positive integers, rearrange the array alternately i.e first element should be the maximum value, second minimum value, third-second max, fourth-second min and so on. 
 

Input: arr[] = {1, 2, 3, 4, 5, 6, 7} 
Output: arr[] = {7, 1, 6, 2, 5, 3, 4}
Input: arr[] = {1, 2, 3, 4, 5, 6} 
Output: arr[] = {6, 1, 5, 2, 4, 3} */


#include <iostream>
using namespace std;
int main()
{
    // int arr[]={1,2,3,4,5,6};
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int ans[n];
    int i=0;
    for(int start=0,end=n-1;start<=end;start++,end--){
        ans[i++]=arr[end];
        if(start!=end) ans[i++]=arr[start];
    }
    for(int j:ans)cout<<j<<" "; 
    return 0;
}
