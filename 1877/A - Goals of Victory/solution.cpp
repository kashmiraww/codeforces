#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int sum = 0, pt, point = n-1;
        while(point--){
            cin>>pt;
            sum += pt;
        }
        cout<<-(sum)<<endl;
    }
    return 0;
}