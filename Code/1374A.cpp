#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, x, y, rem=0;
        cin>>x>>y>>n;
        rem=(n-y)/x;
        rem=(rem*x)+y;
        cout<<rem<<endl;
    }
    return 0;
}
