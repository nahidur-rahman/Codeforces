#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin>>n;
    while(n--)
    {
        string s1, s2;
        cin>>s1>>s2;
        map<char, int> m;
        m[s1[0]]++;
        m[s1[1]]++;
        m[s2[0]]++;
        m[s2[1]]++;
        l = m.size();
        cout<<l-1<<endl;
    }

    return 0;
}
/*

int main()
{
    int t,n,i;
    cin>>t;
    string s1,s2;
    while(t--)
    {
        cin>>s1>>s2;
        set<char>s;
        for(i=0;i<s1.size();i++)
        {
            s.insert(s1[i]);
        }
        for(i=0;i<s2.size();i++)
        {
            s.insert(s2[i]);
        }
        cout<<s.size()-1<<endl;
    }
}
*/
