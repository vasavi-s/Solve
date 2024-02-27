/*
  Input: mat[4][4] = { {10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}}
    x = 29
 
Output: Found at (2, 1)

Input : mat[4][4] = { {10, 20, 30, 40}, {15, 25, 35, 45},{27, 29, 37, 48},{32, 33, 39, 50}}; 
    x = 100
     
Output: Element not found
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[4][4]={{10, 20, 30, 40},{15, 25, 35, 45}, {27, 29, 37, 48},{32, 33, 39, 50}};
    int x,n1,n2;
    cin>>x;
    bool flag=false;
    for( int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(x==arr[i][j])
            {
                n1=i;
                n2=j;
               flag=true; 
                break;
            }
        }
    }
    if(flag)cout<<"Found at ("<<n1<<","<<n2<<")";
    else cout<<"Element not found";

    return 0;
}
