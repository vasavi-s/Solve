Add array with k number return ans in array
testcase 1:
intput: num=[2,1,5],k=806
output: [1,0,2,1]
testcase 2:
input: num=[1,0,1,2],k=34
output: [1,0,4,6]
testcase 3:
input: num[9,9,9], k=1
output: [1,0,0,0]

code:
#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n,k;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int n1;
        cin>>n1;
        v.push_back(n1);
    }
    cin>>k;

    int right=v.size()-1;
    vector<int> num;
    while(k){ 
        int rem=k%10;
        int sum=rem+v[right];
                int t=sum%10;
        if(sum>=10){
            int carry=sum/10;
            if(right!=0){
                v[right-1]=v[right-1]+carry;
                num.push_back(t);
            }
            else if(right==0) 
            {   num.push_back(t);
                num.push_back(carry);
            }
        }
        else 
            num.push_back(t);
        k/=10;
        right--;
    }
    
    while(right>=0){
         if(v[right]>=10){
             int t=v[right]%10;
             if(right!=0)
             {
                v[right-1]=v[right-1]+(v[right]/10);
                num.push_back(t);
             }
             else { 
                    num.push_back(t);
                    num.push_back(v[right]/10);
            }
         }
        else 
            num.push_back(v[right]);
        right--;
    }
    for(int i=num.size()-1;i>=0;i--)cout<<num[i];      
    return 0;
}
