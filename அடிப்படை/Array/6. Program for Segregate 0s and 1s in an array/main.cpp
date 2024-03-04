/*
You are given an array of 0s and 1s in random order. Segregate 0s on left side and 1s on right side of the array. Traverse array only once. 

Input:
[0, 1, 0, 1, 0, 0, 1, 1, 1, 0] 

Output:
[0, 0, 0, 0, 0, 1, 1, 1, 1, 1] 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int arr[]={0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
   int size=sizeof(arr)/sizeof(arr[0]);
   int i=0;
   for(int j=1;j<size;j++){
       if((arr[i]==arr[j]) || (arr[i]==0 && arr[j]==1)){
           if(arr[i]==0 && arr[j]==1) i++;
           continue;
       }
       else if(arr[i]==1 && arr[j]==0){
           int temp=arr[i];
           arr[i++]=arr[j];
           arr[j]=temp;
       }
   }
   for(int j:arr)cout<<j<<" ";
}
