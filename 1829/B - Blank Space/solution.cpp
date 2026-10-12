#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n], cnt = 0, ans = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i] == 0){
                cnt++;
            }
            else{
                cnt = 0;
            }
            ans = max(ans, cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}