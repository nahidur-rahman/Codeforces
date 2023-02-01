#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        if(s<10)
            cout<<s<<endl;
        else
        {
            vector<int>vec;
            int n=9;
            while(s>0)
            {
                vec.push_back(n);
                s=s-n;
                if(s<n)
                {
                    vec.push_back(s);
                    break;
                }
                n--;
            }
            for(int i=vec.size()-1; i>=0; i--)
                cout<<vec[i];
            cout<<endl;
        }
    }
    return 0;
}
