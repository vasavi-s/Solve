// Given an array of integers, our task is to write a program that efficiently finds the second-largest element present in the array. 

// Examples:

// i/p: arr[] = {12, 35, 1, 10, 34, 1}
// o/p: The second largest element is 34.

#include <iostream>
using namespace std;


int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int smax=-1, max=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax && arr[i]<max) smax=arr[i];
    }
    cout<<smax;
    return 0;
}
