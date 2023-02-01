#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int arr[n+1];

        for(int i=0; i<n; i++)
        {
            if(s[i+2]!=0)
                arr[i]=s[i]-'0';
            else
            {

            }

        }

        for(int i=0; i<n; i++)
        {
            if(i+2<n && arr[i+2]!=0)
            {
                char ch=arr[i]-1+'a';
                cout<<ch<<endl;
                int y=ch-'a';
                cout<<y;
            }
            else if(arr[i+2]==0)
            {
                int x=arr[i]*10+arr[i+1];
                char ch=x-1+'a';
                cout<<ch<<endl;
                int y=ch-'a';
                cout<<y;
                i+=2;
            }
        }

    }

    return 0;
}
