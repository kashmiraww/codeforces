#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int d = s.size();
        int f = s[0]-'0';
        int ans = 9*(d-1)+f;
        cout<<ans<<endl;
    }
}