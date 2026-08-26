#include <iostream>
using namespace std;
 
int main(){
    int n, t, v, p;
    int ans = 0;
    cin>>n;
    while(n--){
        cin>>t>>v>>p;
        if(t+v+p>=2){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}