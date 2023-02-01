#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, count=0;
    string s;
    cin>>s;
    n=s.size();
    map <char, int> m;
    for(i=0; i<n; i++)
        m[s[i]]++;
    for(auto it:m)
        count++;

    if(count%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}
