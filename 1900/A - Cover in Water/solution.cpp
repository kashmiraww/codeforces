#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t, n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        bool threempty = false;
        int total = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='.' && i+1<n && s[i+1]=='.' && i+2<n && s[i+2]=='.'){
                threempty = true;
                break;
            }
            if(s[i]=='.'){
                total++;
            }
        }
        if(threempty){
            cout<<"2"<<endl;
        }
        else{
            cout<<total<<endl;
        }
    }
    return 0;
}