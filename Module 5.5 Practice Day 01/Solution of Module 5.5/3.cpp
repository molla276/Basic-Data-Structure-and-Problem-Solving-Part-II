#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;
    cin >> s;
    n = s.size();
    for(int i =0; i<n; i++){
        if(i%2==0)
            s[i]= char('a'+(int(s[i]-'a')+1)%26);
    }
    cout << s << endl;
    return 0;
}


