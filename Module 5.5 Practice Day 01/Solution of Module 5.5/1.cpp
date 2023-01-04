#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum=0;
    cin >> n;
    int arr[n+9];
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    for(int i=1; i<=n; i++){
        sum = sum + arr[i];
    }
    cout << sum << endl;
    return 0;
}
