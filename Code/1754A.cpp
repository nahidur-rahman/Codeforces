#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int cq=0, ca=0, lvl=0, n;
        string s;
        cin>>n>>s;
        for(int i=0; i<n; i++){
            if(s[i]=='Q'){
                lvl++;
            }
            else{
                if(lvl!=0){
                    lvl--;
                }
            }

        }
        if(lvl==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
