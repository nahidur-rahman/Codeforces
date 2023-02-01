#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, temp=1;
    string s;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>s[i];
    map<char,int> m;

    //n=s.size();
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(i=0; i<n; i++)
        if(s[i]!=' ')
            m[s[i]]++;
    char ch='a';
    for(auto it:m)
    {
        if(it.first==ch)
        {
            cout<<temp<<" ";
            temp++;
        }
        else
            break;
        ch++;

    }
    if(temp==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
