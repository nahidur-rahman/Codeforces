#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s = to_string(n);
        int ans, l = s.size();
        ans = n - pow(10,l-1);
        cout<<ans<<endl;
    }
    return 0;
}
