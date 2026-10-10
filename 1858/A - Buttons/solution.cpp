#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t, a, b, c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        int anna = a+(c+1)/2;
        int katie = b+c/2;
        if(anna>katie){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
    return 0;
}