#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, an;
        cin>>n;
        stack<int> stk;
        map<int, int> m;
        int arr[10]={0};
        for(int i=0; i<n; i++)
        {
            cin>>an;
            stk.push(an);
            m[n]++;
            arr[an]++;
        }
        for(auto it:m)
        {

        }

    }


    return 0;
}
