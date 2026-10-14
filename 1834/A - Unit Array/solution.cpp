#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int neg = 0, a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<0){
                neg++;
            }
        }
        int pos = n-neg, ops = 0;
        while(neg>pos){
            neg--;
            pos++;
            ops++;
        }
        if(neg%2==1){
            ops++;
        }
        cout<<ops<<endl;
    }
    return 0;
}