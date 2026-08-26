#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int n, ans = 0;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        if(s[1]=='+'){
            ans++;
        }
        else{
            ans--;
        }
    }
    cout<<ans<<endl;
    return 0;
}