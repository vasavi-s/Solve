// Given an array arr[] of non-negative integers and an integer sum, find a subarray that adds to a given sum.

// Note: There may be more than one subarray with sum as the given sum, print first such subarray. 

// Examples: 

// i/p: arr[] = {1, 4, 20, 3, 10, 5}, sum = 33
// o/p: Sum found between indexes 2 and 4
// Explanation: Sum of elements between indices 2 and 4 is 20 + 3 + 10 = 33

#include <iostream>
using namespace std;


int main()
{
    int arr[] = {1, 4, 0, 0, 3, 10, 5}, sum = 7;
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=1,j=0,n;
    while(i>j){
      if(i-j==1)
        n=arr[i]+arr[j];
       if(n<sum) n+=arr[++i];  
       else if(n>sum) j++,i=j+1,n=0; 
       else if(n==sum) break;
}
    cout<<"Sum found between indexes "<<j<<" and "<<i;
    return 0;
}
