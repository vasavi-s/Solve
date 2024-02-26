/*
Input:
1 2 3 
4 5 6
7 8 9  
Output:
7 4 1 
8 5 2
9 6 3
  */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cin>>arr[i][j];
    }
  //wihtout using extra space
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
  //with extra space
  
    int num=0,count=0;
    int a[n*n];
    for(int i=n-1;i>=0;i--){
        for(int j=count;j>count-n;j--){
                a[num++]=arr[i-(-j)][count];
        }count++;
    }
    for(int i=0;i<n*n;i++)
    {   if(i%n==0 && i!=0)cout<<endl;
        cout<<a[i]<<" ";
    
    }
    return 0;
}
