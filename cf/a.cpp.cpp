#include<bits/stdc++.h>
using namespace std;
 
int main() {
int x,a;
cin>>x>>a;
int arr[x];
for(int i=0;i<x;i++)
  cin>>arr[i];
 
for(int i=0;i<x;i++)
{
    for(int j=0;j<x;j++)
    {
        if(i!=j){
        if(arr[i]+arr[j]==a)
        {
            cout<<"YES";
            return 0;
        }
    }
    }
}
cout<<"NO";
}