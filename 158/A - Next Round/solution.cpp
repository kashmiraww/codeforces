#include <iostream>
using namespace std;
 
int main(){
    int n, k, ans = 0;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int val = a[k-1];
    for(int i=0; i<n; i++){
        if(a[i]>=val && a[i]!=0){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}