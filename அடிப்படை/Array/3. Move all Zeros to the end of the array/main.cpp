#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,0,1,0,4,0};
    int i=0;
    for(int j=1;j<7;j++){
        if(arr[i]==0 && arr[j]!=0) 
        {
            int temp=arr[i];
            arr[i++]=arr[j];
            arr[j]=temp;
        }
        else if(arr[i]!=0)i++;
    }
    for(int j:arr)cout<<j<<" ";

    return 0;
}
