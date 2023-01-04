#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, mul=1;
    cin >> n;
    int arr[n+9];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        if(i%2 != 0){
            mul = mul*arr[i];
        }
    }
    cout << mul << endl;
    return 0;
}

