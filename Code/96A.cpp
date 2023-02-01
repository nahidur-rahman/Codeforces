#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, l, j, temp=0;
    string s;

    cin>>s;

    l=s.length();

    for(i=0; i<l; i++)
    {
        for(j=i; j<(i+7)&&j<l; j++)
        {
            if(s[i]==s[j])
            {
                temp++;
                continue;
            }
            else
                break;
        }

        if(temp==7)
            goto answer;
        else
            temp=0;
    }
    answer:
    if(temp<7)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;


    return 0;
}
