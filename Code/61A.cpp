#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
    int n1, n2, l, a1[100], a2[100];
    cin>>n1>>n2;

    l=to_string(n1).length();
    int i=l-1, j=l-1, l1=l;

    while (l1--)
    {
        a1[i--] = n1 % 10;
        n1 /= 10;
        a2[j--] = n2 % 10;
        n2 /= 10;
    }
// eta kono kotha hoilo naki !!!
    for(i=0; i<l; i++)
    {
            cout<<i<<"="<<a1[i]<<endl;

            cout<<i<<"="<<a2[i]<<endl;;
    }

    for(i=0; i<l; i++)
    {
        if(a1[i]==a2[i])
            cout<<0;
        else
            cout<<1;
    }

    return 0;
}
*/

int main()
{
    string s1, s2;
    cin>>s1>>s2;
    int l=s1.length(), a[l+1];

    for(int i=0; i<l; i++){
        if(s1[i]==s2[i])
            a[i]=0;
        else
            a[i]=1;
    }

    //cout<<s1[2]<<endl;
    //cout<<s2[2]<<endl;
    for(int i=0; i<l; i++)
        cout<<a[i];
    cout<<endl;
    return 0;
}
