#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a, a+n);
        int maxx = a[n-1];
        int minn = a[0];
        if(maxx==minn){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<maxx<<" ";
            for(int i=0;i<n-1;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}