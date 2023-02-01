#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, n;
    cin>>t;
    while(t--)
    {
        int temp=0;
        string s;
        map <char, int> m;
        map <char, int>::iterator it;
        cin>>n;
        cin>>s;
        for(i=0; i<n; i++)
            m[s[i]]++;

        it=m.begin();
        for(it=m.begin(); it!=m.end(); it++)
        {
            temp++;
            temp=temp+it->second;
        }

        cout<<temp<<endl;
    }
    return 0;
}
