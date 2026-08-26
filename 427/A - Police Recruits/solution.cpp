#include <iostream>
using namespace std;
 
int main(){
    int n, t, fr=0, un=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        if(t>0){
            fr += t;
        }
        else{
            if(fr>0){
                fr--;
            }
            else{
                un++;
            }
        }
    }
    cout<<un<<endl;
    return 0;
}