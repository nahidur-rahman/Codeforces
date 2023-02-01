#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, cnt=0, i=0;
        cin>>n;
        while(n!=cnt){
            i++;
            if(i%3!=0 && i%10!=3)
                cnt++;
        }
        cout<<i<<endl;
    }
    return 0;
}
