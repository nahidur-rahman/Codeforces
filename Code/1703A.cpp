#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        if(s[0]=='y' && s[1]=='e' && s[2]=='s')
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
