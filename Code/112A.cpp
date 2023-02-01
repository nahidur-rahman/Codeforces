#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;

    cin>>a>>b;

    int temp=0, l=a.length();

    for(int i=0;i<l;i++)
    {
        a[i]=towlower(a[i]);
        b[i]=towlower(b[i]);
        if(a[i]==b[i])
            temp=0;
        else if(a[i]>b[i])
        {
            temp=1;
            break;
        }

        else if(a[i]<b[i])
        {
            temp=-1;
            break;
        }

    }

    cout<<temp<<endl;


    return 0;
}
