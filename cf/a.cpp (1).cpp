#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    if(t>=4) {
    int arr[t];
    for(int i=0; i<t; i++) {
        cin>>arr[i];
    }
    
    for (int i = 0; i < t; i++) {
        for (int j = 1 + i; j < t; j++) {
            if (arr[i] < arr[j]) {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    arr[0] = arr[1] = arr[2] = arr[3];
    cout << arr[0]*arr[0];
    return 0;
}
    cout << 0;
}