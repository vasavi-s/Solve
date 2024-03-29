/*Given an unsorted array of nonnegative integers, find a continuous subarray which adds to a given number. 

Input: arr[] = {1, 4, 0, 0, 3, 10, 5}, sum = 7
Output: Sum found between indexes 1 and 4
Sum of elements between indices
1 and 4 is 4 + 0 + 0 + 3 = 7

Input: arr[] = {1, 4}, sum = 0
Output: No subarray found
There is no subarray with 0 sum */



#include <iostream>
using namespace std;
    
int main()
{
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];


    // method one O(n^2)
    bool flag=false;
    int i,ind2;
    for(i=0;i<n-1;i++)
    {
        int count=arr[i],j;
        for(j=i+1;j<n;j++){
            if(count>sum || sum==count) 
            break;
            else count+=arr[j];
        }
        if(count==sum) {
            flag=true;
            ind2=j-1;
            break;
        }
    }
    
    if(flag) cout<<"Sum found between indexes "<<i<<" and "<<ind2;
    else cout<<"No subarray found";
    //end

    //method 2 O(n)
     bool flag=false;
    int i=0,curr_sum,j;
    for( j=i;j<size;j++){
        curr_sum+=arr[j];
      if(sum==curr_sum) break;
      else if(curr_sum>sum){
          while(i<j){
              curr_sum-=arr[i++];
              if(curr_sum==sum){ flag=true; break;}
          }
          break;
      }
    }
    if(flag)
    cout<<"Sum found between indexes "<<i<<" and "<<j;
    else cout<<"No subarray found";
    //end
    return 0;
}
