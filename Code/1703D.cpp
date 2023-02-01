#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i, j, k;
        cin>>n;
        string s[n];
        for(i=0; i<n; i++)
            cin>>s[i];
        int s1[8];
        for(i=0; i<n; i++)
        {
            int temp=0;
            for(j=0; j<n; j++)
            {
                for(k=0; k<n; k++)
                {
                    if(s[i]==s[j]+s[k])
                    {
                        s1[i]=1;
                        temp=1;
                        break;
                    }

                    else
                        s1[i]=0;
                }
                if(temp)
                    break;
            }
        }
        for(i=0; i<n; i++)
            cout<<s1[i];
        cout<<endl;
    }

    return 0;
}
