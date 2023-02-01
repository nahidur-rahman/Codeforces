#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n=8, m=8;
    cin>>t;
    while(t--){
        int flag=0;
        char a[10][10];
        for(int i=0; i<n; i++){
            int r=0;
            for(int j=0; j<m; j++){
                cin>>a[i][j];
                if(a[i][j]=='R')
                    r++;
            }
            if(r==8)
                flag=1;
        }
        if(flag)
            cout<<"R"<<"\n";
        else
            cout<<"B"<<"\n";
    }
    return 0;
}
